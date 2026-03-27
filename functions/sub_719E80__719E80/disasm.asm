0x719E80: push    ebx
0x719E81: mov     ebx, [esp+4+arg_0]
0x719E85: push    esi
0x719E86: push    ebx
0x719E87: mov     esi, ecx
0x719E89: call    sub_732E10
0x719E8E: test    al, al
0x719E90: jnz     short loc_719E97
0x719E92: pop     esi
0x719E93: pop     ebx
0x719E94: retn    4
0x719E97: push    edi
0x719E98: movzx   edi, word ptr [esi+44h]
0x719E9C: cmp     di, [ebx+44h]
0x719EA0: jz      short loc_719EAA
0x719EA2: pop     edi
0x719EA3: pop     esi
0x719EA4: xor     al, al
0x719EA6: pop     ebx
0x719EA7: retn    4
0x719EAA: movzx   edx, di
0x719EAD: xor     ecx, ecx
0x719EAF: test    edx, edx
0x719EB1: push    ebp
0x719EB2: jbe     short loc_719ED7
0x719EB4: mov     eax, [esi+48h]
0x719EB7: mov     ebx, [ebx+48h]
0x719EBA: sub     ebx, eax
0x719EBC: lea     esp, [esp+0]
0x719EC0: mov     bp, [eax]
0x719EC3: cmp     bp, [ebx+eax]
0x719EC7: jnz     short loc_719F0C
0x719EC9: add     ecx, 1
0x719ECC: add     eax, 2
0x719ECF: cmp     ecx, edx
0x719ED1: jb      short loc_719EC0
0x719ED3: mov     ebx, [esp+10h+arg_0]
0x719ED7: lea     eax, [edi+edi]
0x719EDA: add     ax, [esi+40h]
0x719EDE: xor     ecx, ecx
0x719EE0: movzx   edx, ax
0x719EE3: test    edx, edx
0x719EE5: jbe     short loc_719F03
0x719EE7: mov     eax, [esi+4Ch]
0x719EEA: mov     ebx, [ebx+4Ch]
0x719EED: sub     ebx, eax
0x719EEF: nop
0x719EF0: mov     si, [eax]
0x719EF3: cmp     si, [ebx+eax]
0x719EF7: jnz     short loc_719F0C
0x719EF9: add     ecx, 1
0x719EFC: add     eax, 2
0x719EFF: cmp     ecx, edx
0x719F01: jb      short loc_719EF0
0x719F03: pop     ebp
0x719F04: pop     edi
0x719F05: pop     esi
0x719F06: mov     al, 1
0x719F08: pop     ebx
0x719F09: retn    4
0x719F0C: pop     ebp
0x719F0D: pop     edi
0x719F0E: pop     esi
0x719F0F: xor     al, al
0x719F11: pop     ebx
0x719F12: retn    4
