0x725DE0: mov     ecx, [ecx+4]
0x725DE3: lea     eax, [ecx-1]; switch 32 cases
0x725DE6: cmp     eax, 1Fh
0x725DE9: ja      def_725DFE
0x725DEF: movzx   edx, ds:byte_725ED0[eax]
0x725DF6: mov     eax, [esp+arg_4]
0x725DFA: mov     ecx, [esp+arg_0]
0x725DFE: jmp     ds:jpt_725DFE[edx*4]; switch jump
0x725E05: mov     edx, [eax]; jumptable 00725DFE cases 4,8,12
0x725E07: mov     dword ptr [ecx+edx*4], 4
0x725E0E: add     dword ptr [eax], 1
0x725E11: mov     edx, [eax]; jumptable 00725DFE cases 3,7,11
0x725E13: mov     dword ptr [ecx+edx*4], 4
0x725E1A: add     dword ptr [eax], 1
0x725E1D: mov     edx, [eax]; jumptable 00725DFE cases 2,6,10
0x725E1F: mov     dword ptr [ecx+edx*4], 4
0x725E26: add     dword ptr [eax], 1
0x725E29: mov     edx, [eax]; jumptable 00725DFE cases 1,5,9
0x725E2B: mov     dword ptr [ecx+edx*4], 4
0x725E32: add     dword ptr [eax], 1
0x725E35: retn    0Ch
0x725E38: mov     edx, [eax]; jumptable 00725DFE cases 16,20
0x725E3A: mov     dword ptr [ecx+edx*4], 2
0x725E41: add     dword ptr [eax], 1
0x725E44: mov     edx, [eax]; jumptable 00725DFE cases 15,19
0x725E46: mov     dword ptr [ecx+edx*4], 2
0x725E4D: add     dword ptr [eax], 1
0x725E50: mov     edx, [eax]; jumptable 00725DFE cases 14,18
0x725E52: mov     dword ptr [ecx+edx*4], 2
0x725E59: add     dword ptr [eax], 1
0x725E5C: mov     edx, [eax]; jumptable 00725DFE cases 13,17
0x725E5E: mov     dword ptr [ecx+edx*4], 2
0x725E65: add     dword ptr [eax], 1
0x725E68: retn    0Ch
0x725E6B: mov     edx, [eax]; jumptable 00725DFE cases 24,28,32
0x725E6D: mov     dword ptr [ecx+edx*4], 1
0x725E74: add     dword ptr [eax], 1
0x725E77: mov     edx, [eax]; jumptable 00725DFE cases 23,27,31
0x725E79: mov     dword ptr [ecx+edx*4], 1
0x725E80: add     dword ptr [eax], 1
0x725E83: mov     edx, [eax]; jumptable 00725DFE cases 22,26,30
0x725E85: mov     dword ptr [ecx+edx*4], 1
0x725E8C: add     dword ptr [eax], 1
0x725E8F: mov     edx, [eax]; jumptable 00725DFE cases 21,25,29
0x725E91: mov     dword ptr [ecx+edx*4], 1
0x725E98: add     dword ptr [eax], 1
