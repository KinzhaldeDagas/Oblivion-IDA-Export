0x4A9FB0: push    ecx
0x4A9FB1: push    esi
0x4A9FB2: mov     esi, ecx
0x4A9FB4: mov     eax, [esi]
0x4A9FB6: mov     edx, [eax+16Ch]
0x4A9FBC: push    1
0x4A9FBE: call    edx
0x4A9FC0: test    al, al
0x4A9FC2: jz      short loc_4A9FDA
0x4A9FC4: mov     eax, [esi+94h]
0x4A9FCA: test    eax, eax
0x4A9FCC: jz      short loc_4A9FDA
0x4A9FCE: fld     dword ptr [eax+30h]
0x4A9FD1: pop     esi
0x4A9FD2: fstp    [esp+4+var_4]
0x4A9FD5: fld     [esp+4+var_4]
0x4A9FD8: pop     ecx
0x4A9FD9: retn
0x4A9FDA: fld     dword ptr ds:0B356F8h
0x4A9FE0: pop     esi
0x4A9FE1: fstp    [esp+4+var_4]
0x4A9FE4: fld     [esp+4+var_4]
0x4A9FE7: pop     ecx
0x4A9FE8: retn
