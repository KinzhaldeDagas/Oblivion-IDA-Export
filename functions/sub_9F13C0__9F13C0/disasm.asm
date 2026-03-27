0x9F13C0: push    offset aSaveFailed_; "Save failed."
0x9F13C5: push    offset aSsavefailed; "sSaveFailed"
0x9F13CA: mov     ecx, offset unk_B387D8
0x9F13CF: call    GameSetting_ConstrAndReg
0x9F13D4: push    offset sub_A216D0; void (__cdecl *)()
0x9F13D9: call    _atexit
0x9F13DE: pop     ecx
0x9F13DF: retn
