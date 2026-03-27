0x752CD0: push    esi
0x752CD1: push    edi
0x752CD2: mov     edi, [esp+8+a2]
0x752CD6: push    edi; a2
0x752CD7: mov     esi, ecx
0x752CD9: call    sub_700670
0x752CDE: test    al, al
0x752CE0: jz      short loc_752D30
0x752CE2: mov     eax, [esi+8]
0x752CE5: test    eax, eax
0x752CE7: jz      short loc_752D30
0x752CE9: mov     ecx, [edi+8]
0x752CEC: test    ecx, ecx
0x752CEE: jz      short loc_752D30
0x752CF0: mov     dl, [eax]
0x752CF2: cmp     dl, [ecx]
0x752CF4: jnz     short loc_752D10
0x752CF6: test    dl, dl
0x752CF8: jz      short loc_752D0C
0x752CFA: mov     dl, [eax+1]
0x752CFD: cmp     dl, [ecx+1]
0x752D00: jnz     short loc_752D10
0x752D02: add     eax, 2
0x752D05: add     ecx, 2
0x752D08: test    dl, dl
0x752D0A: jnz     short loc_752CF0
0x752D0C: xor     eax, eax
0x752D0E: jmp     short loc_752D15
0x752D10: sbb     eax, eax
0x752D12: sbb     eax, 0FFFFFFFFh
0x752D15: test    eax, eax
0x752D17: jnz     short loc_752D30
0x752D19: mov     eax, [esi+0Ch]
0x752D1C: cmp     eax, [edi+0Ch]
0x752D1F: jnz     short loc_752D30
0x752D21: mov     cl, [esi+14h]
0x752D24: cmp     cl, [edi+14h]
0x752D27: jnz     short loc_752D30
0x752D29: pop     edi
0x752D2A: mov     al, 1
0x752D2C: pop     esi
0x752D2D: retn    4
0x752D30: pop     edi
0x752D31: xor     al, al
0x752D33: pop     esi
0x752D34: retn    4
