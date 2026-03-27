0x883190: push    0FFFFFFFFh
0x883192: push    offset SEH_87AC50
0x883197: mov     eax, large fs:0
0x88319D: push    eax
0x88319E: sub     esp, 8
0x8831A1: push    ebx
0x8831A2: push    esi
0x8831A3: push    edi
0x8831A4: mov     eax, ds:0B30AACh
0x8831A9: xor     eax, esp
0x8831AB: push    eax
0x8831AC: lea     eax, [esp+24h+var_C]
0x8831B0: mov     large fs:0, eax
0x8831B6: mov     [esp+24h+var_10], ecx
0x8831BA: xor     edi, edi
0x8831BC: or      ebx, 0FFFFFFFFh
0x8831BF: nop
0x8831C0: lea     eax, [esp+24h+var_14]
0x8831C4: push    eax
0x8831C5: call    sub_7606A0
0x8831CA: add     esp, 4
0x8831CD: mov     esi, eax
0x8831CF: mov     ecx, ds:dword_B47790[edi]
0x8831D5: cmp     ecx, [esi]
0x8831D7: mov     [esp+24h+var_4], 0
0x8831DF: jz      short loc_8831FF
0x8831E1: test    ecx, ecx
0x8831E3: jz      short loc_8831EF
0x8831E5: add     [ecx+60h], ebx
0x8831E8: jnz     short loc_8831EF
0x8831EA: call    sub_7604D0
0x8831EF: mov     eax, [esi]
0x8831F1: test    eax, eax
0x8831F3: mov     ds:dword_B47790[edi], eax
0x8831F9: jz      short loc_8831FF
0x8831FB: add     dword ptr [eax+60h], 1
0x8831FF: mov     eax, [esp+24h+var_14]
0x883203: test    eax, eax
0x883205: mov     [esp+24h+var_4], ebx
0x883209: jz      short loc_88321D
0x88320B: add     [eax+60h], ebx
0x88320E: mov     ecx, eax
0x883210: add     eax, 60h ; '`'
0x883213: cmp     dword ptr [eax], 0
0x883216: jnz     short loc_88321D
0x883218: call    sub_7604D0
0x88321D: add     edi, 4
0x883220: cmp     edi, 70h ; 'p'
0x883223: jb      short loc_8831C0
0x883225: mov     esi, [esp+24h+var_10]
0x883229: mov     edx, [esi]
0x88322B: mov     eax, [edx+0C4h]
0x883231: mov     ecx, esi
0x883233: call    eax
0x883235: cmp     dword ptr ds:0B42F48h, 2
0x88323C: jl      short loc_88324A
0x88323E: mov     edx, [esi]
0x883240: mov     eax, [edx+0C8h]
0x883246: mov     ecx, esi
0x883248: call    eax
0x88324A: mov     al, 1
0x88324C: mov     ecx, [esp+24h+var_C]
0x883250: mov     large fs:0, ecx
0x883257: pop     ecx
0x883258: pop     edi
0x883259: pop     esi
0x88325A: pop     ebx
0x88325B: add     esp, 14h
0x88325E: retn
