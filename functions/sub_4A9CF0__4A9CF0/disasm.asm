0x4A9CF0: push    ecx
0x4A9CF1: push    esi
0x4A9CF2: mov     esi, ecx
0x4A9CF4: mov     eax, [esi]
0x4A9CF6: mov     edx, [eax+16Ch]
0x4A9CFC: push    1
0x4A9CFE: call    edx
0x4A9D00: test    al, al
0x4A9D02: jz      short loc_4A9D1A
0x4A9D04: mov     eax, [esi+94h]
0x4A9D0A: test    eax, eax
0x4A9D0C: jz      short loc_4A9D1A
0x4A9D0E: fld     dword ptr [eax+4]
0x4A9D11: pop     esi
0x4A9D12: fstp    [esp+4+var_4]
0x4A9D15: fld     [esp+4+var_4]
0x4A9D18: pop     ecx
0x4A9D19: retn
0x4A9D1A: fld     dword ptr ds:0B35698h
0x4A9D20: pop     esi
0x4A9D21: fstp    [esp+4+var_4]
0x4A9D24: fld     [esp+4+var_4]
0x4A9D27: pop     ecx
0x4A9D28: retn
