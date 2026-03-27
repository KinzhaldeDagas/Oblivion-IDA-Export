0x9F13A0: push    offset aSaveSuccessful; "Save successful."
0x9F13A5: push    offset aSsavesuccessfu; "sSaveSuccessful"
0x9F13AA: mov     ecx, offset dword_B387D0
0x9F13AF: call    GameSetting_ConstrAndReg
0x9F13B4: push    offset sub_A216C0; void (__cdecl *)()
0x9F13B9: call    _atexit
0x9F13BE: pop     ecx
0x9F13BF: retn
