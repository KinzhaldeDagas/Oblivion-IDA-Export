0x9429D0: push    ebx
0x9429D1: push    ebp
0x9429D2: mov     ebp, [esp+8+arg_0]
0x9429D6: push    esi
0x9429D7: push    edi
0x9429D8: mov     edi, ecx
0x9429DA: mov     cl, [ebp+0]
0x9429DD: xor     eax, eax
0x9429DF: test    cl, cl
0x9429E1: jz      short loc_9429F5
0x9429E3: mov     edx, ebp
0x9429E5: imul    eax, 1Fh
0x9429E8: movsx   ecx, cl
0x9429EB: add     eax, ecx
0x9429ED: mov     cl, [edx+1]
0x9429F0: inc     edx
0x9429F1: test    cl, cl
0x9429F3: jnz     short loc_9429E5
0x9429F5: mov     edx, [edi+4]
0x9429F8: and     eax, 7FFFFFFFh
0x9429FD: mov     ebx, eax
0x9429FF: mov     eax, [edi+8]
0x942A02: shl     edx, 1
0x942A04: cmp     edx, eax
0x942A06: jle     short loc_942A14
0x942A08: lea     eax, [eax+eax+2]
0x942A0C: push    eax
0x942A0D: mov     ecx, edi
0x942A0F: call    sub_942BD0
0x942A14: mov     eax, [edi+8]
0x942A17: mov     ecx, [edi]
0x942A19: mov     esi, eax
0x942A1B: and     esi, ebx
0x942A1D: cmp     dword ptr [ecx+esi*4], 0FFFFFFFFh
0x942A21: jz      short loc_942A4C
0x942A23: mov     ecx, [edi]
0x942A25: cmp     [ecx+esi*4], ebx
0x942A28: jnz     short loc_942A3E
0x942A2A: add     eax, esi
0x942A2C: mov     edx, [ecx+eax*4+4]
0x942A30: push    edx
0x942A31: push    ebp
0x942A32: call    sub_8B1770
0x942A37: add     esp, 8
0x942A3A: test    eax, eax
0x942A3C: jz      short loc_942A4F
0x942A3E: mov     eax, [edi+8]
0x942A41: mov     ecx, [edi]
0x942A43: inc     esi
0x942A44: and     esi, eax
0x942A46: cmp     dword ptr [ecx+esi*4], 0FFFFFFFFh
0x942A4A: jnz     short loc_942A23
0x942A4C: inc     dword ptr [edi+4]
0x942A4F: mov     edx, [edi]
0x942A51: mov     [edx+esi*4], ebx
0x942A54: mov     eax, [edi+8]
0x942A57: mov     ecx, [edi]
0x942A59: add     eax, esi
0x942A5B: mov     [ecx+eax*4+4], ebp
0x942A5F: mov     edx, [edi+8]
0x942A62: mov     ecx, [edi]
0x942A64: pop     edi
0x942A65: lea     eax, [esi+edx*2+2]
0x942A69: mov     edx, [esp+0Ch+arg_4]
0x942A6D: pop     esi
0x942A6E: pop     ebp
0x942A6F: mov     [ecx+eax*4], edx
0x942A72: pop     ebx
0x942A73: retn    8
