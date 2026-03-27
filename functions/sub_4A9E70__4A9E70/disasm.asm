0x4A9E70: push    ecx
0x4A9E71: push    esi
0x4A9E72: mov     esi, ecx
0x4A9E74: mov     eax, [esi]
0x4A9E76: mov     edx, [eax+16Ch]
0x4A9E7C: push    1
0x4A9E7E: call    edx
0x4A9E80: test    al, al
0x4A9E82: jz      short loc_4A9E9A
0x4A9E84: mov     eax, [esi+94h]
0x4A9E8A: test    eax, eax
0x4A9E8C: jz      short loc_4A9E9A
0x4A9E8E: fld     dword ptr [eax+1Ch]
0x4A9E91: pop     esi
0x4A9E92: fstp    [esp+4+var_4]
0x4A9E95: fld     [esp+4+var_4]
0x4A9E98: pop     ecx
0x4A9E99: retn
0x4A9E9A: fld     dword ptr ds:0B356D0h
0x4A9EA0: pop     esi
0x4A9EA1: fstp    [esp+4+var_4]
0x4A9EA4: fld     [esp+4+var_4]
0x4A9EA7: pop     ecx
0x4A9EA8: retn
