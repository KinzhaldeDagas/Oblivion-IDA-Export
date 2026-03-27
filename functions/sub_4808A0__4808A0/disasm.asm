0x4808A0: push    esi
0x4808A1: mov     esi, [esp+4+arg_0]
0x4808A5: test    esi, esi
0x4808A7: jnz     short loc_4808AD
0x4808A9: xor     al, al
0x4808AB: pop     esi
0x4808AC: retn
0x4808AD: mov     eax, [esi]
0x4808AF: mov     edx, [eax+4]
0x4808B2: mov     ecx, esi
0x4808B4: call    edx
0x4808B6: test    eax, eax
0x4808B8: jz      short loc_4808CE
0x4808BA: lea     ebx, [ebx+0]
0x4808C0: cmp     eax, offset dword_B40864
0x4808C5: jz      short loc_4808F3
0x4808C7: mov     eax, [eax+4]
0x4808CA: test    eax, eax
0x4808CC: jnz     short loc_4808C0
0x4808CE: mov     eax, [esi]
0x4808D0: mov     edx, [eax+8]
0x4808D3: push    edi
0x4808D4: mov     ecx, esi
0x4808D6: call    edx
0x4808D8: mov     edi, eax
0x4808DA: test    edi, edi
0x4808DC: jz      short loc_48091B
0x4808DE: movzx   eax, word ptr [edi+0B6h]
0x4808E5: xor     esi, esi
0x4808E7: test    eax, eax
0x4808E9: jbe     short loc_48091B
0x4808EB: cmp     eax, esi
0x4808ED: ja      short loc_4808F7
0x4808EF: xor     eax, eax
0x4808F1: jmp     short loc_480900
0x4808F3: mov     al, 1
0x4808F5: pop     esi
0x4808F6: retn
0x4808F7: mov     eax, [edi+0B0h]
0x4808FD: mov     eax, [eax+esi*4]
0x480900: push    eax
0x480901: call    sub_4808A0
0x480906: add     esp, 4
0x480909: test    al, al
0x48090B: jnz     short loc_480920
0x48090D: movzx   eax, word ptr [edi+0B6h]
0x480914: add     esi, 1
0x480917: cmp     eax, esi
0x480919: ja      short loc_4808F7
0x48091B: pop     edi
0x48091C: xor     al, al
0x48091E: pop     esi
0x48091F: retn
0x480920: pop     edi
0x480921: mov     al, 1
0x480923: pop     esi
0x480924: retn
