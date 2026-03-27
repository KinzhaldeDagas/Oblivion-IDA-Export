0x4A9EF0: push    ecx
0x4A9EF1: push    esi
0x4A9EF2: mov     esi, ecx
0x4A9EF4: mov     eax, [esi]
0x4A9EF6: mov     edx, [eax+16Ch]
0x4A9EFC: push    1
0x4A9EFE: call    edx
0x4A9F00: test    al, al
0x4A9F02: jz      short loc_4A9F1A
0x4A9F04: mov     eax, [esi+94h]
0x4A9F0A: test    eax, eax
0x4A9F0C: jz      short loc_4A9F1A
0x4A9F0E: fld     dword ptr [eax+24h]
0x4A9F11: pop     esi
0x4A9F12: fstp    [esp+4+var_4]
0x4A9F15: fld     [esp+4+var_4]
0x4A9F18: pop     ecx
0x4A9F19: retn
0x4A9F1A: fld     dword ptr ds:0B356E0h
0x4A9F20: pop     esi
0x4A9F21: fstp    [esp+4+var_4]
0x4A9F24: fld     [esp+4+var_4]
0x4A9F27: pop     ecx
0x4A9F28: retn
