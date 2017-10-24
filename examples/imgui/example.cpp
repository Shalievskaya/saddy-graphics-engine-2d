#ifdef WIN32
    #include <GL/gl.h>
    #include <GL/glu.h>
#endif

#include "sadimgui.h"

#include "../game/game.h"



Game* game;
bool show_test_window = false;

static void imgui_callback()
{
    ImGui::SetNextWindowSize(ImVec2(130, 130), ImGuiCond_FirstUseEver);
    ImGui::Begin("Cheating board");
    if (game->isInPlayingState())
    {
        if (ImGui::Button("+1 health")) game->increasePlayerHealth(1);
        if (ImGui::Button("+50 score")) game->increasePlayerScore(50);
        if (ImGui::Button("Kill enemies")) game->killEnemies();
    }
    if (ImGui::Button("Test Window")) show_test_window ^= 1;
    ImGui::End();

    ImGui::SetNextWindowPos(ImVec2(250, 20), ImGuiCond_FirstUseEver);
    if (show_test_window)
    {
        ImGui::ShowTestWindow(&show_test_window);
    }
}

int main(int argc, char** argv)
{
    sad::Renderer* renderer = sad::Renderer::ref();
    game = new Game(sad::Renderer::ref());
    if (!game->trySetup())
    {
        delete game;
        return 1;
    }
    game->initialize();

    sad::imgui::ImGui::init();
    sad::imgui::ImGui::enable();
    // Initialize example with cyrillic fonts
    ImGui::GetIO().Fonts->AddFontFromFileTTF("PTM55F.ttf", 14.0f, NULL, io.Fonts->GetGlyphRangesCyrillic());

    game->run();
    delete game;

    return 0;
}
