0x4A9D30: push    ecx
0x4A9D31: push    esi
0x4A9D32: mov     esi, ecx
0x4A9D34: mov     eax, [esi]
0x4A9D36: mov     edx, [eax+16Ch]
0x4A9D3C: push    1
0x4A9D3E: call    edx
0x4A9D40: test    al, al
0x4A9D42: jz      short loc_4A9D5A
0x4A9D44: mov     eax, [esi+94h]
0x4A9D4A: test    eax, eax
0x4A9D4C: jz      short loc_4A9D5A
0x4A9D4E: fld     dword ptr [eax+8]
0x4A9D51: pop     esi
0x4A9D52: fstp    [esp+4+var_4]
0x4A9D55: fld     [esp+4+var_4]
0x4A9D58: pop     ecx
0x4A9D59: retn
0x4A9D5A: fld     dword ptr ds:0B356A8h
0x4A9D60: pop     esi
0x4A9D61: fstp    [esp+4+var_4]
0x4A9D64: fld     [esp+4+var_4]
0x4A9D67: pop     ecx
0x4A9D68: retn
