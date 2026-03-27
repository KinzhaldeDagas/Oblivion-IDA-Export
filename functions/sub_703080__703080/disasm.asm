0x703080: push    ebx
0x703081: mov     ebx, [esp+4+arg_0]
0x703085: push    edi
0x703086: push    ebx
0x703087: mov     edi, ecx
0x703089: call    sub_71FDE0
0x70308E: test    al, al
0x703090: jnz     short loc_703099
0x703092: pop     edi
0x703093: xor     al, al
0x703095: pop     ebx
0x703096: retn    4
0x703099: movzx   eax, word ptr [edi+60h]
0x70309D: cmp     ax, [ebx+60h]
0x7030A1: jnz     short loc_703092
0x7030A3: mov     cx, [edi+62h]
0x7030A7: cmp     cx, [ebx+62h]
0x7030AB: jnz     short loc_703092
0x7030AD: mov     dx, [edi+64h]
0x7030B1: cmp     dx, [ebx+64h]
0x7030B5: jnz     short loc_703092
0x7030B7: mov     cx, [edi+66h]
0x7030BB: cmp     cx, [ebx+66h]
0x7030BF: jnz     short loc_703092
0x7030C1: mov     dx, [edi+68h]
0x7030C5: cmp     dx, [ebx+68h]
0x7030C9: jnz     short loc_703092
0x7030CB: mov     cx, [edi+6Ah]
0x7030CF: cmp     cx, [ebx+6Ah]
0x7030D3: jnz     short loc_703092
0x7030D5: mov     dx, [edi+6Ch]
0x7030D9: cmp     dx, [ebx+6Ch]
0x7030DD: jnz     short loc_703092
0x7030DF: mov     ecx, [ebx+58h]
0x7030E2: mov     edx, [edi+58h]
0x7030E5: movzx   eax, ax
0x7030E8: mov     [esp+8+arg_0], eax
0x7030EC: add     eax, eax
0x7030EE: add     eax, eax
0x7030F0: add     eax, eax
0x7030F2: cmp     eax, 4
0x7030F5: push    ebp
0x7030F6: push    esi
0x7030F7: jb      short loc_703114
0x7030F9: lea     esp, [esp+0]
0x703100: mov     esi, [edx]
0x703102: cmp     esi, [ecx]
0x703104: jnz     short loc_703118
0x703106: sub     eax, 4
0x703109: add     ecx, 4
0x70310C: add     edx, 4
0x70310F: cmp     eax, 4
0x703112: jnb     short loc_703100
0x703114: test    eax, eax
0x703116: jz      short loc_703175
0x703118: movzx   ebp, byte ptr [ecx]
0x70311B: movzx   esi, byte ptr [edx]
0x70311E: sub     esi, ebp
0x703120: jnz     short loc_703167
0x703122: sub     eax, 1
0x703125: add     ecx, 1
0x703128: add     edx, 1
0x70312B: test    eax, eax
0x70312D: jz      short loc_703175
0x70312F: movzx   ebp, byte ptr [ecx]
0x703132: movzx   esi, byte ptr [edx]
0x703135: sub     esi, ebp
0x703137: jnz     short loc_703167
0x703139: sub     eax, 1
0x70313C: add     ecx, 1
0x70313F: add     edx, 1
0x703142: test    eax, eax
0x703144: jz      short loc_703175
0x703146: movzx   ebp, byte ptr [ecx]
0x703149: movzx   esi, byte ptr [edx]
0x70314C: sub     esi, ebp
0x70314E: jnz     short loc_703167
0x703150: sub     eax, 1
0x703153: add     ecx, 1
0x703156: add     edx, 1
0x703159: test    eax, eax
0x70315B: jz      short loc_703175
0x70315D: movzx   eax, byte ptr [ecx]
0x703160: movzx   esi, byte ptr [edx]
0x703163: sub     esi, eax
0x703165: jz      short loc_703175
0x703167: test    esi, esi
0x703169: mov     eax, 1
0x70316E: jg      short loc_703177
0x703170: or      eax, 0FFFFFFFFh
0x703173: jmp     short loc_703177
0x703175: xor     eax, eax
0x703177: test    eax, eax
0x703179: jz      short loc_703184
0x70317B: pop     esi
0x70317C: pop     ebp
0x70317D: pop     edi
0x70317E: xor     al, al
0x703180: pop     ebx
0x703181: retn    4
0x703184: mov     eax, [esp+10h+arg_0]
0x703188: mov     ecx, [ebx+5Ch]
0x70318B: mov     edx, [edi+5Ch]
0x70318E: add     eax, eax
0x703190: cmp     eax, 4
0x703193: jb      short loc_7031A9
0x703195: mov     esi, [edx]
0x703197: cmp     esi, [ecx]
0x703199: jnz     short loc_7031AD
0x70319B: sub     eax, 4
0x70319E: add     ecx, 4
0x7031A1: add     edx, 4
0x7031A4: cmp     eax, 4
0x7031A7: jnb     short loc_703195
0x7031A9: test    eax, eax
0x7031AB: jz      short loc_703214
0x7031AD: movzx   esi, byte ptr [edx]
0x7031B0: movzx   edi, byte ptr [ecx]
0x7031B3: sub     esi, edi
0x7031B5: jnz     short loc_7031FC
0x7031B7: sub     eax, 1
0x7031BA: add     ecx, 1
0x7031BD: add     edx, 1
0x7031C0: test    eax, eax
0x7031C2: jz      short loc_703214
0x7031C4: movzx   esi, byte ptr [edx]
0x7031C7: movzx   edi, byte ptr [ecx]
0x7031CA: sub     esi, edi
0x7031CC: jnz     short loc_7031FC
0x7031CE: sub     eax, 1
0x7031D1: add     ecx, 1
0x7031D4: add     edx, 1
0x7031D7: test    eax, eax
0x7031D9: jz      short loc_703214
0x7031DB: movzx   esi, byte ptr [edx]
0x7031DE: movzx   edi, byte ptr [ecx]
0x7031E1: sub     esi, edi
0x7031E3: jnz     short loc_7031FC
0x7031E5: sub     eax, 1
0x7031E8: add     ecx, 1
0x7031EB: add     edx, 1
0x7031EE: test    eax, eax
0x7031F0: jz      short loc_703214
0x7031F2: movzx   esi, byte ptr [edx]
0x7031F5: movzx   ecx, byte ptr [ecx]
0x7031F8: sub     esi, ecx
0x7031FA: jz      short loc_703214
0x7031FC: test    esi, esi
0x7031FE: mov     eax, 1
0x703203: jg      short loc_703216
0x703205: pop     esi
0x703206: or      eax, 0FFFFFFFFh
0x703209: pop     ebp
0x70320A: test    eax, eax
0x70320C: pop     edi
0x70320D: setz    al
0x703210: pop     ebx
0x703211: retn    4
0x703214: xor     eax, eax
0x703216: pop     esi
0x703217: pop     ebp
0x703218: test    eax, eax
0x70321A: pop     edi
0x70321B: setz    al
0x70321E: pop     ebx
0x70321F: retn    4
