struct default_callback_context
{
DWORD magic;
HWND owner;
DWORD unk1[4];
DWORD_PTR unk2[7];
HWND progress;
UINT message;
__declspec(align(8)) DWORD_PTR unk3[5];
};
