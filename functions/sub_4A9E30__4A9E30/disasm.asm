0x4A9E30: push    ecx
0x4A9E31: push    esi
0x4A9E32: mov     esi, ecx
0x4A9E34: mov     eax, [esi]
0x4A9E36: mov     edx, [eax+16Ch]
0x4A9E3C: push    1
0x4A9E3E: call    edx
0x4A9E40: test    al, al
0x4A9E42: jz      short loc_4A9E5A
0x4A9E44: mov     eax, [esi+94h]
0x4A9E4A: test    eax, eax
0x4A9E4C: jz      short loc_4A9E5A
0x4A9E4E: fld     dword ptr [eax+18h]
0x4A9E51: pop     esi
0x4A9E52: fstp    [esp+4+var_4]
0x4A9E55: fld     [esp+4+var_4]
0x4A9E58: pop     ecx
0x4A9E59: retn
0x4A9E5A: fld     dword ptr ds:0B356C8h
0x4A9E60: pop     esi
0x4A9E61: fstp    [esp+4+var_4]
0x4A9E64: fld     [esp+4+var_4]
0x4A9E67: pop     ecx
0x4A9E68: retn
