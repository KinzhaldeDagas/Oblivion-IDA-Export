0x4A9EB0: push    ecx
0x4A9EB1: push    esi
0x4A9EB2: mov     esi, ecx
0x4A9EB4: mov     eax, [esi]
0x4A9EB6: mov     edx, [eax+16Ch]
0x4A9EBC: push    1
0x4A9EBE: call    edx
0x4A9EC0: test    al, al
0x4A9EC2: jz      short loc_4A9EDA
0x4A9EC4: mov     eax, [esi+94h]
0x4A9ECA: test    eax, eax
0x4A9ECC: jz      short loc_4A9EDA
0x4A9ECE: fld     dword ptr [eax+20h]
0x4A9ED1: pop     esi
0x4A9ED2: fstp    [esp+4+var_4]
0x4A9ED5: fld     [esp+4+var_4]
0x4A9ED8: pop     ecx
0x4A9ED9: retn
0x4A9EDA: fld     dword ptr ds:0B356D8h
0x4A9EE0: pop     esi
0x4A9EE1: fstp    [esp+4+var_4]
0x4A9EE4: fld     [esp+4+var_4]
0x4A9EE7: pop     ecx
0x4A9EE8: retn
