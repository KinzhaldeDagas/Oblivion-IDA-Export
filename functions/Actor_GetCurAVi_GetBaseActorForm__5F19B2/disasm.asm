0x5F19B2: mov     eax, [esi]
0x5F19B4: mov     edx, [eax+170h]
0x5F19BA: mov     edi, [esi+58h]
0x5F19BD: mov     ecx, esi
0x5F19BF: xor     ebp, ebp
0x5F19C1: call    edx
0x5F19C3: mov     ebx, eax
0x5F19C5: test    ebx, ebx
0x5F19C7: jz      short Actor_GetCurAVi___GetMagcka
0x5F19C9: mov     eax, [esi]
0x5F19CB: mov     edx, [eax+190h]
0x5F19D1: mov     ecx, esi
0x5F19D3: call    edx
0x5F19D5: test    al, al
0x5F19D7: jz      short Actor_GetCurAVi___GetMagcka
0x5F19D9: mov     ebp, ebx
