0x8DC9B0: push    ebx
0x8DC9B1: mov     ebx, [esp+4+arg_4]
0x8DC9B5: push    esi
0x8DC9B6: mov     esi, [esp+8+arg_0]
0x8DC9BA: push    edi
0x8DC9BB: mov     dword ptr [ebx+8], 0
0x8DC9C2: mov     edi, [esi+14Ch]
0x8DC9C8: dec     edi
0x8DC9C9: js      short loc_8DC9E6
0x8DC9CB: jmp     short loc_8DC9D0
0x8DC9CD: align 10h
0x8DC9D0: mov     eax, [esi+148h]
0x8DC9D6: mov     ecx, [eax+edi*4]
0x8DC9D9: test    ecx, ecx
0x8DC9DB: jz      short loc_8DC9E3
0x8DC9DD: mov     edx, [ecx]
0x8DC9DF: push    ebx
0x8DC9E0: call    dword ptr [edx+0Ch]
0x8DC9E3: dec     edi
0x8DC9E4: jns     short loc_8DC9D0
0x8DC9E6: mov     edx, [esi+14Ch]
0x8DC9EC: dec     edx
0x8DC9ED: js      short loc_8DCA2E
0x8DC9EF: nop
0x8DC9F0: mov     eax, [esi+148h]
0x8DC9F6: cmp     dword ptr [eax+edx*4], 0
0x8DC9FA: jnz     short loc_8DCA2B
0x8DC9FC: mov     ebx, [esi+14Ch]
0x8DCA02: dec     ebx
0x8DCA03: mov     ecx, ebx
0x8DCA05: cmp     edx, ecx
0x8DCA07: mov     [esi+14Ch], ebx
0x8DCA0D: mov     eax, edx
0x8DCA0F: jge     short loc_8DCA2B
0x8DCA11: mov     ecx, [esi+148h]
0x8DCA17: mov     edi, [ecx+eax*4+4]
0x8DCA1B: lea     ecx, [ecx+eax*4]
0x8DCA1E: mov     [ecx], edi
0x8DCA20: mov     ecx, [esi+14Ch]
0x8DCA26: inc     eax
0x8DCA27: cmp     eax, ecx
0x8DCA29: jl      short loc_8DCA11
0x8DCA2B: dec     edx
0x8DCA2C: jns     short loc_8DC9F0
0x8DCA2E: pop     edi
0x8DCA2F: pop     esi
0x8DCA30: pop     ebx
0x8DCA31: retn
