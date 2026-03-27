0x9513F0: push    ebp
0x9513F1: mov     ebp, esp
0x9513F3: and     esp, 0FFFFFFF0h
0x9513F6: sub     esp, 24h
0x9513F9: mov     eax, [ebp+arg_18]
0x9513FC: mov     ecx, [ebp+arg_10]
0x9513FF: mov     edx, [ebp+arg_C]
0x951402: push    ebx
0x951403: push    esi
0x951404: push    edi
0x951405: push    eax; float
0x951406: mov     eax, [ebp+arg_4]
0x951409: push    ecx; int
0x95140A: push    edx; int
0x95140B: push    eax; int
0x95140C: lea     ecx, [esp+40h+var_1D]
0x951410: push    ecx; int
0x951411: call    sub_9511B0
0x951416: mov     cl, [eax]
0x951418: mov     eax, [ebp+arg_14]
0x95141B: mov     ebx, [eax+4]
0x95141E: add     esp, 14h
0x951421: test    cl, cl
0x951423: setnz   cl
0x951426: xor     edx, edx
0x951428: cmp     ebx, edx
0x95142A: mov     [esp+30h+var_1D+1], edx
0x95142E: mov     [esp+30h+var_4], ebx
0x951432: jle     loc_951578
0x951438: movaps  xmm1, xmmword ptr ds:0A372D0h
0x95143F: mov     [esp+30h+var_C], edx
0x951443: test    cl, cl
0x951445: jz      short loc_95146A
0x951447: mov     ecx, [ebp+arg_14]
0x95144A: mov     eax, [ecx]
0x95144C: mov     ecx, [eax+edx+14h]
0x951450: mov     cx, [ecx]
0x951453: mov     esi, [eax+edx+10h]
0x951457: add     eax, edx
0x951459: cmp     [esi], cx
0x95145C: jz      short loc_95146A
0x95145E: mov     eax, [eax+18h]
0x951461: cmp     cx, [eax]
0x951464: jz      short loc_95146A
0x951466: mov     al, 1
0x951468: jmp     short loc_95146C
0x95146A: xor     al, al
0x95146C: xor     esi, esi
0x95146E: test    ebx, ebx
0x951470: mov     [esp+30h+var_18], 0
0x951475: mov     [esp+30h+var_14], 0
0x95147A: mov     [esp+30h+var_10], 0
0x95147F: jle     loc_95153E
0x951485: xor     edi, edi
0x951487: jmp     short loc_951490
0x951489: align 10h
0x951490: cmp     esi, [esp+30h+var_1D+1]
0x951494: jz      loc_951532
0x95149A: test    al, al
0x95149C: jz      loc_951528
0x9514A2: mov     ecx, [ebp+arg_14]
0x9514A5: mov     ecx, [ecx]
0x9514A7: mov     ebx, [edi+ecx+10h]
0x9514AB: lea     eax, [edi+ecx]
0x9514AE: add     ecx, edx
0x9514B0: mov     edx, [ecx+10h]
0x9514B3: mov     dx, [edx]
0x9514B6: cmp     dx, [ebx]
0x9514B9: jnz     short loc_951500
0x9514BB: mov     edx, [ecx+14h]
0x9514BE: mov     ebx, [eax+14h]
0x9514C1: mov     dx, [edx]
0x9514C4: cmp     dx, [ebx]
0x9514C7: jnz     short loc_951500
0x9514C9: mov     edx, [ecx+18h]
0x9514CC: mov     ebx, [eax+18h]
0x9514CF: mov     dx, [edx]
0x9514D2: cmp     dx, [ebx]
0x9514D5: jnz     short loc_951500
0x9514D7: movaps  xmm0, xmmword ptr [eax]
0x9514DA: movaps  xmm2, xmmword ptr [ecx]
0x9514DD: subps   xmm2, xmm0
0x9514E0: mov     [esp+30h+var_8], 3A83126Fh
0x9514E8: movss   xmm0, [esp+30h+var_8]
0x9514EE: andps   xmm2, xmm1
0x9514F1: shufps  xmm0, xmm0, 0
0x9514F5: cmpltps xmm0, xmm2
0x9514F9: movmskps edx, xmm0
0x9514FC: test    edx, edx
0x9514FE: jz      short loc_951528
0x951500: lea     edx, [esp+30h+var_10]
0x951504: push    edx
0x951505: lea     edx, [esp+34h+var_14]
0x951509: push    edx
0x95150A: lea     edx, [esp+38h+var_18]
0x95150E: push    edx
0x95150F: push    eax
0x951510: push    ecx
0x951511: lea     eax, [esp+44h+var_1D]
0x951515: push    eax
0x951516: call    sub_9510E0
0x95151B: mov     cl, [eax]
0x95151D: add     esp, 18h
0x951520: test    cl, cl
0x951522: jz      short loc_951528
0x951524: mov     al, 1
0x951526: jmp     short loc_95152A
0x951528: xor     al, al
0x95152A: mov     edx, [esp+30h+var_C]
0x95152E: mov     ebx, [esp+30h+var_4]
0x951532: inc     esi
0x951533: add     edi, 20h ; ' '
0x951536: cmp     esi, ebx
0x951538: jl      loc_951490
0x95153E: test    al, al
0x951540: jz      short loc_95155E
0x951542: mov     al, [esp+30h+var_18]
0x951546: test    al, al
0x951548: jz      short loc_95155E
0x95154A: mov     al, [esp+30h+var_14]
0x95154E: test    al, al
0x951550: jz      short loc_95155E
0x951552: mov     al, [esp+30h+var_10]
0x951556: test    al, al
0x951558: jz      short loc_95155E
0x95155A: mov     cl, 1
0x95155C: jmp     short loc_951560
0x95155E: xor     cl, cl
0x951560: mov     eax, [esp+30h+var_1D+1]
0x951564: inc     eax
0x951565: add     edx, 20h ; ' '
0x951568: cmp     eax, ebx
0x95156A: mov     [esp+30h+var_1D+1], eax
0x95156E: mov     [esp+30h+var_C], edx
0x951572: jl      loc_951443
0x951578: mov     edx, [ebp+arg_C]
0x95157B: mov     esi, [edx+4]
0x95157E: cmp     esi, 2
0x951581: jle     short loc_9515AC
0x951583: test    cl, cl
0x951585: jz      short loc_9515AA
0x951587: mov     eax, [ebp+arg_8]
0x95158A: mov     eax, [eax+8]
0x95158D: cdq
0x95158E: sub     eax, edx
0x951590: sar     eax, 1
0x951592: sub     ebx, eax
0x951594: lea     ecx, [ebx+esi-2]
0x951598: test    ecx, ecx
0x95159A: jnz     short loc_9515AA
0x95159C: mov     eax, [ebp+arg_0]
0x95159F: mov     cl, 1
0x9515A1: mov     [eax], cl
0x9515A3: pop     edi
0x9515A4: pop     esi
0x9515A5: pop     ebx
0x9515A6: mov     esp, ebp
0x9515A8: pop     ebp
0x9515A9: retn
0x9515AA: xor     cl, cl
0x9515AC: mov     eax, [ebp+arg_0]
0x9515AF: pop     edi
0x9515B0: pop     esi
0x9515B1: mov     [eax], cl
0x9515B3: pop     ebx
0x9515B4: mov     esp, ebp
0x9515B6: pop     ebp
0x9515B7: retn
