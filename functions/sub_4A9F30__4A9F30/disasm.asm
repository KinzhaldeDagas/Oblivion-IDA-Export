0x4A9F30: push    ecx
0x4A9F31: push    esi
0x4A9F32: mov     esi, ecx
0x4A9F34: mov     eax, [esi]
0x4A9F36: mov     edx, [eax+16Ch]
0x4A9F3C: push    1
0x4A9F3E: call    edx
0x4A9F40: test    al, al
0x4A9F42: jz      short loc_4A9F5A
0x4A9F44: mov     eax, [esi+94h]
0x4A9F4A: test    eax, eax
0x4A9F4C: jz      short loc_4A9F5A
0x4A9F4E: fld     dword ptr [eax+28h]
0x4A9F51: pop     esi
0x4A9F52: fstp    [esp+4+var_4]
0x4A9F55: fld     [esp+4+var_4]
0x4A9F58: pop     ecx
0x4A9F59: retn
0x4A9F5A: fld     dword ptr ds:0B356F0h
0x4A9F60: pop     esi
0x4A9F61: fstp    [esp+4+var_4]
0x4A9F64: fld     [esp+4+var_4]
0x4A9F67: pop     ecx
0x4A9F68: retn
