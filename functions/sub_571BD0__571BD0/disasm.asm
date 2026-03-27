0x571BD0: push    ebx
0x571BD1: mov     ebx, [esp+4+arg_0]
0x571BD5: test    ebx, ebx
0x571BD7: jnz     short loc_571BDD
0x571BD9: xor     eax, eax
0x571BDB: pop     ebx
0x571BDC: retn
0x571BDD: push    ebp
0x571BDE: push    edi
0x571BDF: xor     edi, edi
0x571BE1: xor     ebp, ebp
0x571BE3: cmp     [ebx+14h], di
0x571BE7: jbe     short loc_571C3F
0x571BE9: push    esi
0x571BEA: lea     ebx, [ebx+0]
0x571BF0: mov     ecx, [ebx+10h]
0x571BF3: movzx   eax, di
0x571BF6: mov     esi, [ecx+eax*4]
0x571BF9: add     edi, 1
0x571BFC: test    esi, esi
0x571BFE: jz      short loc_571C36
0x571C00: mov     edx, [esi]
0x571C02: mov     eax, [edx+4]
0x571C05: mov     ecx, esi
0x571C07: call    eax
0x571C09: test    eax, eax
0x571C0B: jz      short loc_571C36
0x571C0D: lea     ecx, [ecx+0]
0x571C10: cmp     eax, offset unk_B3A6A8
0x571C15: jz      short loc_571C20
0x571C17: mov     eax, [eax+4]
0x571C1A: test    eax, eax
0x571C1C: jnz     short loc_571C10
0x571C1E: jmp     short loc_571C36
0x571C20: mov     ecx, [esi+1Ch]
0x571C23: mov     edx, [esp+10h+arg_C]
0x571C27: mov     eax, [esp+10h+arg_8]
0x571C2B: mov     [edx], ecx
0x571C2D: cmp     eax, [esi+18h]
0x571C30: mov     ebp, esi
0x571C32: jz      short loc_571C3E
0x571C34: xor     ebp, ebp
0x571C36: movzx   ecx, word ptr [ebx+14h]
0x571C3A: cmp     edi, ecx
0x571C3C: jb      short loc_571BF0
0x571C3E: pop     esi
0x571C3F: pop     edi
0x571C40: mov     eax, ebp
0x571C42: pop     ebp
0x571C43: pop     ebx
0x571C44: retn
