0x4A9F70: push    ecx
0x4A9F71: push    esi
0x4A9F72: mov     esi, ecx
0x4A9F74: mov     eax, [esi]
0x4A9F76: mov     edx, [eax+16Ch]
0x4A9F7C: push    1
0x4A9F7E: call    edx
0x4A9F80: test    al, al
0x4A9F82: jz      short loc_4A9F9A
0x4A9F84: mov     eax, [esi+94h]
0x4A9F8A: test    eax, eax
0x4A9F8C: jz      short loc_4A9F9A
0x4A9F8E: fld     dword ptr [eax+2Ch]
0x4A9F91: pop     esi
0x4A9F92: fstp    [esp+4+var_4]
0x4A9F95: fld     [esp+4+var_4]
0x4A9F98: pop     ecx
0x4A9F99: retn
0x4A9F9A: fld     dword ptr ds:0B356E8h
0x4A9FA0: pop     esi
0x4A9FA1: fstp    [esp+4+var_4]
0x4A9FA4: fld     [esp+4+var_4]
0x4A9FA7: pop     ecx
0x4A9FA8: retn
