0x6ECE30: push    ebx
0x6ECE31: push    edi
0x6ECE32: mov     edi, [esp+8+arg_0]
0x6ECE36: test    edi, edi
0x6ECE38: mov     ebx, ecx
0x6ECE3A: jz      short loc_6ECE5E
0x6ECE3C: mov     eax, [edi]
0x6ECE3E: mov     edx, [eax+4]
0x6ECE41: mov     ecx, edi
0x6ECE43: call    edx
0x6ECE45: test    eax, eax
0x6ECE47: jz      short loc_6ECE5E
0x6ECE49: lea     esp, [esp+0]
0x6ECE50: cmp     eax, offset dword_B3F584
0x6ECE55: jz      short loc_6ECE65
0x6ECE57: mov     eax, [eax+4]
0x6ECE5A: test    eax, eax
0x6ECE5C: jnz     short loc_6ECE50
0x6ECE5E: pop     edi
0x6ECE5F: xor     al, al
0x6ECE61: pop     ebx
0x6ECE62: retn    4
0x6ECE65: cmp     dword ptr [ebx+40h], 0
0x6ECE69: jz      short loc_6ECE5E
0x6ECE6B: push    esi
0x6ECE6C: xor     esi, esi
0x6ECE6E: cmp     [edi+14h], si
0x6ECE72: jbe     short loc_6ECEC4
0x6ECE74: mov     ecx, [edi+10h]
0x6ECE77: movzx   eax, si
0x6ECE7A: mov     ecx, [ecx+eax*4]
0x6ECE7D: call    sub_452A60
0x6ECE82: test    eax, eax
0x6ECE84: jz      short loc_6ECEB9
0x6ECE86: mov     ecx, eax
0x6ECE88: mov     eax, [ebx+40h]
0x6ECE8B: jmp     short loc_6ECE90
0x6ECE8D: align 10h
0x6ECE90: mov     dl, [eax]
0x6ECE92: cmp     dl, [ecx]
0x6ECE94: jnz     short loc_6ECEB0
0x6ECE96: test    dl, dl
0x6ECE98: jz      short loc_6ECEAC
0x6ECE9A: mov     dl, [eax+1]
0x6ECE9D: cmp     dl, [ecx+1]
0x6ECEA0: jnz     short loc_6ECEB0
0x6ECEA2: add     eax, 2
0x6ECEA5: add     ecx, 2
0x6ECEA8: test    dl, dl
0x6ECEAA: jnz     short loc_6ECE90
0x6ECEAC: xor     eax, eax
0x6ECEAE: jmp     short loc_6ECEB5
0x6ECEB0: sbb     eax, eax
0x6ECEB2: sbb     eax, 0FFFFFFFFh
0x6ECEB5: test    eax, eax
0x6ECEB7: jz      short loc_6ECECC
0x6ECEB9: movzx   edx, word ptr [edi+14h]
0x6ECEBD: add     esi, 1
0x6ECEC0: cmp     esi, edx
0x6ECEC2: jb      short loc_6ECE74
0x6ECEC4: pop     esi
0x6ECEC5: pop     edi
0x6ECEC6: xor     al, al
0x6ECEC8: pop     ebx
0x6ECEC9: retn    4
0x6ECECC: pop     esi
0x6ECECD: pop     edi
0x6ECECE: mov     al, 1
0x6ECED0: pop     ebx
0x6ECED1: retn    4
