QString scripting_help = "<h2>Scripting with IFace Editor</h2>\n"
"<h3>Common classes:</h3>\n"
"<ul>"
"<li><b>sad::Point2D</b> - a basic 2D point with coordinates as double"
"    <ul>"
"        <li>constructor <b>p2d(), p2d(2,3)</b> - constructs a point with specified parameters ( (0,0) in first case) </li>"
"        <li>property <b>x</b> - stores x coordinate</li>"
"        <li>property <b>y</b> - stores y coordinate</li>"
"        <li>method <b>sum(point)</b> - returns sum of two points</li>"
"        <li>method <b>sub(point)</b> - returns substruction of two points</li>"
"        <li>method <b>mid(point)</b> - returns middle point between two points</li>"
"        <li>method <b>mul(number)</b> - returns point with coordinates, multiplicated by number</li>"
"        <li>method <b>div(number)</b> - returns point with coordinates, divided by number</li>"
"    </ul>"
"</li>"
"<li><b>sad::Point2I</b> - a basic 2D point with coordinates as int"
"    <ul>"
"        <li>constructor <b>p2i(), p2i(2,3)</b> - constructs a point with specified parameters ( (0,0) in first case) </li>"
"        <li>property <b>x</b> - stores x coordinate</li>"
"        <li>property <b>y</b> - stores y coordinate</li>"
"    </ul>"
"</li>"
"<li><b>sad::Point3D</b> - a basic 3D point with coordinates as double"
"    <ul>"
"        <li>constructor <b>p3d(), p3d(2,3,4)</b> - constructs a point with specified parameters ( (0,0,0) in first case) </li>"
"        <li>property <b>x</b> - stores x coordinate</li>"
"        <li>property <b>y</b> - stores y coordinate</li>"
"        <li>property <b>z</b> - stores z coordinate</li>"
"    </ul>"
"</li>"
"<li><b>sad::Point3I</b> - a basic 3D point with coordinates as int"
"    <ul>"
"        <li>constructor <b>p3i(), p3i(2,3,4)</b> - constructs a point with specified parameters ( (0,0,0) in first case) </li>"
"        <li>property <b>x</b> - stores x coordinate</li>"
"        <li>property <b>y</b> - stores y coordinate</li>"
"        <li>property <b>z</b> - stores z coordinate</li>"
"    </ul>"
"</li>"
"<li><b>sad::Rect2D</b> - a rectangle, where all points are sad::Point2D"
"    <ul>"
"        <li>constructors <b>r2d(), r2d(p2d(0,0),p2d(0,0)), r2d(0,0,0,0), r2d(p2d(0,0),p2d(0,0),p2d(0,0),p2d(0,0))</b> - constructs a rect with specified parameters</li>"
"        <li>method <b>setPoint(index, p2d(0,0))</b> - sets a point for rectangle, where index=[0..3]</li>"
"        <li>method <b>point(index)</b> - returns a point for rectangle, where index=[0..3]</li>"
"        <li>method <b>movedToPoint(point)</b> - returns copy of rectangle with center at point. Only works, if rectangle is axis-aligned.</li>"
"    </ul>"
"</li>"
"<li><b>sad::Rect2I</b> - a rectangle, where all points are sad::Point2I"
"    <ul>"
"        <li>constructors <b>r2i(), r2i(p2i(0,0),p2i(0,0)), r2i(0,0,0,0), r2i(p2i(0,0),p2i(0,0),p2i(0,0),p2i(0,0))</b> - constructs a rect with specified parameters</li>"
"        <li>method <b>setPoint(index, p2i(0,0))</b> - sets a point for rectangle, where index=[0..3]</li>"
"        <li>method <b>point(index)</b> - returns a point for rectangle, where index=[0..3]</li>"
"    </ul>"
"</li>"
"<li><b>sad::Size2D</b> - a basic 2D size with coordinates as double"
"    <ul>"
"        <li>constructor <b>s2d(), s2d(2,3)</b> - constructs a size with specified parameters ( (0,0) in first case) </li>"
"        <li>property <b>width</b> - stores width</li>"
"        <li>property <b>height</b> - stores height</li>"
"    </ul>"
"</li>"
"<li><b>sad::Size2I</b> - a basic 2D size with coordinates as unsigned integral value"
"    <ul>"
"        <li>constructor <b>s2i(), s2i(2,3)</b> - constructs a size with specified parameters ( (0,0) in first case) </li>"
"        <li>property <b>width</b> - stores width</li>"
"        <li>property <b>height</b> - stores height</li>"
"    </ul>"
"</li>"
"<li><b>sad::Color</b> - a basic color in RGB-space"
"    <ul>"
"        <li>constructor <b>clr(), clr(r,g,b)</b> - constructs a color with specified parameters ( (0,0,0) in first case) </li>"
"        <li>property <b>r</b> - red component</li>"
"        <li>property <b>g</b> - green component</li>"
"        <li>property <b>b</b> - blue component</li>"
"    </ul>"
"</li>"
"<li><b>sad::AColor</b> - a basic color in RGBA-space"
"    <ul>"
"        <li>constructor <b>aclr(), aclr(r,g,b), aclr(r,g,b,a)</b> - constructs a color with specified parameters ( (0,0,0,0) in first case) </li>"
"        <li>property <b>r</b> - red component</li>"
"        <li>property <b>g</b> - green component</li>"
"        <li>property <b>b</b> - blue component</li>"
"        <li>property <b>a</b> - alpha component</li>"
"    </ul>"
"</li>"
"<li><b>sad::dialogue::Phrase</b> - a phrase"
"    <ul>"
"        <li>constructor <b>phrase(actorName,actorPortrait,text,duration,viewHint)</b> - constructs new phrase </li>"
"        <li>property <b>actorName</b> - a name for actor</li>"
"        <li>property <b>actorPortrait</b> - a portrait for actor</li>"
"        <li>property <b>text</b> - a text for phrase</li>"
"        <li>property <b>duration</b> - a duration for phrase</li>"
"        <li>property <b>viewHint</b> - a viewHint for phrase</li>"
"    </ul>"
"</li>"
"</ul>"
"<h3>Editor-specific objects:</h3>\n"
"<ul>"
"	<li><b>E</b> or <b>console</b> - a basic class for all operations in editor"
"	<ul>"
"		<li>method <b>screenWidth</b> - returns width of screen window</li>"
"		<li>method <b>screenHeight</b> - returns height of screen window</li>"
"		<li>method <b>log</b> - logs all arguments, converting them to string</li>"
"		<li>method <b>resourceType(\"name\")</b> - returns type of resource in tree</li>"
"		<li>method <b>resourceOptions(\"name\")</b> - returns immutable resource wrapper for options for sprite</li>"
"		<li>method <b>resourceSchema(\"name\")</b> - returns immutable object schema wrapper</li>"
"		<li>property <b>db</b> - holds all operations, related to database properties and object metaprogramming"
"			<ul>"
"				<li>method <b>list()</b> - lists properties from database, returning an array of names of properties</li>"
"				<li>method <b>type(\"name or majorid\")</b> -  returns real name of type for object. Note, that it could be performed only on scenes, scene nodes, ways, dialogues, animations, instances and groups</li>"
"				<li>method <b>readableProperties(\"name or majorid\")</b> -  returns list of readable properties for a specified object</li>"
"				<li>method <b>writableProperties(\"name or majorid\")</b> -  returns list of writable properties for a specified object</li>"
"				<li>method <b>add(\"type\", \"name\")</b> - adds new property to database. Returns true on success</li>"
"				<li>method <b>remove(\"name\")</b> - removes a property for database</li>"
"				<li>method <b>set(\"name\", value)</b> - sets a property value for database</li>"
"				<li>method <b>get(\"name\", value)</b> - returns a property value for database</li>"
"				<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"			</ul>"
"		</li>"
"		<li>property <b>scenes</b> - holds all scene-related operations"
"			<ul>"
"				<li>method <b>list()</b> - lists scenes, returning all of majorids for it</li>"
"				<li>method <b>add()</b>, <b>add(\"name\")</b> - adds scene, named or anonymous</li>"
"				<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes scene by id or by name</li>"
"				<li>method <b>moveBack(22)</b>, <b>moveBack(\"name\")</b> - moves scene back in list by id or by name</li>"
"				<li>method <b>moveFront(22)</b>, <b>moveFront(\"name\")</b> - moves scene front in list by id or by name</li>"
"				<li>method <b>set(\"scenename\", \"propertyname\", \"value\")</b> - sets property of scene. You can fetch only name by specifying \"name\" as second parameter</li>"
"				<li>method <b>get(\"scenename\", \"propertyname\", \"value\")</b> - fetched property of scene by it\'s name"
"					<ul>"
"						<li>property <b>\"name\"</b>  - name as string</li>"
"						<li>property <b>\"layer\"</b>  - a layer of scene in list. The less it is, the more early scene is drawn</li>"
"						<li>property <b>\"majorid\"</b>  - a major id of scene in database. Useful for links.</li>"
"						<li>property <b>\"minorid\"</b>  - a minor id of scene in database. Useful for links in your application.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"			</ul>"
"		</li>"
"		<li>property <b>scenenodes</b> - holds all operations related scene nodes"
"			<ul>"
"				<li>method <b>list()</b> - lists all scenenodes from all scenes, returning all of majorids for it</li>"
"				<li>method <b>listScene(\"scene\")</b> - lists scene nodes from scene, named by name or major id</li>"
"				<li>method <b>_addLabel(name of scene, font name, font size, text, name, position as point, color)</b> - adds a label to a scene</li>"
"				<li>method <b>addLabel(object)</b> - does the same as previous only style is different. Object must have fields:  \"font\", \"text\", \"point\", \"scene\" . Fields \"fontsize\", \"color\", \"name\" are optional.</li>"
"				<li>method <b>_addSprite2D(name of scene, sprite options name, name, area as rectangle, color)</b> - adds a sprite to a scene</li>"
"				<li>method <b>addSprite2D(object)</b> - does the same as previous only style is different. Object must have fields:  \"sprite\", \"area\", \"scene\" . Fields \"color\", \"name\" are optional.</li>"
"				<li>method <b>_addCustomObject(name of scene, schema name, name, font size, text, area as rectangle, color)</b> - adds a custom object to a scene</li>"
"				<li>method <b>addCustomObject(object)</b> - does the same as previous only style is different. Object must have fields:  \"schema\", \"fontsize\", \"scene\", \"text\", \"area\" . Fields \"fontsize\", \"color\", \"name\" are optional.</li>"
"				<li>method <b>makeBackground(scene node)</b> - sets nodes as background. May cause labels to disappear</li>"
"				<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes scene node by id or by name</li>"
"				<li>method <b>moveBack(22)</b>, <b>moveBack(\"name\")</b> - moves scene back in list by id or by name</li>"
"				<li>method <b>moveFront(22)</b>, <b>moveFront(\"name\")</b> - moves scene front in list by id or by name</li>"
"				<li>method <b>spanBetweenTwoPoints(scene_node_name_or_id, first_point, second_point)</b> - makes object span between two points. Object is specified by name or id and points can be created, using p2d</li>"
"				<li>method <b>set(\"nodename\", \"propertyname\", \"value\")</b> - sets property of scene node."
"					<ul>"
"						<li><b>[All node types]</b>property <b>\"name\"</b>  - name of node as string.</li>"
"						<li><b>[All node types]</b>property <b>\"visible\"</b>  - visibility of node as bool.</li>"
"						<li><b>[All node types]</b>property <b>\"area\"</b>  - area of node as sad::Rect2D.</li>"
"						<li><b>[All node types]</b>property <b>\"angle\"</b>  - angle of node as double.</li>"
"						<li><b>[All node types]</b>property <b>\"color\"</b>  - color of node as sad::AColor.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"fontsize\"</b>  - font size.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"text\"</b>  - text of label.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"linespacing\"</b>  - line spacing for label.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"font\"</b>  - a font resource name.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"maximallinewidth\"</b>  - a maximal line width in characters. Can be used to constrain line width for label and split it into lines.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"overflowstrategy\"</b>  - what we should do in case that line width exceeds a maximal value. Could have following values: E.OverflowStrategy.Visible, E.OverflowStrategy.Hidden, E.OverflowStrategy.Ellipsis.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"breaktext\"</b>  - whether we should break text into lines in case, when maximal line width exceeded. Can be either E.BreakText.Normal or E.BreakText.BreakWord.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"textellipsisposition\"</b>  - a position of suspension point in line. Can be E.TextEllipsisPosition.Begin, E.TextEllipsisPosition.Middle, E.TextEllipsisPosition.End.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"maximallinescount\"</b>  - a maximal lines, that should be displayed in label.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"overflowstrategyforlines\"</b>  - what we should do in case that  amount of lines width exceeds a maximal value. Could have following values: E.OverflowStrategy.Visible, E.OverflowStrategy.Hidden, E.OverflowStrategy.Ellipsis.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"textellipsispositionforlines\"</b>  - a position of suspension point in text. Can be E.TextEllipsisPosition.Begin, E.TextEllipsisPosition.Middle, E.TextEllipsisPosition.End.</li>"
"						<li><b>[Sprite or Custom Object]</b>property <b>\"flipx\"</b>  - a flag, whether sprite is flipped by horizontal.</li>"
"						<li><b>[Sprite or Custom Object]</b>property <b>\"flipy\"</b>  - a flag, whether sprite is flipped by vertical.</li>"
"						<li><b>[Sprite or Custom Object]</b>property <b>\"options\"</b>  - a sprite options resource name.</li>"
"						<li><b>[Custom Object]</b>property <b>\"schema\"</b>  - a schema resource name.</li>"
"						<li><b>[Custom Object]</b> has properties, that could be set via this call.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>get(\"nodename\", \"propertyname\", \"value\")</b> - fetches property of scene node by it\'s name"
"					<ul>"
"						<li><b>[All node types]</b>property <b>\"name\"</b>  - name as string</li>"
"						<li><b>[All node types]</b>property <b>\"layer\"</b>  - a layer of scene in list. The less it is, the more early scene is drawn</li>"
"						<li><b>[All node types]</b>property <b>\"majorid\"</b>  - a major id of scene in database. Useful for links.</li>"
"						<li><b>[All node types]</b>property <b>\"minorid\"</b>  - a minor id of scene in database. Useful for links in your application.</li>"
"						<li><b>[All node types]</b>property <b>\"visible\"</b>  - visibility of node as bool.</li>"
"						<li><b>[All node types]</b>property <b>\"area\"</b>  - area of node as sad::Rect2D.</li>"
"						<li><b>[All node types]</b>property <b>\"angle\"</b>  - angle of node as double.</li>"
"						<li><b>[All node types]</b>property <b>\"color\"</b>  - color of node as sad::AColor.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"fontsize\"</b>  - font size.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"text\"</b>  - text of label.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"linespacing\"</b>  - line spacing for label.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"font\"</b>  - a font resource name.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"maximallinewidth\"</b>  - a maximal line width in characters. Can be used to constrain line width for label and split it into lines..</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"overflowstrategy\"</b>  - what we should do in case that line width exceeds a maximal value. Could have following values: E.OverflowStrategy.Visible, E.OverflowStrategy.Hidden, E.OverflowStrategy.Ellipsis.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"breaktext\"</b>  - whether we should break text into lines in case, when maximal line width exceeded. Can be either E.BreakText.Normal or E.BreakText.BreakWord.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"textellipsisposition\"</b>  - a position of suspension point in line. Can be E.TextEllipsisPosition.Begin, E.TextEllipsisPosition.Middle, E.TextEllipsisPosition.End.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"maximallinescount\"</b>  - a maximal lines, that should be displayed in label.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"overflowstrategyforlines\"</b>  - what we should do in case that  amount of lines width exceeds a maximal value. Could have following values: E.OverflowStrategy.Visible, E.OverflowStrategy.Hidden, E.OverflowStrategy.Ellipsis.</li>"
"						<li><b>[Label or Custom Object]</b>property <b>\"textellipsispositionforlines\"</b>  - a position of suspension point in text. Can be E.TextEllipsisPosition.Begin, E.TextEllipsisPosition.Middle, E.TextEllipsisPosition.End.</li>"
"						<li><b>[Sprite or Custom Object]</b>property <b>\"flipx\"</b>  - a flag, whether sprite is flipped by horizontal.</li>"
"						<li><b>[Sprite or Custom Object]</b>property <b>\"flipy\"</b>  - a flag, whether sprite is flipped by vertical.</li>"
"						<li><b>[Sprite or Custom Object]</b>property <b>\"options\"</b>  - a sprite options resource name.</li>"
"						<li><b>[Custom Object]</b>property <b>\"schema\"</b>  - a schema resource name.</li>"
"						<li><b>[Custom Object]</b>has custom properties, that could be get via this call.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"			</ul>"
"		</li>"
"		<li>property <b>ways</b> - holds all operations related to ways"
"			<ul>"
"				<li>method <b>list()</b> - lists all ways, returning all of majorids for it</li>"
"				<li>method <b>_add(name, totaltime as double, closed as bool, array of points)</b> - adds new way to a db</li>"
"				<li>method <b>add(object)</b> - does the same as previous only style is different. Fields \"name\", \"totaltime\", \"closed\", \"points\" are optional.</li>"
"				<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes way by id or by name</li>"
"				<li>method <b>addPoint(way, point)</b> - adds new point to a way.</li>"
"				<li>method <b>removePoint(way, position of point)</b> - removes a point from a way.</li>"
"				<li>method <b>point(way, position of point)</b> - returns a reference of point from a way, which can be casted to common point. Throws exception on invalid positions. Properties of point:"
"					<ul>"
"						<li>property <b>x</b> - x coordinate of point</li>"
"						<li>property <b>y</b> - y coordinate of point</li>"
"						<li>property <b>position</b> - read-only position of point</li>"
"						<li>method <b>moveBack</b> - moves point back in way list (does nothing, if point cannot be moved in such way)</li>"
"						<li>method <b>moveFront</b> - moves point front in way list (does nothing, if point cannot be moved in such way)</li>"
"					</ul>"
"				</li>"
"				<li>method <b>set(\"wayname\", \"propertyname\", \"value\")</b> - sets property of way."
"					<ul>"
"						<li>property <b>\"name\"</b>  - name as string</li>"
"						<li>property <b>\"totaltime\"</b>  - a total time for a way.</li>"
"						<li>property <b>\"closed\"</b>  - whether way is closed.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>get(\"wayname\", \"propertyname\", \"value\")</b> - fetches property of way by it\'s name"
"					<ul>"
"						<li>property <b>\"name\"</b>  - name as string</li>"
"						<li>property <b>\"majorid\"</b>  - a major id of scene in database. Useful for links.</li>"
"						<li>property <b>\"minorid\"</b>  - a minor id of scene in database. Useful for links in your application.</li>"
"						<li>property <b>\"totaltime\"</b>  - a total time for a way.</li>"
"						<li>property <b>\"closed\"</b>  - whether way is closed.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"			</ul>"
"		</li>"
"		<li>property <b>dialogues</b> - holds all operations related to dialogues"
"			<ul>"
"				<li>method <b>list()</b> - lists all dialogues, returning all of majorids for it</li>"
"				<li>method <b>_add(name, array of phrases)</b> - adds new way to a db</li>"
"				<li>method <b>add(object)</b> - does the same as previous only style is different. Fields \"name\",  \"points\" are optional.</li>"
"				<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes dialogue by id or by name</li>"
"				<li>method <b>addPhrase(dialogue, phrase)</b> - adds new phrase to a dialogue.</li>"
"				<li>method <b>removePhrase(dialogue, position of phrase)</b> - removes a phrase from a dialogue.</li>"
"				<li>method <b>phrase(dialogue, position of phrase)</b> - returns a reference of phrase from a dialogues, which can be casted to common phrase. Throws exception on invalid positions. Properties of reference to a phrase:"
"					<ul>"
"						<li>property <b>actorName</b> - an actor name</li>"
"						<li>property <b>actorPortrait</b> - an actor portrait as string</li>"
"						<li>property <b>text</b> - a text</li>"
"						<li>property <b>duration</b> - a duration of phrase</li>"
"						<li>property <b>viewHint</b> - a view hint</li>"
"						<li>property <b>position</b> - read-only position of phrase</li>"
"						<li>method <b>moveBack</b> - moves phrase back in way list (does nothing, if phrase cannot be moved in such way)</li>"
"						<li>method <b>moveFront</b> - moves phrase front in way list (does nothing, if phrase cannot be moved in such way)</li>"
"					</ul>"
"				</li>"
"				<li>method <b>set(\"wayname\", \"propertyname\", \"value\")</b> - sets property of dialogue."
"					<ul>"
"						<li>property <b>\"name\"</b>  - name as string</li>"
"					</ul>"
"				</li>"
"				<li>method <b>get(\"wayname\", \"propertyname\", \"value\")</b> - fetches property of dialogue by it\'s name"
"					<ul>"
"						<li>property <b>\"name\"</b>  - name as string</li>"
"						<li>property <b>\"majorid\"</b>  - a major id of scene in database. Useful for links.</li>"
"						<li>property <b>\"minorid\"</b>  - a minor id of scene in database. Useful for links in your application.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"			</ul>"
"		</li>"
"		<li>property <b>animations</b> - holds all operations related to animations"
"			<ul>"
"				<li>method <b>list()</b> - lists animations, returning array of their major ids</li>"
"				<li>method <b>_add(\"type\", \"name\", time, looped)</b> - adds specified type (like in combo box) of animation into editor, using specified name, time and flag, whether it's looped</li>"
"				<li>method <b>addBlinking(object)</b> - adds animation of type Blinking. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addCameraRotation(object)</b> - adds animation of type CameraRotation. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addCameraShaking(object)</b> - adds animation of type CameraShaking. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addColor(object)</b> - adds animation of type Color. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addFontList(object)</b> - adds animation of type FontList. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addFontSize(object)</b> - adds animation of type FontSize. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addOptionList(object)</b> - adds animation of type OptionList. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addParallel(object)</b> - adds animation of type Parallel. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addResize(object)</b> - adds animation of type Resize. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addRotate(object)</b> - adds animation of type Rotate. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addSimpleMovement(object)</b> - adds animation of type SimpleMovement. Fields of object, like \"name\", \"time\", \"looped\",\"start_point\", \"end_point\"</li>"
"				<li>method <b>addSequential(object)</b> - adds animation of type Sequential. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addTextureCoordinatesList(object)</b> - adds animation of type TextureCoordinatesList. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addTextureCoordinatesContinuous(object)</b> - adds animation of type TextureCoordinatesContinuous. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addTyping(object)</b> - adds animation of type Typing. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>addWayMoving(object)</b> - adds animation of type WayMoving. Fields of object, like \"name\", \"time\", \"looped\"</li>"
"				<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes animation by id or by name</li>"
"				<li>method <b>addToComposite(composite animation, animation)</b> - adds animation to composite animation's list (composite is Parallel or Sequential animation). Returns true on success, false on failure</li>"
"				<li>method <b>removeFromComposite(composite animation, animation)</b> - removes animation from composite animation's list (composite is Parallel or Sequential animation). Returns true on success, false if animation is not exists</li>"
"				<li>method <b>compositeLength(composite animation)</b> -  returns count of animations in composite animation's list (composite is Parallel or Sequential animation).</li>"
"				<li>method <b>getAnimation(composite animation, position)</b> -  returns animation as major id from composite animation's list, specified by pos (composite is Parallel or Sequential animation). Returns 0, if position is not valid </li>"
"				<li>method <b>moveBackInCompositeList(composite animation, position)</b> -  moves animation back in composite animation's list. Returns true on success, false on error </li>"
"				<li>method <b>moveFrontInCompositeList(composite animation, position)</b> -  moves animation front in composite animation's list. Returns true on success, false on error </li>"
"				<li>method <b>set(\"animationname\", \"propertyname\", \"value\")</b> - sets property of animation. "
"					<ul>"
"						<li><b>[All animation types]</b> property <b>\"name\"</b>  - name as string</li>"
"						<li><b>[All animation types]</b> property <b>\"time\"</b>  - a time, how long animation should be played.</li>"
"						<li><b>[All animation types]</b> property <b>\"looped\"</b>  - a flag, whether animation is looped.</li>"
"						<li><b>[All animation types]</b> property <b>\"easing_type\"</b>  - a type of easing function as numerical value. Use <b>E.animations.easing</b> function to convert between string representation and number</li>"
"						<li><b>[All animation types]</b> property <b>\"easing_overshoot_amplitude\"</b>  - an overshoot amplitude for easing function</li>"
"						<li><b>[All animation types]</b> property <b>\"easing_period\"</b>  - a period for easing function</li>"
"						<li><b>[Blinking]</b> property <b>\"frequency\"</b>  - a frequency, how much times should state of visibility of object change.</li>"
"						<li><b>[CameraShaking]</b> property <b>\"offset\"</b>  - a maximal offset of camera during animation.</li>"
"						<li><b>[CameraShaking]</b> property <b>\"frequency\"</b>  - a maximal offset of camera during animation.</li>"
"						<li><b>[CameraRotation]</b> property <b>\"pivot\"</b>  - a pivot point, which should camera turn around.</li>"
"						<li><b>[CameraRotation]</b> property <b>\"min_angle\"</b>  - a starting angle for camera rotation.</li>"
"						<li><b>[CameraRotation]</b> property <b>\"max_angle\"</b>  - an ending angle for camera rotation.</li>"
"						<li><b>[Color]</b> property <b>\"min_color\"</b>  - a starting color (sad::AColor) for color changing animation.</li>"
"						<li><b>[Color]</b> property <b>\"max_color\"</b>  - an ending color (sad::AColor) for color changing animation.</li>"
"						<li><b>[FontList]</b> property <b>\"fonts\"</b>  - an array of strings, which represents links to font resources.</li>"
"						<li><b>[FontSize]</b> property <b>\"min_size\"</b>  - a starting size for size animation.</li>"
"						<li><b>[FontSize]</b> property <b>\"max_size\"</b>  - an  ending size for size animation.</li>"
"						<li><b>[Resize]</b> property <b>\"start_size\"</b>  - a starting size for resize animation.</li>"
"						<li><b>[Resize]</b> property <b>\"end_size\"</b>    - an ending size for resize animation.</li>"
"						<li><b>[SimpleMovement]</b> property <b>\"start_point\"</b>    - a starting point for simple movement animation.</li>"
"						<li><b>[SimpleMovement]</b> property <b>\"end_point\"</b>    - an ending point for simple movement animation.</li>"
"						<li><b>[Rotate]</b> property <b>\"min_angle\"</b>  - a starting angle for rotation.</li>"
"						<li><b>[Rotate]</b> property <b>\"max_angle\"</b>  - an ending angle for rotation.</li>"
"						<li><b>[OptionList of TextureCoordinatesList]</b> property <b>\"list\"</b>  - an array of strings, which represents links to sprite options resources.</li>"
"						<li><b>[TextureCoordinatesContinuous]</b> property <b>\"start_rect\"</b>  - a starting rectangle (sad::Rect2D) for animation.</li>"
"						<li><b>[TextureCoordinatesContinuous]</b> property <b>\"end_rect\"</b>  - an engine rectangle (sad::Rect2D) for animation.</li>"
"						<li><b>[WayMoving]</b> property <b>\"way_moving\"</b>  - a major id for a way.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>get(\"animationname\", \"propertyname\")</b> - fetches property of animation by it\'s name"
"					<ul>"
"						<li><b>[All animation types]</b> property <b>\"name\"</b>  - name as string</li>"
"						<li><b>[All animation types]</b> property <b>\"majorid\"</b>  - a major id of scene in database. Useful for links.</li>"
"						<li><b>[All animation types]</b> property <b>\"minorid\"</b>  - a minor id of scene in database. Useful for links in your application.</li>"
"						<li><b>[All animation types]</b> property <b>\"time\"</b>  - a time, how long animation should be played.</li>"
"						<li><b>[All animation types]</b> property <b>\"looped\"</b>  - a flag, whether animation is looped.</li>"
"						<li><b>[All animation types]</b> property <b>\"easing_type\"</b>  - a type of easing function as numerical value. Use <b>E.animations.easing</b> function to convert between string representation and number</li>"
"						<li><b>[All animation types]</b> property <b>\"easing_overshoot_amplitude\"</b>  - an overshoot amplitude for easing function</li>"
"						<li><b>[All animation types]</b> property <b>\"easing_period\"</b>  - a period for easing function</li>"
"						<li><b>[Blinking]</b> property <b>\"frequency\"</b>  - a frequency, how much times should state of visibility of object change.</li>"
"						<li><b>[CameraShaking]</b> property <b>\"offset\"</b>  - a maximal offset of camera during animation.</li>"
"						<li><b>[CameraShaking]</b> property <b>\"frequency\"</b>  - a maximal offset of camera during animation.</li>"
"						<li><b>[CameraRotation]</b> property <b>\"pivot\"</b>  - a pivot point, which should camera turn around.</li>"
"						<li><b>[CameraRotation]</b> property <b>\"min_angle\"</b>  - a starting angle for camera rotation.</li>"
"						<li><b>[CameraRotation]</b> property <b>\"max_angle\"</b>  - an ending angle for camera rotation.</li>"
"						<li><b>[Color]</b> property <b>\"min_color\"</b>  - a starting color (sad::AColor) for color changing animation.</li>"
"						<li><b>[Color]</b> property <b>\"max_color\"</b>  - an ending color (sad::AColor) for color changing animation.</li>"
"						<li><b>[FontList]</b> property <b>\"fonts\"</b>  - an array of strings, which represents links to font resources.</li>"
"						<li><b>[FontSize]</b> property <b>\"min_size\"</b>  - a starting size for size animation.</li>"
"						<li><b>[FontSize]</b> property <b>\"max_size\"</b>  - an  ending size for size animation.</li>"
"						<li><b>[Resize]</b> property <b>\"start_size\"</b>  - a starting size for resize animation for object.</li>"
"						<li><b>[Resize]</b> property <b>\"end_size\"</b>  - an ending size for resize animation for object.</li>"
"						<li><b>[SimpleMovement]</b> property <b>\"start_point\"</b>    - a starting point for simple movement animation.</li>"
"						<li><b>[SimpleMovement]</b> property <b>\"end_point\"</b>    - an ending point for simple movement animation.</li>"
"						<li><b>[Rotate]</b> property <b>\"min_angle\"</b>  - a starting angle for rotation.</li>"
"						<li><b>[Rotate]</b> property <b>\"max_angle\"</b>  - an ending angle for rotation.</li>"
"						<li><b>[OptionList of TextureCoordinatesList]</b> property <b>\"list\"</b>  - an array of strings, which represents links to sprite options resources.</li>"
"						<li><b>[TextureCoordinatesContinuous]</b> property <b>\"start_rect\"</b>  - a starting rectangle (sad::Rect2D) for animation.</li>"
"						<li><b>[TextureCoordinatesContinuous]</b> property <b>\"end_rect\"</b>  - an engine rectangle (sad::Rect2D) for animation.</li>"
"						<li><b>[WayMoving]</b> property <b>\"way_moving\"</b>  - a major id for a way.</li>"
"						<li><b>[Parallel or Sequential]</b> property <b>\"list\"</b>  - a list of major ids, which are in this animation.</li>"
"					</ul>"
"				</li>"
"				<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"               <li>property <b>instances</b> - holds all operations related to animation instances"
"                   <ul>"
"						<li>method <b>list()</b> - lists all animation instances, returning all of majorids for it</li>"
"						<li>method <b>_addInstance(name, reference to animation from database as number, reference to animation from tree as string, reference to object, starting time)</b> - adds new instance. id of animation from database take priority if it valid.</li>"
"						<li>method <b>addInstance(object)</b> - does the same as previous only style is different and animation fields can be used as both references. Fields \"name\",  \"animation\", \"object\", \"starttime\" are optional.</li>"
"						<li>method <b>_addWayInstance(name, reference to way, reference to object, starting time)</b> - adds new way instance.</li>"
"						<li>method <b>addWayInstance(object)</b> - does the same as previous only style is different. Fields \"name\",  \"way\", \"object\", \"starttime\" are optional.</li>"
"						<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes instance by id or by name</li>"
"						<li>method <b>set(\"animation instance name\", \"propertyname\", \"value\")</b> - sets property of animation instance."
"							<ul>"
"								<li><b>[All types]</b>property <b>\"name\"</b>  - name as string</li>"
"								<li><b>[All types]</b>property <b>\"animation\"</b>  - animation reference to an item from tree as string</li>"
"								<li><b>[All types]</b>property <b>\"animationmajorid\"</b>  - animation reference to an item from database as number</li>"
"								<li><b>[All types]</b>property <b>\"object\"</b>  - a reference to object as number</li>"
"								<li><b>[All types]</b>property <b>\"starttime\"</b>  - a time, which is noted to animation, when instance starts as double</li>"
"								<li><b>[WayInstance]</b>property <b>\"way\"</b>  - a reference to way as number</li>"
"							</ul>"
"						</li>"
"						<li>method <b>get(\"animation instance name\", \"propertyname\", \"value\")</b> - fetches property of animation instance by it\'s name"
"							<ul>"
"								<li><b>[All types]</b>property <b>\"name\"</b>  - name as string</li>"
"								<li><b>[All types]</b>property <b>\"majorid\"</b>  - a major id of animation in database. Useful for links.</li>"
"								<li><b>[All types]</b>property <b>\"minorid\"</b>  - a minor id of animation in database. Useful for links in your application.</li>"
"								<li><b>[All types]</b>property <b>\"name\"</b>  - name as string</li>"
"								<li><b>[All types]</b>property <b>\"animation\"</b>  - animation reference to an item from tree as string</li>"
"								<li><b>[All types]</b>property <b>\"animationmajorid\"</b>  - animation reference to an item from database as number</li>"
"								<li><b>[All types]</b>property <b>\"object\"</b>  - a reference to object as number</li>"
"								<li><b>[All types]</b>property <b>\"starttime\"</b>  - a time, which is noted to animation, when instance starts as double</li>"
"								<li><b>[WayInstance]</b>property <b>\"way\"</b>  - a reference to way as number</li>"
"							</ul>"
"						</li>"
"						<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"                   </ul>"
"               </li>"
"               <li>property <b>groups</b> - holds all operations related to animation groups"
"                   <ul>"
"						<li>method <b>list()</b> - lists all animation groups, returning all of majorids for it</li>"
"						<li>method <b>_add(name, whether it\'s looped)</b> - adds new group with specified name and flag, whether it\'s looped.</li>"
"						<li>method <b>add(object)</b> - does the same as previous only style is different and animation fields can be used as both references. Fields \"name\",  \"looped\" are optional.</li>"
"						<li>method <b>remove(22)</b>, <b>remove(\"name\")</b> - removes group by id or by name</li>"
"						<li>method <b>length(22)</b>, <b>length(\"name\")</b> - returns count of animation instances in group</li>"
"						<li>method <b>entry(id, position)</b>, <b>entry(\"name\", position)</b> - returns animation instace by it\'s position in group. 0 is returned if position is invalid</li>"
"						<li>method <b>addInstance(group, instance)</b> - adds instance to group. Returns true on success, false if instance is already in list</li>"
"						<li>method <b>removeInstance(group, position)</b> - removes instance, marked by position in a group from parent group. Returns true if position is valid, false if not</li>"
"						<li>method <b>set(\"group name\", \"propertyname\", \"value\")</b> - sets property of animation group."
"							<ul>"
"								<li>property <b>\"name\"</b>  - name as string</li>"
"								<li>property <b>\"looped\"</b>  - flag, which indicates, whether group is looped</li>"
"								<li>property <b>\"sequential\"</b>  - flag, which indicates, whether instances in group should be run sequentially or parallel</li>"
"							</ul>"
"						</li>"
"						<li>method <b>get(\"group name\", \"propertyname\")</b> - fetches property of animation group by it\'s name"
"							<ul>"
"								<li>property <b>\"name\"</b>  - name as string</li>"
"								<li>property <b>\"majorid\"</b>  - a major id of animation in database. Useful for links.</li>"
"								<li>property <b>\"minorid\"</b>  - a minor id of animation in database. Useful for links in your application.</li>"
"								<li>property <b>\"looped\"</b>  - flag, which indicates, whether group is looped</li>"
"								<li>property <b>\"sequential\"</b>  - flag, which indicates, whether instances in group should be run sequentially or parallel</li>"
"								<li>property <b>\"instances\"</b>  - list of major ids of animation instances in group</li>"
"							</ul>"
"						</li>"
"						<li>method <b>attr</b> - depending from number of arguments applies <b>set</b> or <b>get</b> methods respectively</li>"
"                   </ul>"
"               </li>"
"			</ul>"
"		</li>"
"	</ul>"
"	</li>"
"</ul>";