0x403380: push    esi
0x403381: mov     esi, ecx
0x403383: mov     ecx, [esp+4+controlId]
0x403387: cmp     ecx, 0Eh
0x40338A: jge     loc_403485
0x403390: xor     eax, eax
0x403392: cmp     byte ptr [ecx+esi+1B7Eh], 0FFh
0x40339A: jnz     short loc_4033A1
0x40339C: mov     eax, 1
0x4033A1: mov     edx, eax
0x4033A3: imul    edx, 1Dh
0x4033A6: add     edx, ecx
0x4033A8: cmp     byte ptr [edx+esi+1B7Eh], 0FFh
0x4033B0: jnz     short loc_4033B5
0x4033B2: add     eax, 1
0x4033B5: mov     edx, eax
0x4033B7: imul    edx, 1Dh
0x4033BA: add     edx, ecx
0x4033BC: push    edi
0x4033BD: lea     edi, [edx+esi+1B7Eh]
0x4033C4: mov     dl, [edi]
0x4033C6: cmp     dl, 0FFh
0x4033C9: jz      loc_403484
0x4033CF: sub     eax, 0
0x4033D2: jz      loc_40346D
0x4033D8: sub     eax, 1
0x4033DB: jz      short loc_403451
0x4033DD: sub     eax, 0FEh ; 'þ'
0x4033E2: jz      loc_403484
0x4033E8: cmp     dl, 20h ; ' '
0x4033EB: jnb     short loc_4033FE
0x4033ED: movzx   eax, dl
0x4033F0: or      byte ptr [eax+esi+60h], 80h
0x4033F5: lea     eax, [eax+esi+60h]
0x4033F9: pop     edi
0x4033FA: pop     esi
0x4033FB: retn    4
0x4033FE: movzx   edi, byte ptr [edi]
0x403401: mov     eax, [esi+50h]
0x403404: sub     edi, 20h ; ' '
0x403407: imul    edi, 1194h
0x40340D: cmp     eax, 0FFFFFFFFh
0x403410: jz      short loc_403449
0x403412: sub     eax, edi
0x403414: mov     [esp+8+controlId], eax
0x403418: cdq
0x403419: xor     eax, edx
0x40341B: sub     eax, edx
0x40341D: cmp     eax, 2328h
0x403422: jnz     short loc_40343D
0x403424: fild    [esp+8+controlId]
0x403428: fmul    ds:dbl_A2FAA0
0x40342E: call    Double_To_SInt32
0x403433: add     edi, eax
0x403435: mov     [esi+50h], edi
0x403438: pop     edi
0x403439: pop     esi
0x40343A: retn    4
0x40343D: cmp     eax, 6978h
0x403442: jnz     short loc_403449
0x403444: mov     edi, 7B0Ch
0x403449: mov     [esi+50h], edi
0x40344C: pop     edi
0x40344D: pop     esi
0x40344E: retn    4
0x403451: movzx   ecx, byte ptr [ecx+esi+1B9Bh]
0x403459: or      byte ptr [ecx+esi+1B2Ch], 80h
0x403461: lea     eax, [ecx+esi+1B2Ch]
0x403468: pop     edi
0x403469: pop     esi
0x40346A: retn    4
0x40346D: movzx   edx, byte ptr [ecx+esi+1B7Eh]
0x403475: or      byte ptr [edx+esi+18F4h], 80h
0x40347D: lea     eax, [edx+esi+18F4h]
0x403484: pop     edi
0x403485: pop     esi
0x403486: retn    4
