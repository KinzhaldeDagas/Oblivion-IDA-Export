0x774AE0: mov     eax, [esp+arg_0]
0x774AE4: add     eax, 0FFFFFFBAh; switch 11 cases
0x774AE7: cmp     eax, 0Ah
0x774AEA: ja      def_774AF0; jumptable 00774AF0 default case, cases 72,74,76,78
0x774AF0: jmp     ds:jpt_774AF0[eax*4]; switch jump
0x774AF7: mov     eax, [esp+arg_4]; jumptable 00774AF0 case 70
0x774AFB: mov     ecx, [esp+arg_8]
0x774AFF: mov     dword ptr [eax], 10h
0x774B05: mov     dword ptr [ecx], 0
0x774B0B: retn
0x774B0C: mov     edx, [esp+arg_4]; jumptable 00774AF0 case 75
0x774B10: mov     eax, [esp+arg_8]
0x774B14: mov     dword ptr [edx], 18h
0x774B1A: mov     dword ptr [eax], 8
0x774B20: retn
0x774B21: mov     ecx, [esp+arg_4]; jumptable 00774AF0 case 71
0x774B25: mov     edx, [esp+arg_8]
0x774B29: mov     dword ptr [ecx], 20h ; ' '
0x774B2F: mov     dword ptr [edx], 0
0x774B35: retn
0x774B36: mov     eax, [esp+arg_4]; jumptable 00774AF0 case 73
0x774B3A: mov     ecx, [esp+arg_8]
0x774B3E: mov     dword ptr [eax], 0Fh
0x774B44: mov     dword ptr [ecx], 1
0x774B4A: retn
0x774B4B: mov     edx, [esp+arg_4]; jumptable 00774AF0 case 80
0x774B4F: mov     eax, [esp+arg_8]
0x774B53: mov     dword ptr [edx], 10h
0x774B59: mov     dword ptr [eax], 0
0x774B5F: retn
0x774B60: mov     ecx, [esp+arg_4]; jumptable 00774AF0 case 77
0x774B64: mov     edx, [esp+arg_8]
0x774B68: mov     dword ptr [ecx], 18h
0x774B6E: mov     dword ptr [edx], 0
0x774B74: retn
0x774B75: mov     eax, [esp+arg_4]; jumptable 00774AF0 case 79
0x774B79: mov     ecx, [esp+arg_8]
0x774B7D: mov     dword ptr [eax], 18h
0x774B83: mov     dword ptr [ecx], 4
0x774B89: retn
0x774B8A: mov     edx, [esp+arg_4]; jumptable 00774AF0 default case, cases 72,74,76,78
0x774B8E: mov     eax, [esp+arg_8]
0x774B92: mov     dword ptr [edx], 0
0x774B98: mov     dword ptr [eax], 0
0x774B9E: retn
