0x9F0F40: push    offset aSaveLocationFu; "Save location full. Disabling Autosave."
0x9F0F45: push    offset aSautosavedisab; "sAutoSaveDisabledDueToLackOfSpace"
0x9F0F4A: mov     ecx, offset unk_B386B8
0x9F0F4F: call    GameSetting_ConstrAndReg
0x9F0F54: push    offset sub_A21490; void (__cdecl *)()
0x9F0F59: call    _atexit
0x9F0F5E: pop     ecx
0x9F0F5F: retn
