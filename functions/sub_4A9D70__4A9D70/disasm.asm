0x4A9D70: push    ecx
0x4A9D71: push    esi
0x4A9D72: mov     esi, ecx
0x4A9D74: mov     eax, [esi]
0x4A9D76: mov     edx, [eax+16Ch]
0x4A9D7C: push    1
0x4A9D7E: call    edx
0x4A9D80: test    al, al
0x4A9D82: jz      short loc_4A9D9A
0x4A9D84: mov     eax, [esi+94h]
0x4A9D8A: test    eax, eax
0x4A9D8C: jz      short loc_4A9D9A
0x4A9D8E: fld     dword ptr [eax+0Ch]
0x4A9D91: pop     esi
0x4A9D92: fstp    [esp+4+var_4]
0x4A9D95: fld     [esp+4+var_4]
0x4A9D98: pop     ecx
0x4A9D99: retn
0x4A9D9A: fld     dword ptr ds:0B356B0h
0x4A9DA0: pop     esi
0x4A9DA1: fstp    [esp+4+var_4]
0x4A9DA4: fld     [esp+4+var_4]
0x4A9DA7: pop     ecx
0x4A9DA8: retn
