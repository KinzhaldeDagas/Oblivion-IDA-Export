0x91F300: push    esi
0x91F301: mov     esi, [ecx]
0x91F303: mov     edx, [esi]
0x91F305: push    edi
0x91F306: mov     edi, [esi+4]
0x91F309: mov     esi, edx
0x91F30B: mov     eax, edx
0x91F30D: lea     edi, [esi+edi*4]
0x91F310: cmp     eax, edi
0x91F312: jz      short loc_91F33A
0x91F314: mov     esi, [eax]
0x91F316: test    esi, esi
0x91F318: jl      short loc_91F333
0x91F31A: cmp     dword ptr [edx+esi*4], 0
0x91F31E: jl      short loc_91F333
0x91F320: mov     esi, [eax]
0x91F322: mov     edx, [edx+esi*4]
0x91F325: mov     [eax], edx
0x91F327: mov     edx, [ecx]
0x91F329: mov     edx, [edx]
0x91F32B: mov     esi, [eax]
0x91F32D: cmp     dword ptr [edx+esi*4], 0
0x91F331: jge     short loc_91F320
0x91F333: add     eax, 4
0x91F336: cmp     eax, edi
0x91F338: jnz     short loc_91F314
0x91F33A: pop     edi
0x91F33B: pop     esi
0x91F33C: retn
