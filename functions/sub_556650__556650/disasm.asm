0x556650: sub     esp, 8
0x556653: mov     edx, ecx
0x556655: mov     ecx, [edx+0Ch]
0x556658: xor     eax, eax
0x55665A: test    ecx, ecx
0x55665C: mov     [esp+8+var_4], edx
0x556660: jz      loc_556716
0x556666: push    esi
0x556667: mov     esi, [ecx+8]
0x55666A: test    esi, esi
0x55666C: jz      loc_556715
0x556672: push    ebx
0x556673: push    ebp
0x556674: push    edi
0x556675: mov     [esp+18h+var_8], 24h ; '$'
0x55667D: xor     edi, edi
0x55667F: nop
0x556680: mov     eax, [edi+esi+8]
0x556684: test    eax, eax
0x556686: jnz     short loc_55668C
0x556688: xor     esi, esi
0x55668A: jmp     short loc_556695
0x55668C: mov     esi, [edi+esi+0Ch]
0x556690: sub     esi, eax
0x556692: sar     esi, 6
0x556695: shl     esi, 6
0x556698: add     [esp+18h+var_8], esi
0x55669C: xor     ebx, ebx
0x55669E: xor     ebp, ebp
0x5566A0: mov     eax, [edx+0Ch]
0x5566A3: mov     esi, [eax+8]
0x5566A6: mov     ecx, [edi+esi+8]
0x5566AA: test    ecx, ecx
0x5566AC: jz      short loc_556702
0x5566AE: mov     eax, [edi+esi+0Ch]
0x5566B2: sub     eax, ecx
0x5566B4: sar     eax, 6
0x5566B7: cmp     ebx, eax
0x5566B9: jnb     short loc_556702
0x5566BB: test    ecx, ecx
0x5566BD: jz      short loc_5566CC
0x5566BF: mov     eax, [edi+esi+0Ch]
0x5566C3: sub     eax, ecx
0x5566C5: sar     eax, 6
0x5566C8: cmp     ebx, eax
0x5566CA: jb      short loc_5566D5
0x5566CC: call    __invalid_parameter_noinfo
0x5566D1: mov     edx, [esp+18h+var_4]
0x5566D5: mov     ecx, [edi+esi+8]
0x5566D9: lea     eax, [ecx+ebp+10h]
0x5566DD: mov     ecx, [eax+4]
0x5566E0: test    ecx, ecx
0x5566E2: jnz     short loc_5566E8
0x5566E4: xor     eax, eax
0x5566E6: jmp     short loc_5566ED
0x5566E8: mov     eax, [eax+8]
0x5566EB: sub     eax, ecx
0x5566ED: mov     ecx, [esp+18h+var_8]
0x5566F1: add     ecx, eax
0x5566F3: lea     eax, [ecx+eax*2]
0x5566F6: add     ebx, 1
0x5566F9: mov     [esp+18h+var_8], eax
0x5566FD: add     ebp, 40h ; '@'
0x556700: jmp     short loc_5566A0
0x556702: add     edi, 10h
0x556705: cmp     edi, 20h ; ' '
0x556708: jb      loc_556680
0x55670E: mov     eax, [esp+18h+var_8]
0x556712: pop     edi
0x556713: pop     ebp
0x556714: pop     ebx
0x556715: pop     esi
0x556716: add     esp, 8
0x556719: retn
