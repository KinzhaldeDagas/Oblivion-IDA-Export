0x4AA0B0: push    ecx
0x4AA0B1: push    esi
0x4AA0B2: mov     esi, ecx
0x4AA0B4: mov     eax, [esi]
0x4AA0B6: mov     edx, [eax+16Ch]
0x4AA0BC: push    1
0x4AA0BE: call    edx
0x4AA0C0: test    al, al
0x4AA0C2: jz      short loc_4AA0DA
0x4AA0C4: mov     eax, [esi+94h]
0x4AA0CA: test    eax, eax
0x4AA0CC: jz      short loc_4AA0DA
0x4AA0CE: fld     dword ptr [eax+40h]
0x4AA0D1: pop     esi
0x4AA0D2: fstp    [esp+4+var_4]
0x4AA0D5: fld     [esp+4+var_4]
0x4AA0D8: pop     ecx
0x4AA0D9: retn
0x4AA0DA: fld     dword ptr ds:0B35718h
0x4AA0E0: pop     esi
0x4AA0E1: fstp    [esp+4+var_4]
0x4AA0E4: fld     [esp+4+var_4]
0x4AA0E7: pop     ecx
0x4AA0E8: retn
