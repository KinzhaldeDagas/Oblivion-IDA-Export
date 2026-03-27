0x8F5DB0: push    ecx
0x8F5DB1: mov     eax, [ecx+8]
0x8F5DB4: test    eax, eax
0x8F5DB6: jz      short loc_8F5DD0
0x8F5DB8: mov     ecx, eax
0x8F5DBA: mov     eax, [ecx]
0x8F5DBC: lea     edx, [esp+4+var_1]
0x8F5DC0: push    edx
0x8F5DC1: call    dword ptr [eax+8]
0x8F5DC4: mov     dl, [eax]
0x8F5DC6: mov     eax, [esp+4+arg_0]
0x8F5DCA: mov     [eax], dl
0x8F5DCC: pop     ecx
0x8F5DCD: retn    4
0x8F5DD0: mov     eax, [ecx+10h]
0x8F5DD3: cmp     eax, [ecx+14h]
0x8F5DD6: setnz   cl
0x8F5DD9: lea     eax, [esp+4+var_1]
0x8F5DDD: mov     [esp+4+var_1], cl
0x8F5DE1: mov     dl, [eax]
0x8F5DE3: mov     eax, [esp+4+arg_0]
0x8F5DE7: mov     [eax], dl
0x8F5DE9: pop     ecx
0x8F5DEA: retn    4
