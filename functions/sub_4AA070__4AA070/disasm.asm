0x4AA070: push    ecx
0x4AA071: push    esi
0x4AA072: mov     esi, ecx
0x4AA074: mov     eax, [esi]
0x4AA076: mov     edx, [eax+16Ch]
0x4AA07C: push    1
0x4AA07E: call    edx
0x4AA080: test    al, al
0x4AA082: jz      short loc_4AA09A
0x4AA084: mov     eax, [esi+94h]
0x4AA08A: test    eax, eax
0x4AA08C: jz      short loc_4AA09A
0x4AA08E: fld     dword ptr [eax+3Ch]
0x4AA091: pop     esi
0x4AA092: fstp    [esp+4+var_4]
0x4AA095: fld     [esp+4+var_4]
0x4AA098: pop     ecx
0x4AA099: retn
0x4AA09A: fld     dword ptr ds:0B35708h
0x4AA0A0: pop     esi
0x4AA0A1: fstp    [esp+4+var_4]
0x4AA0A4: fld     [esp+4+var_4]
0x4AA0A7: pop     ecx
0x4AA0A8: retn
