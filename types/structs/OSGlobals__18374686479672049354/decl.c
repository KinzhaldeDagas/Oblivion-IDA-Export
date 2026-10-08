struct OSGlobals
{
UInt8 quitGame;
UInt8 exitToMainMenu;
UInt8 unk02;
UInt8 unk03;
UInt8 unk04;
UInt8 pad05[3];
HWND window;
HINSTANCE procInstance;
UInt32 mainThreadID;
HANDLE mainThreadHandle;
UInt32 unk18;
UInt32 unk1C;
InputGlobal *input;
void *sound;
};
