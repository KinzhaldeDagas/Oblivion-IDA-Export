0x9DF460: push    offset aMorndas; "Morndas"
0x9DF465: push    offset aSdaymorndas; "sDayMorndas"
0x9DF46A: mov     ecx, offset sDayMorndas
0x9DF46F: call    GameSetting_ConstrAndReg
0x9DF474: push    offset sub_A19FF0; void (__cdecl *)()
0x9DF479: call    _atexit
0x9DF47E: pop     ecx
0x9DF47F: retn
