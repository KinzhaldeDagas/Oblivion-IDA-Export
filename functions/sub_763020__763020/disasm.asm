0x763020: mov     eax, [esp+arg_0]
0x763024: test    eax, eax
0x763026: jz      short locret_76303F
0x763028: cmp     dword ptr [eax+1Ch], 0
0x76302C: jz      short locret_76303F
0x76302E: mov     ecx, [ecx+8A0h]
0x763034: mov     edx, [ecx]
0x763036: mov     [esp+arg_0], eax
0x76303A: mov     eax, [edx+18h]
0x76303D: jmp     eax
0x76303F: retn    4
