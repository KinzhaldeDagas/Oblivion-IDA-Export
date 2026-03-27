0x49F750: sub     esp, 8
0x49F753: push    ebp
0x49F754: push    edi
0x49F755: mov     edi, ecx
0x49F757: mov     eax, [edi+40h]
0x49F75A: xor     ebp, ebp
0x49F75C: cmp     eax, ebp
0x49F75E: jz      loc_49F853
0x49F764: push    ebx
0x49F765: mov     ebx, [eax+7Ch]
0x49F768: mov     eax, [edi+5Ch]
0x49F76B: cmp     eax, ebp
0x49F76D: jz      short loc_49F77C
0x49F76F: mov     edx, [ebx]
0x49F771: push    eax
0x49F772: mov     eax, [edx+4Ch]
0x49F775: mov     ecx, ebx
0x49F777: call    eax
0x49F779: mov     [edi+60h], eax
0x49F77C: cmp     [edi+0Ch], ebp
0x49F77F: mov     [esp+14h+var_8], ebp
0x49F783: jbe     loc_49F852
0x49F789: push    esi
0x49F78A: lea     ebx, [ebx+0]
0x49F790: mov     edx, [ebx]
0x49F792: mov     esi, [edi+18h]
0x49F795: mov     eax, [edx+58h]
0x49F798: mov     ecx, ebx
0x49F79A: add     esi, ebp
0x49F79C: call    eax
0x49F79E: movzx   edx, word ptr [esi+4]
0x49F7A2: cmp     dx, ds:0A79928h
0x49F7A9: jz      short loc_49F7B5
0x49F7AB: mov     ecx, [esi]
0x49F7AD: movzx   edx, dx
0x49F7B0: add     edx, [ecx+8]
0x49F7B3: jmp     short loc_49F7B7
0x49F7B5: xor     edx, edx
0x49F7B7: mov     ecx, eax
0x49F7B9: mov     eax, [eax]
0x49F7BB: push    edx
0x49F7BC: mov     edx, [eax+58h]
0x49F7BF: call    edx
0x49F7C1: test    eax, eax
0x49F7C3: jnz     short loc_49F83A
0x49F7C5: movzx   eax, word ptr [esi+4]
0x49F7C9: cmp     ax, ds:0A79928h
0x49F7D0: jz      short loc_49F7DC
0x49F7D2: mov     ecx, [esi]
0x49F7D4: movzx   eax, ax
0x49F7D7: add     eax, [ecx+8]
0x49F7DA: jmp     short loc_49F7DE
0x49F7DC: xor     eax, eax
0x49F7DE: mov     edx, [ebx]
0x49F7E0: push    0
0x49F7E2: push    eax
0x49F7E3: mov     eax, [edx+50h]
0x49F7E6: mov     ecx, ebx
0x49F7E8: call    eax
0x49F7EA: mov     ecx, [edi+14h]
0x49F7ED: mov     esi, [ecx+ebp+4]
0x49F7F1: test    esi, esi
0x49F7F3: lea     eax, [ecx+ebp+4]
0x49F7F7: mov     [esp+18h+var_4], eax
0x49F7FB: jz      short loc_49F823
0x49F7FD: lea     edx, [esi+4]
0x49F800: push    edx; lpAddend
0x49F801: call    dword ptr ds:0A2807Ch
0x49F807: test    eax, eax
0x49F809: jnz     short loc_49F819
0x49F80B: test    esi, esi
0x49F80D: jz      short loc_49F819
0x49F80F: mov     eax, [esi]
0x49F811: mov     edx, [eax]
0x49F813: push    1
0x49F815: mov     ecx, esi
0x49F817: call    edx
0x49F819: mov     eax, [esp+18h+var_4]
0x49F81D: mov     dword ptr [eax], 0
0x49F823: mov     ecx, [edi+14h]
0x49F826: mov     dword ptr [ecx+ebp+8], 0
0x49F82E: mov     edx, [edi+14h]
0x49F831: mov     al, ds:0A79EFCh
0x49F836: mov     [edx+ebp+0Ch], al
0x49F83A: mov     eax, [esp+18h+var_8]
0x49F83E: add     eax, 1
0x49F841: add     ebp, 10h
0x49F844: cmp     eax, [edi+0Ch]
0x49F847: mov     [esp+18h+var_8], eax
0x49F84B: jb      loc_49F790
0x49F851: pop     esi
0x49F852: pop     ebx
0x49F853: pop     edi
0x49F854: pop     ebp
0x49F855: add     esp, 8
0x49F858: retn
