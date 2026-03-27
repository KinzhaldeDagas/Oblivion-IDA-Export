0x46A4E0: mov     eax, [esp+arg_0]
0x46A4E4: push    0; int
0x46A4E6: push    offset ??_R0?AVTESDescription@@@8; struct TypeDescriptor *
0x46A4EB: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46A4F0: push    0; int
0x46A4F2: push    eax; void *
0x46A4F3: call    OblivionDynamicCast
0x46A4F8: add     esp, 14h
0x46A4FB: test    eax, eax
0x46A4FD: jnz     short loc_46A504
0x46A4FF: mov     al, 1
0x46A501: retn    4
0x46A504: mov     edx, ds:0B33C08h
0x46A50A: push    ebx
0x46A50B: push    ebp
0x46A50C: mov     bp, ds:0B33C0Ch
0x46A513: cmp     bp, 0FFFFh
0x46A518: push    esi
0x46A519: push    edi
0x46A51A: jnz     short loc_46A52E
0x46A51C: mov     esi, edx
0x46A51E: lea     edi, [esi+1]
0x46A521: mov     bl, [esi]
0x46A523: add     esi, 1
0x46A526: test    bl, bl
0x46A528: jnz     short loc_46A521
0x46A52A: sub     esi, edi
0x46A52C: jmp     short loc_46A531
0x46A52E: movzx   esi, bp
0x46A531: test    esi, esi
0x46A533: jnz     short loc_46A559
0x46A535: cmp     bp, 0FFFFh
0x46A53A: jnz     short loc_46A54E
0x46A53C: mov     esi, edx
0x46A53E: lea     edi, [esi+1]
0x46A541: mov     bl, [esi]
0x46A543: add     esi, 1
0x46A546: test    bl, bl
0x46A548: jnz     short loc_46A541
0x46A54A: sub     esi, edi
0x46A54C: jmp     short loc_46A551
0x46A54E: movzx   esi, bp
0x46A551: test    esi, esi
0x46A553: jz      loc_46A5E7
0x46A559: cmp     bp, 0FFFFh
0x46A55E: jnz     short loc_46A580
0x46A560: mov     esi, edx
0x46A562: lea     edi, [esi+1]
0x46A565: mov     bl, [esi]
0x46A567: add     esi, 1
0x46A56A: test    bl, bl
0x46A56C: jnz     short loc_46A565
0x46A56E: sub     esi, edi
0x46A570: lea     edi, [edx+1]
0x46A573: mov     bl, [edx]
0x46A575: add     edx, 1
0x46A578: test    bl, bl
0x46A57A: jnz     short loc_46A573
0x46A57C: sub     edx, edi
0x46A57E: jmp     short loc_46A585
0x46A580: movzx   esi, bp
0x46A583: mov     edx, esi
0x46A585: cmp     esi, edx
0x46A587: jnz     short loc_46A5DE
0x46A589: mov     edx, [eax]
0x46A58B: push    43534544h
0x46A590: mov     ecx, eax
0x46A592: mov     eax, [edx+10h]
0x46A595: push    0
0x46A597: call    eax
0x46A599: mov     ecx, eax
0x46A59B: test    ecx, ecx
0x46A59D: jz      short loc_46A5CF
0x46A59F: mov     eax, ds:0B33C08h
0x46A5A4: test    eax, eax
0x46A5A6: jz      short loc_46A5CF
0x46A5A8: mov     dl, [eax]
0x46A5AA: cmp     dl, [ecx]
0x46A5AC: jnz     short loc_46A5C8
0x46A5AE: test    dl, dl
0x46A5B0: jz      short loc_46A5C4
0x46A5B2: mov     dl, [eax+1]
0x46A5B5: cmp     dl, [ecx+1]
0x46A5B8: jnz     short loc_46A5C8
0x46A5BA: add     eax, 2
0x46A5BD: add     ecx, 2
0x46A5C0: test    dl, dl
0x46A5C2: jnz     short loc_46A5A8
0x46A5C4: xor     eax, eax
0x46A5C6: jmp     short loc_46A5DA
0x46A5C8: sbb     eax, eax
0x46A5CA: sbb     eax, 0FFFFFFFFh
0x46A5CD: jmp     short loc_46A5DA
0x46A5CF: xor     eax, eax
0x46A5D1: test    ecx, ecx
0x46A5D3: setz    al
0x46A5D6: lea     eax, [eax+eax-1]
0x46A5DA: test    eax, eax
0x46A5DC: jz      short loc_46A5E7
0x46A5DE: pop     edi
0x46A5DF: pop     esi
0x46A5E0: pop     ebp
0x46A5E1: mov     al, 1
0x46A5E3: pop     ebx
0x46A5E4: retn    4
0x46A5E7: pop     edi
0x46A5E8: pop     esi
0x46A5E9: pop     ebp
0x46A5EA: xor     al, al
0x46A5EC: pop     ebx
0x46A5ED: retn    4
