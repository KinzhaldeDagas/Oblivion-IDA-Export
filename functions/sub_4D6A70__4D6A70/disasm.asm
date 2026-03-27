0x4D6A70: push    ecx
0x4D6A71: test    ecx, ecx
0x4D6A73: push    esi
0x4D6A74: jz      short loc_4D6AA0
0x4D6A76: mov     esi, [ecx+8]
0x4D6A79: test    esi, esi
0x4D6A7B: jz      short loc_4D6AA0
0x4D6A7D: mov     ecx, esi
0x4D6A7F: call    sub_8A98D0
0x4D6A84: test    eax, eax
0x4D6A86: jnz     short loc_4D6A8B
0x4D6A88: mov     eax, [esi+50h]
0x4D6A8B: fld     dword ptr [eax+0B4h]
0x4D6A91: pop     esi
0x4D6A92: fstp    [esp+4+var_4]
0x4D6A95: fld     [esp+4+var_4]
0x4D6A98: fstp    [esp+4+var_4]
0x4D6A9B: fld     [esp+4+var_4]
0x4D6A9E: pop     ecx
0x4D6A9F: retn
0x4D6AA0: fldz
0x4D6AA2: pop     esi
0x4D6AA3: fstp    [esp+4+var_4]
0x4D6AA6: fld     [esp+4+var_4]
0x4D6AA9: pop     ecx
0x4D6AAA: retn
