0x954CA0: push    ebx
0x954CA1: push    esi
0x954CA2: push    edi
0x954CA3: mov     edi, ecx
0x954CA5: mov     eax, [edi+10h]
0x954CA8: mov     ebx, [edi+0Ch]
0x954CAB: mov     ecx, [edi+18h]
0x954CAE: mov     esi, [edi+14h]
0x954CB1: sub     eax, ebx
0x954CB3: sub     ecx, esi
0x954CB5: cmp     eax, ecx
0x954CB7: jg      short loc_954CBB
0x954CB9: mov     eax, ecx
0x954CBB: mov     ecx, [edi+20h]
0x954CBE: sub     ecx, [edi+1Ch]
0x954CC1: cmp     eax, ecx
0x954CC3: jg      short loc_954CC7
0x954CC5: mov     eax, ecx
0x954CC7: xor     edx, edx
0x954CC9: test    eax, eax
0x954CCB: mov     ecx, eax
0x954CCD: jz      short loc_954CD7
0x954CCF: nop
0x954CD0: shr     ecx, 1
0x954CD2: inc     edx
0x954CD3: test    ecx, ecx
0x954CD5: jnz     short loc_954CD0
0x954CD7: lea     ecx, [edx-4]
0x954CDA: mov     edx, 1
0x954CDF: shl     edx, cl
0x954CE1: or      esi, 0FFFFFFFFh
0x954CE4: mov     ebx, 3
0x954CE9: add     edx, eax
0x954CEB: jmp     short loc_954CF0
0x954CED: align 10h
0x954CF0: mov     eax, edx
0x954CF2: xor     ecx, ecx
0x954CF4: test    eax, eax
0x954CF6: jz      short loc_954CFF
0x954CF8: shr     eax, 1
0x954CFA: inc     ecx
0x954CFB: test    eax, eax
0x954CFD: jnz     short loc_954CF8
0x954CFF: cmp     ecx, esi
0x954D01: jle     short loc_954D05
0x954D03: mov     esi, ecx
0x954D05: dec     ebx
0x954D06: jnz     short loc_954CF0
0x954D08: cmp     esi, 18h
0x954D0B: jle     short loc_954D19
0x954D0D: mov     eax, 18h
0x954D12: mov     [edi+8], eax
0x954D15: pop     edi
0x954D16: pop     esi
0x954D17: pop     ebx
0x954D18: retn
0x954D19: mov     [edi+8], esi
0x954D1C: pop     edi
0x954D1D: pop     esi
0x954D1E: pop     ebx
0x954D1F: retn
