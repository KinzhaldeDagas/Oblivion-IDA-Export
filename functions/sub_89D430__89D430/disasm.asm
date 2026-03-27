0x89D430: mov     ecx, [ecx+8]
0x89D433: test    ecx, ecx
0x89D435: jz      short locret_89D44A
0x89D437: cmp     byte ptr [esp+arg_0], 0
0x89D43C: jz      short loc_89D44D
0x89D43E: cmp     word ptr [ecx+4], 0
0x89D443: jz      short locret_89D44A
0x89D445: add     word ptr [ecx+6], 1
0x89D44A: retn    4
0x89D44D: cmp     word ptr [ecx+4], 0
0x89D452: jz      short locret_89D44A
0x89D454: add     word ptr [ecx+6], 0FFFFh
0x89D459: movzx   eax, word ptr [ecx+6]
0x89D45D: test    ax, ax
0x89D460: jnz     short locret_89D44A
0x89D462: mov     eax, [ecx]
0x89D464: mov     edx, [eax]
0x89D466: mov     [esp+arg_0], 1
0x89D46E: jmp     edx
