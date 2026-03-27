0x9F13E0: push    offset aSaveGameDelete; "Save game deleted."
0x9F13E5: push    offset aSdeletesuccess; "sDeleteSuccessful"
0x9F13EA: mov     ecx, offset dword_B387E0
0x9F13EF: call    GameSetting_ConstrAndReg
0x9F13F4: push    offset sub_A216E0; void (__cdecl *)()
0x9F13F9: call    _atexit
0x9F13FE: pop     ecx
0x9F13FF: retn
