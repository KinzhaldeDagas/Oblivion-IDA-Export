0x9582E0: sub     esp, 64h
0x9582E3: mov     eax, [esp+64h+arg_4]
0x9582E7: push    ebx
0x9582E8: push    ebp
0x9582E9: push    esi
0x9582EA: push    edi
0x9582EB: push    eax
0x9582EC: lea     ecx, [esp+78h+var_58]
0x9582F0: call    sub_942D70
0x9582F5: push    1
0x9582F7: lea     ecx, [esp+78h+var_64]
0x9582FB: xor     edi, edi
0x9582FD: push    ecx
0x9582FE: mov     ebx, 80000000h
0x958303: lea     ecx, [esp+7Ch+var_48]
0x958307: mov     [esp+7Ch+var_64], edi
0x95830B: mov     [esp+7Ch+var_60], edi
0x95830F: mov     [esp+7Ch+var_5C], ebx
0x958313: call    sub_8BC030
0x958318: mov     eax, [esp+74h+arg_14]
0x95831F: mov     ecx, [esp+74h+arg_10]
0x958326: lea     edx, [esp+74h+var_34]
0x95832A: push    edx
0x95832B: push    eax
0x95832C: push    ecx
0x95832D: lea     edx, [esp+80h+var_48]
0x958331: push    edx
0x958332: lea     ecx, [esp+84h+var_58]
0x958336: mov     [esp+84h+var_34], edi
0x95833A: mov     [esp+84h+var_30], edi
0x95833E: mov     [esp+84h+var_2C], ebx
0x958342: mov     [esp+84h+var_28], edi
0x958346: mov     [esp+84h+var_24], edi
0x95834A: mov     [esp+84h+var_20], ebx
0x95834E: mov     [esp+84h+var_1C], edi
0x958352: mov     [esp+84h+var_18], edi
0x958356: mov     [esp+84h+var_14], ebx
0x95835A: mov     [esp+84h+var_10], edi
0x95835E: mov     [esp+84h+var_C], edi
0x958362: mov     [esp+84h+var_8], ebx
0x958366: mov     [esp+84h+var_4], edi
0x95836D: call    sub_942D10
0x958372: mov     esi, [esp+74h+arg_18]
0x958379: mov     ecx, [esp+74h+var_24]
0x95837D: mov     eax, [esi+4]
0x958380: add     eax, ecx
0x958382: mov     ecx, [esi+8]
0x958385: and     ecx, 3FFFFFFFh
0x95838B: cmp     ecx, eax
0x95838D: jge     short loc_9583A3
0x95838F: add     ecx, ecx
0x958391: cmp     eax, ecx
0x958393: jge     short loc_958397
0x958395: mov     eax, ecx
0x958397: push    18h
0x958399: push    eax
0x95839A: push    esi
0x95839B: call    sub_8A6E40
0x9583A0: add     esp, 0Ch
0x9583A3: mov     eax, [esp+74h+var_24]
0x9583A7: xor     ebp, ebp
0x9583A9: cmp     eax, edi
0x9583AB: jle     short loc_95840F
0x9583AD: xor     ebx, ebx
0x9583AF: nop
0x9583B0: mov     eax, [esi+8]
0x9583B3: mov     ecx, [esi+4]
0x9583B6: and     eax, 3FFFFFFFh
0x9583BB: cmp     ecx, eax
0x9583BD: jnz     short loc_9583CA
0x9583BF: push    18h
0x9583C1: push    esi
0x9583C2: call    sub_8A6EE0
0x9583C7: add     esp, 8
0x9583CA: mov     ecx, [esi+4]
0x9583CD: mov     eax, [esi]
0x9583CF: lea     edx, [ecx+ecx*2]
0x9583D2: inc     ecx
0x9583D3: mov     [esi+4], ecx
0x9583D6: mov     ecx, [esp+74h+var_28]
0x9583DA: lea     eax, [eax+edx*8]
0x9583DD: mov     edx, [ebx+ecx]
0x9583E0: mov     [eax], edx
0x9583E2: mov     ecx, [esp+74h+var_28]
0x9583E6: mov     edx, [ebx+ecx+4]
0x9583EA: mov     [eax+8], edx
0x9583ED: mov     [eax+0Ch], edi
0x9583F0: mov     ecx, [esp+74h+var_28]
0x9583F4: mov     edx, [ebx+ecx+8]
0x9583F8: mov     [eax+10h], edx
0x9583FB: mov     [eax+14h], edi
0x9583FE: mov     eax, [esp+74h+var_24]
0x958402: inc     ebp
0x958403: add     ebx, 0Ch
0x958406: cmp     ebp, eax
0x958408: jl      short loc_9583B0
0x95840A: mov     ebx, 80000000h
0x95840F: push    ecx
0x958410: mov     ecx, [esp+78h+arg_4]
0x958417: mov     dl, [ecx+1]
0x95841A: mov     cl, ds:0B2FDE5h
0x958420: mov     esi, [esp+78h+arg_0]
0x958424: mov     eax, esp
0x958426: cmp     dl, cl
0x958428: setnz   cl
0x95842B: mov     [eax], cl
0x95842D: mov     edx, [esp+78h+var_60]
0x958431: mov     eax, [esp+78h+var_64]
0x958435: mov     ecx, [esp+78h+arg_14]
0x95843C: push    edx
0x95843D: mov     edx, [esp+7Ch+arg_C]
0x958444: push    eax
0x958445: mov     eax, [esp+80h+arg_8]
0x95844C: push    edi
0x95844D: push    ecx
0x95844E: push    edx
0x95844F: push    eax
0x958450: lea     eax, [esp+90h+var_34]
0x958454: call    sub_958130
0x958459: add     esp, 1Ch
0x95845C: lea     ecx, [esp+74h+var_34]
0x958460: mov     esi, eax
0x958462: call    sub_941400
0x958467: lea     ecx, [esp+74h+var_48]
0x95846B: call    sub_8BC2E0
0x958470: mov     eax, [esp+74h+var_5C]
0x958474: test    ebx, eax
0x958476: jnz     short loc_9584AA
0x958478: mov     ecx, ds:0BA9DE4h
0x95847E: mov     edx, large fs:2Ch
0x958485: mov     ecx, [edx+ecx*4]
0x958488: mov     ecx, [ecx+19Ch]
0x95848E: cmp     ecx, edi
0x958490: jnz     short loc_958498
0x958492: mov     ecx, ds:0BA7D9Ch
0x958498: mov     edx, [esp+74h+var_64]
0x95849C: push    14h
0x95849E: and     eax, 3FFFFFFFh
0x9584A3: push    eax
0x9584A4: push    edx
0x9584A5: call    sub_8A75D0
0x9584AA: lea     ecx, [esp+74h+var_58]
0x9584AE: call    sub_942E10
0x9584B3: pop     edi
0x9584B4: mov     eax, esi
0x9584B6: pop     esi
0x9584B7: pop     ebp
0x9584B8: pop     ebx
0x9584B9: add     esp, 64h
0x9584BC: retn
