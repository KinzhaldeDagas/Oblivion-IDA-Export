0x90F640: push    ebx
0x90F641: push    ebp
0x90F642: push    esi
0x90F643: push    edi
0x90F644: mov     edi, ecx
0x90F646: mov     ecx, ds:0BA7D98h
0x90F64C: mov     eax, [ecx]
0x90F64E: push    2Eh ; '.'
0x90F650: push    130h
0x90F655: call    dword ptr [eax+10h]
0x90F658: mov     esi, eax
0x90F65A: mov     word ptr [esi+4], 130h
0x90F660: mov     edx, [edi+14h]
0x90F663: mov     ebx, [edi+30h]
0x90F666: lea     ecx, [edi+70h]
0x90F669: push    ecx
0x90F66A: push    edx
0x90F66B: mov     ecx, esi
0x90F66D: call    sub_8ABC40
0x90F672: mov     ebp, large fs:2Ch
0x90F679: mov     dword ptr [esi], offset off_A9CAB8
0x90F67F: xor     edx, edx
0x90F681: mov     [esi+120h], edx
0x90F687: mov     [esi+124h], edx
0x90F68D: mov     dword ptr [esi+128h], 80000000h
0x90F697: mov     [esi+30h], ebx
0x90F69A: mov     ecx, [esi+58h]
0x90F69D: mov     ebx, [edi+54h]
0x90F6A0: mov     eax, ecx
0x90F6A2: and     eax, 3FFFFFFFh
0x90F6A7: cmp     eax, ebx
0x90F6A9: mov     ebx, ds:0BA9DE4h
0x90F6AF: jge     short loc_90F712
0x90F6B1: test    ecx, ecx
0x90F6B3: js      short loc_90F6DC
0x90F6B5: mov     ecx, [ebp+ebx*4+0]
0x90F6B9: mov     ecx, [ecx+19Ch]
0x90F6BF: cmp     ecx, edx
0x90F6C1: jnz     short loc_90F6C9
0x90F6C3: mov     ecx, ds:0BA7D9Ch
0x90F6C9: push    14h
0x90F6CB: lea     edx, ds:0[eax*4]
0x90F6D2: mov     eax, [esi+50h]
0x90F6D5: push    edx
0x90F6D6: push    eax
0x90F6D7: call    sub_8A75D0
0x90F6DC: mov     ecx, [ebp+ebx*4+0]
0x90F6E0: mov     eax, [ecx+19Ch]
0x90F6E6: test    eax, eax
0x90F6E8: jnz     short loc_90F6EF
0x90F6EA: mov     eax, ds:0BA7D9Ch
0x90F6EF: mov     edx, [edi+54h]
0x90F6F2: push    14h
0x90F6F4: shl     edx, 2
0x90F6F7: push    edx
0x90F6F8: mov     ecx, eax
0x90F6FA: call    sub_8A7560
0x90F6FF: mov     [esi+50h], eax
0x90F702: mov     eax, [esi+58h]
0x90F705: mov     ecx, [edi+54h]
0x90F708: and     eax, 40000000h
0x90F70D: or      eax, ecx
0x90F70F: mov     [esi+58h], eax
0x90F712: mov     ecx, [edi+54h]
0x90F715: test    ecx, ecx
0x90F717: mov     eax, [esi+50h]
0x90F71A: mov     [esi+54h], ecx
0x90F71D: mov     edx, [edi+50h]
0x90F720: jle     short loc_90F736
0x90F722: sub     edx, eax
0x90F724: mov     ebp, [edx+eax]
0x90F727: mov     [eax], ebp
0x90F729: add     eax, 4
0x90F72C: dec     ecx
0x90F72D: jnz     short loc_90F724
0x90F72F: mov     ebp, large fs:2Ch
0x90F736: mov     ecx, [esi+64h]
0x90F739: mov     edx, [edi+60h]
0x90F73C: mov     eax, ecx
0x90F73E: and     eax, 3FFFFFFFh
0x90F743: cmp     eax, edx
0x90F745: jge     short loc_90F7A8
0x90F747: test    ecx, ecx
0x90F749: js      short loc_90F772
0x90F74B: mov     ecx, [ebp+ebx*4+0]
0x90F74F: mov     ecx, [ecx+19Ch]
0x90F755: test    ecx, ecx
0x90F757: jnz     short loc_90F75F
0x90F759: mov     ecx, ds:0BA7D9Ch
0x90F75F: push    14h
0x90F761: lea     edx, ds:0[eax*4]
0x90F768: mov     eax, [esi+5Ch]
0x90F76B: push    edx
0x90F76C: push    eax
0x90F76D: call    sub_8A75D0
0x90F772: mov     ecx, [ebp+ebx*4+0]
0x90F776: mov     eax, [ecx+19Ch]
0x90F77C: test    eax, eax
0x90F77E: jnz     short loc_90F785
0x90F780: mov     eax, ds:0BA7D9Ch
0x90F785: mov     edx, [edi+60h]
0x90F788: push    14h
0x90F78A: shl     edx, 2
0x90F78D: push    edx
0x90F78E: mov     ecx, eax
0x90F790: call    sub_8A7560
0x90F795: mov     [esi+5Ch], eax
0x90F798: mov     eax, [esi+64h]
0x90F79B: mov     ecx, [edi+60h]
0x90F79E: and     eax, 40000000h
0x90F7A3: or      eax, ecx
0x90F7A5: mov     [esi+64h], eax
0x90F7A8: mov     ecx, [edi+60h]
0x90F7AB: test    ecx, ecx
0x90F7AD: mov     eax, [esi+5Ch]
0x90F7B0: mov     [esi+60h], ecx
0x90F7B3: mov     edx, [edi+5Ch]
0x90F7B6: jle     short loc_90F7CB
0x90F7B8: sub     edx, eax
0x90F7BA: lea     ebx, [ebx+0]
0x90F7C0: mov     ebx, [edx+eax]
0x90F7C3: mov     [eax], ebx
0x90F7C5: add     eax, 4
0x90F7C8: dec     ecx
0x90F7C9: jnz     short loc_90F7C0
0x90F7CB: push    edi
0x90F7CC: mov     ecx, esi
0x90F7CE: call    sub_8A9E50
0x90F7D3: pop     edi
0x90F7D4: mov     eax, esi
0x90F7D6: pop     esi
0x90F7D7: pop     ebp
0x90F7D8: pop     ebx
0x90F7D9: retn
