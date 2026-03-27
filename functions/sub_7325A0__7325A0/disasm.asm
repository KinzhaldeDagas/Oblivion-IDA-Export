0x7325A0: push    esi
0x7325A1: push    edi
0x7325A2: mov     edi, [esp+8+a2]
0x7325A6: push    edi; a2
0x7325A7: mov     esi, ecx
0x7325A9: call    sub_700670
0x7325AE: test    al, al
0x7325B0: jnz     short loc_7325B9
0x7325B2: pop     edi
0x7325B3: xor     al, al
0x7325B5: pop     esi
0x7325B6: retn    4
0x7325B9: mov     al, [esi+8]
0x7325BC: cmp     al, [edi+8]
0x7325BF: jnz     short loc_7325B2
0x7325C1: mov     eax, [esi+0Ch]
0x7325C4: cmp     eax, [edi+0Ch]
0x7325C7: jnz     short loc_7325B2
0x7325C9: mov     ecx, [edi+14h]
0x7325CC: mov     edx, [esi+14h]
0x7325CF: add     eax, eax
0x7325D1: add     eax, eax
0x7325D3: neg     eax
0x7325D5: sbb     eax, eax
0x7325D7: neg     eax
0x7325D9: cmp     eax, 4
0x7325DC: jb      short loc_7325F4
0x7325DE: mov     edi, edi
0x7325E0: mov     esi, [edx]
0x7325E2: cmp     esi, [ecx]
0x7325E4: jnz     short loc_7325F8
0x7325E6: sub     eax, 4
0x7325E9: add     ecx, 4
0x7325EC: add     edx, 4
0x7325EF: cmp     eax, 4
0x7325F2: jnb     short loc_7325E0
0x7325F4: test    eax, eax
0x7325F6: jz      short loc_73265D
0x7325F8: movzx   esi, byte ptr [edx]
0x7325FB: movzx   edi, byte ptr [ecx]
0x7325FE: sub     esi, edi
0x732600: jnz     short loc_732647
0x732602: sub     eax, 1
0x732605: add     ecx, 1
0x732608: add     edx, 1
0x73260B: test    eax, eax
0x73260D: jz      short loc_73265D
0x73260F: movzx   esi, byte ptr [edx]
0x732612: movzx   edi, byte ptr [ecx]
0x732615: sub     esi, edi
0x732617: jnz     short loc_732647
0x732619: sub     eax, 1
0x73261C: add     ecx, 1
0x73261F: add     edx, 1
0x732622: test    eax, eax
0x732624: jz      short loc_73265D
0x732626: movzx   esi, byte ptr [edx]
0x732629: movzx   edi, byte ptr [ecx]
0x73262C: sub     esi, edi
0x73262E: jnz     short loc_732647
0x732630: sub     eax, 1
0x732633: add     ecx, 1
0x732636: add     edx, 1
0x732639: test    eax, eax
0x73263B: jz      short loc_73265D
0x73263D: movzx   esi, byte ptr [edx]
0x732640: movzx   ecx, byte ptr [ecx]
0x732643: sub     esi, ecx
0x732645: jz      short loc_73265D
0x732647: test    esi, esi
0x732649: mov     eax, 1
0x73264E: jg      short loc_73265F
0x732650: or      eax, 0FFFFFFFFh
0x732653: test    eax, eax
0x732655: pop     edi
0x732656: setz    al
0x732659: pop     esi
0x73265A: retn    4
0x73265D: xor     eax, eax
0x73265F: test    eax, eax
0x732661: pop     edi
0x732662: setz    al
0x732665: pop     esi
0x732666: retn    4
