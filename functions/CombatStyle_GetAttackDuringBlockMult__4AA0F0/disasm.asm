0x4AA0F0: push    ecx
0x4AA0F1: push    esi
0x4AA0F2: mov     esi, ecx
0x4AA0F4: mov     eax, [esi]
0x4AA0F6: mov     edx, [eax+16Ch]
0x4AA0FC: push    1
0x4AA0FE: call    edx
0x4AA100: test    al, al
0x4AA102: jz      short loc_4AA11A
0x4AA104: mov     eax, [esi+94h]
0x4AA10A: test    eax, eax
0x4AA10C: jz      short loc_4AA11A
0x4AA10E: fld     dword ptr [eax+48h]
0x4AA111: pop     esi
0x4AA112: fstp    [esp+4+var_4]
0x4AA115: fld     [esp+4+var_4]
0x4AA118: pop     ecx
0x4AA119: retn
0x4AA11A: fld     dword ptr ds:0B35720h
0x4AA120: pop     esi
0x4AA121: fstp    [esp+4+var_4]
0x4AA124: fld     [esp+4+var_4]
0x4AA127: pop     ecx
0x4AA128: retn
