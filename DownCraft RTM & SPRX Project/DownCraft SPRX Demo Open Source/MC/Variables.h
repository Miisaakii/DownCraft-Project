//Pages
bool MainMenu;
bool HostPage;
bool NoHostPage;


//ScrollBar for pages//
int ScrollBarMenu = 0;
int ScrollHostPage = 0;
int ScrollNoHostPage = 0;
int ScrollDefault = 204; //default int for Main Menu
float ScrollAnimationOffset = 0.0; //Animation float
float ScrollSpeed = 0.0004; //used for speed the float animation on scrollbar


//Host Page Options
bool GodMode = false;


//Non Host Page Options
bool SuperSpeed = false;
bool MultiJump = false;


//HUDS//
int SettingsInstructions = 0;
int SettingsScrollInventoryCase = 0; //8 cases work only if menu is closed
int FirstLoadSPRX = 0; //if changed to 1 = no need make hud load again

int LockOptions = 0;