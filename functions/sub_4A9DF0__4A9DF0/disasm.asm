0x4A9DF0: push    ecx
0x4A9DF1: push    esi
0x4A9DF2: mov     esi, ecx
0x4A9DF4: mov     eax, [esi]
0x4A9DF6: mov     edx, [eax+16Ch]
0x4A9DFC: push    1
0x4A9DFE: call    edx
0x4A9E00: test    al, al
0x4A9E02: jz      short loc_4A9E1A
0x4A9E04: mov     eax, [esi+94h]
0x4A9E0A: test    eax, eax
0x4A9E0C: jz      short loc_4A9E1A
0x4A9E0E: fld     dword ptr [eax+14h]
0x4A9E11: pop     esi
0x4A9E12: fstp    [esp+4+var_4]
0x4A9E15: fld     [esp+4+var_4]
0x4A9E18: pop     ecx
0x4A9E19: retn
0x4A9E1A: fld     dword ptr ds:0B356C0h
0x4A9E20: pop     esi
0x4A9E21: fstp    [esp+4+var_4]
0x4A9E24: fld     [esp+4+var_4]
0x4A9E27: pop     ecx
0x4A9E28: retn
