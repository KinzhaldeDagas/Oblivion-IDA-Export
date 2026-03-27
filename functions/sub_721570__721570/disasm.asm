0x721570: push    esi
0x721571: push    edi
0x721572: mov     edi, [esp+8+a2]
0x721576: push    edi; a2
0x721577: mov     esi, ecx
0x721579: call    sub_700670
0x72157E: test    al, al
0x721580: jnz     short loc_721587
0x721582: pop     edi
0x721583: pop     esi
0x721584: retn    4
0x721587: mov     ecx, [edi+8]
0x72158A: mov     eax, [esi+8]
0x72158D: lea     ecx, [ecx+0]
0x721590: mov     dl, [eax]
0x721592: cmp     dl, [ecx]
0x721594: jnz     short loc_7215B8
0x721596: test    dl, dl
0x721598: jz      short loc_7215AC
0x72159A: mov     dl, [eax+1]
0x72159D: cmp     dl, [ecx+1]
0x7215A0: jnz     short loc_7215B8
0x7215A2: add     eax, 2
0x7215A5: add     ecx, 2
0x7215A8: test    dl, dl
0x7215AA: jnz     short loc_721590
0x7215AC: xor     eax, eax
0x7215AE: test    eax, eax
0x7215B0: pop     edi
0x7215B1: setz    al
0x7215B4: pop     esi
0x7215B5: retn    4
0x7215B8: sbb     eax, eax
0x7215BA: sbb     eax, 0FFFFFFFFh
0x7215BD: test    eax, eax
0x7215BF: pop     edi
0x7215C0: setz    al
0x7215C3: pop     esi
0x7215C4: retn    4
