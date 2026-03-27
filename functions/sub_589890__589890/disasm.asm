0x589890: push    ebx
0x589891: mov     ebx, ecx
0x589893: mov     eax, [ebx+24h]
0x589896: test    eax, eax
0x589898: jz      short loc_5898EE
0x58989A: cmp     word ptr [eax+14h], 0
0x58989F: jz      short loc_5898EE
0x5898A1: mov     eax, [eax+10h]
0x5898A4: push    esi
0x5898A5: mov     esi, [eax]
0x5898A7: push    edi
0x5898A8: xor     edi, edi
0x5898AA: test    esi, esi
0x5898AC: jz      short loc_5898EC
0x5898AE: mov     edx, [esi]
0x5898B0: mov     eax, [edx+4]
0x5898B3: mov     ecx, esi
0x5898B5: call    eax
0x5898B7: test    eax, eax
0x5898B9: jz      short loc_5898CE
0x5898BB: jmp     short loc_5898C0
0x5898BD: align 10h
0x5898C0: cmp     eax, offset dword_B3FD44
0x5898C5: jz      short loc_5898E5
0x5898C7: mov     eax, [eax+4]
0x5898CA: test    eax, eax
0x5898CC: jnz     short loc_5898C0
0x5898CE: mov     edx, [ebx+24h]
0x5898D1: mov     eax, [edx+10h]
0x5898D4: add     edi, 1
0x5898D7: movzx   ecx, di
0x5898DA: mov     esi, [eax+ecx*4]
0x5898DD: test    esi, esi
0x5898DF: jnz     short loc_5898AE
0x5898E1: pop     edi
0x5898E2: pop     esi
0x5898E3: pop     ebx
0x5898E4: retn
0x5898E5: mov     dword ptr [esi+0Ch], 0
0x5898EC: pop     edi
0x5898ED: pop     esi
0x5898EE: pop     ebx
0x5898EF: retn
