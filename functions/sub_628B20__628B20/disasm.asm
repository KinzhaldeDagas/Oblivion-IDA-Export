0x628B20: mov     eax, [esp+arg_4]
0x628B24: cmp     eax, 30h; switch 49 cases
0x628B27: ja      short def_628B30; jumptable 00628B30 default case, cases 1-6,8-10,12-17,19-26,28-47
0x628B29: movzx   eax, ds:byte_628B74[eax]
0x628B30: jmp     ds:jpt_628B30[eax*4]; switch jump
0x628B37: fld     dword ptr ds:0A30634h; jumptable 00628B30 case 11
0x628B3D: fstp    dword ptr [ecx+294h]
0x628B43: retn    8
0x628B46: mov     dword ptr [ecx+298h], 0FFFFFFFFh; jumptable 00628B30 case 48
0x628B50: retn    8
0x628B53: mov     ecx, [esp+arg_0]; jumptable 00628B30 cases 0,7,18,27
0x628B57: mov     edx, [ecx]
0x628B59: mov     eax, [edx+2C0h]
0x628B5F: call    eax
0x628B61: retn    8; jumptable 00628B30 default case, cases 1-6,8-10,12-17,19-26,28-47
