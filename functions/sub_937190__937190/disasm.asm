0x937190: push    ebp
0x937191: mov     ebp, esp
0x937193: and     esp, 0FFFFFFF0h
0x937196: sub     esp, 54h
0x937199: push    ebx
0x93719A: push    esi
0x93719B: mov     esi, [ebp+arg_0]
0x93719E: mov     eax, offset aP0; "P0`"
0x9371A3: push    edi
0x9371A4: mov     edi, ecx
0x9371A6: mov     [esp+60h+var_4C], eax
0x9371AA: lea     ebx, [ebx+0]
0x9371B0: movzx   eax, word ptr [eax]
0x9371B3: mov     ebx, [ebp+arg_8]
0x9371B6: mov     ecx, eax
0x9371B8: and     ecx, ebx
0x9371BA: test    cx, cx
0x9371BD: jnz     loc_937442
0x9371C3: mov     ecx, [ebp+arg_4]
0x9371C6: mov     [esp+60h+var_54], ecx
0x9371CA: xor     al, ch
0x9371CC: mov     cl, ch
0x9371CE: and     cl, 0Fh
0x9371D1: or      al, cl
0x9371D3: mov     cl, al
0x9371D5: movzx   eax, byte ptr [esi+21h]
0x9371D9: dec     eax
0x9371DA: mov     byte ptr [esp+60h+var_54+1], cl
0x9371DE: js      short loc_9371F6
0x9371E0: mov     dl, byte ptr [esp+60h+var_54]
0x9371E4: cmp     [esi+eax*4], dl
0x9371E7: jnz     short loc_9371F3
0x9371E9: cmp     [esi+eax*4+1], cl
0x9371ED: jz      loc_937442
0x9371F3: dec     eax
0x9371F4: jns     short loc_9371E4
0x9371F6: lea     edx, [esp+60h+var_54]
0x9371FA: push    edx
0x9371FB: lea     eax, [esp+64h+var_40]
0x9371FF: push    eax
0x937200: mov     ecx, edi
0x937202: call    sub_936CB0
0x937207: movaps  xmm0, [esp+60h+var_30]
0x93720C: movaps  xmm2, xmmword ptr ds:0A372D0h
0x937213: movaps  xmm1, xmmword ptr [edi+0A0h]
0x93721A: movaps  xmm3, xmm0
0x93721D: andps   xmm3, xmm2
0x937220: cmpltps xmm3, xmm1
0x937224: movmskps ecx, xmm3
0x937227: and     ecx, 7
0x93722A: cmp     cl, 7
0x93722D: jnz     loc_937442
0x937233: mov     eax, [esp+60h+var_8]
0x937237: fld     [esp+60h+var_10]
0x93723B: fmul    dword ptr [esp+eax*4+60h+var_40]
0x93723F: fchs
0x937241: fsub    dword ptr [edi+eax*4+60h]
0x937245: fst     [esp+60h+var_C]
0x937249: fld     [ebp+arg_C]
0x93724C: fsub    dword ptr ds:0AA1D50h
0x937252: fxch    st(1)
0x937254: fcompp
0x937256: fnstsw  ax
0x937258: test    ah, 1
0x93725B: jnz     loc_937442
0x937261: mov     al, byte ptr [esp+60h+var_54]
0x937265: cmp     al, 6
0x937267: ja      loc_937326
0x93726D: cmp     al, 2
0x93726F: ja      short loc_937276
0x937271: mov     eax, [edi+18h]
0x937274: jmp     short loc_93727E
0x937276: mov     eax, [edi+14h]
0x937279: movaps  xmm0, [esp+60h+var_40]
0x93727E: movaps  xmm3, xmmword ptr [eax+20h]
0x937282: movaps  xmm1, xmmword ptr [eax+30h]
0x937286: movaps  xmm2, xmm0
0x937289: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93728D: mulps   xmm3, xmm2
0x937290: movaps  xmm2, xmmword ptr [eax+10h]
0x937294: addps   xmm3, xmm1
0x937297: movaps  xmm1, xmm0
0x93729A: shufps  xmm1, xmm0, 55h ; 'U'
0x93729E: mulps   xmm2, xmm1
0x9372A1: movaps  xmm1, xmm0
0x9372A4: shufps  xmm1, xmm0, 0
0x9372A8: movaps  xmm0, xmmword ptr [eax]
0x9372AB: mov     al, [esi+21h]
0x9372AE: mulps   xmm0, xmm1
0x9372B1: movaps  xmm1, xmm0
0x9372B4: xor     ecx, ecx
0x9372B6: test    al, al
0x9372B8: addps   xmm1, xmm2
0x9372BB: addps   xmm1, xmm3
0x9372BE: jbe     short loc_937326
0x9372C0: xor     edx, edx
0x9372C2: cmp     byte ptr [esi+ecx*4], 6
0x9372C6: ja      short loc_93731A
0x9372C8: mov     eax, [edi+10h]
0x9372CB: fld     dword ptr [edi+0B0h]
0x9372D1: movaps  xmm2, xmmword ptr [eax+edx+30h]
0x9372D6: fld     st
0x9372D8: fmul    st, st(1)
0x9372DA: movaps  xmm0, xmm1
0x9372DD: subps   xmm0, xmm2
0x9372E0: mulps   xmm0, xmm0
0x9372E3: fadd    dword ptr ds:0AA1D50h
0x9372E9: movaps  xmm2, xmm0
0x9372EC: shufps  xmm2, xmm0, 55h ; 'U'
0x9372F0: movaps  xmm3, xmm0
0x9372F3: lea     eax, [esp+60h+var_48]
0x9372F7: addss   xmm2, xmm0
0x9372FB: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9372FF: addss   xmm3, xmm2
0x937303: movss   dword ptr [eax], xmm3
0x937307: fld     [esp+60h+var_48]
0x93730B: fcompp
0x93730D: fnstsw  ax
0x93730F: fstp    st
0x937311: test    ah, 41h
0x937314: jnp     loc_937442
0x93731A: movzx   eax, byte ptr [esi+21h]
0x93731E: inc     ecx
0x93731F: add     edx, 30h ; '0'
0x937322: cmp     ecx, eax
0x937324: jl      short loc_9372C2
0x937326: cmp     byte ptr [esi+21h], 8
0x93732A: jnb     loc_937442
0x937330: mov     edx, [edi+4]
0x937333: mov     eax, [edi]
0x937335: lea     ecx, [esp+60h+var_54]
0x937339: push    ecx
0x93733A: push    edx
0x93733B: push    eax
0x93733C: mov     ecx, esi
0x93733E: call    sub_936460
0x937343: test    eax, eax
0x937345: mov     [esp+60h+var_50], eax
0x937349: jl      loc_937442
0x93734F: mov     eax, [esp+60h+var_8]
0x937353: cmp     eax, 2
0x937356: mov     ecx, [edi+10h]
0x937359: mov     ebx, [ecx]
0x93735B: jg      short loc_937371
0x93735D: lea     edx, [esp+60h+var_40]
0x937361: push    edx
0x937362: lea     eax, [esp+64h+var_54]
0x937366: push    eax
0x937367: push    ebx
0x937368: mov     ecx, edi
0x93736A: call    sub_936C10
0x93736F: jmp     short loc_93739C
0x937371: cmp     eax, 6
0x937374: jg      short loc_93738A
0x937376: lea     ecx, [esp+60h+var_40]
0x93737A: push    ecx
0x93737B: lea     edx, [esp+64h+var_54]
0x93737F: push    edx
0x937380: push    ebx
0x937381: mov     ecx, edi
0x937383: call    sub_936D70
0x937388: jmp     short loc_93739C
0x93738A: lea     eax, [esp+60h+var_40]
0x93738E: push    eax
0x93738F: lea     ecx, [esp+64h+var_54]
0x937393: push    ecx
0x937394: push    ebx
0x937395: mov     ecx, edi
0x937397: call    sub_936E10
0x93739C: cmp     byte ptr [esi+21h], 1
0x9373A0: jbe     short loc_9373F2
0x9373A2: mov     edx, [edi+10h]
0x9373A5: mov     eax, [edx]
0x9373A7: movaps  xmm1, xmmword ptr [ebx+10h]
0x9373AB: movaps  xmm0, xmmword ptr [eax-20h]
0x9373AF: sub     eax, 20h ; ' '
0x9373B2: mulps   xmm0, xmm1
0x9373B5: movaps  xmm1, xmm0
0x9373B8: shufps  xmm1, xmm0, 55h ; 'U'
0x9373BC: movaps  xmm2, xmm0
0x9373BF: addss   xmm1, xmm0
0x9373C3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9373C7: lea     ecx, [esp+60h+var_44]
0x9373CB: addss   xmm2, xmm1
0x9373CF: movss   dword ptr [ecx], xmm2
0x9373D3: fld     [esp+60h+var_44]
0x9373D7: fcomp   dword ptr ds:0A2FAA8h
0x9373DD: fnstsw  ax
0x9373DF: test    ah, 41h
0x9373E2: jp      short loc_9373F2
0x9373E4: mov     edx, [esp+60h+var_50]
0x9373E8: push    edx
0x9373E9: mov     ecx, esi
0x9373EB: call    sub_9363C0
0x9373F0: jmp     short loc_937442
0x9373F2: mov     edx, [edi+8]
0x9373F5: mov     ecx, [edi+0Ch]
0x9373F8: mov     eax, [ecx]
0x9373FA: push    ebx
0x9373FB: push    edx
0x9373FC: mov     edx, [edi+4]
0x9373FF: push    edx
0x937400: mov     edx, [edi]
0x937402: push    edx
0x937403: call    dword ptr [eax+8]
0x937406: cmp     ax, 0FFFFh
0x93740A: mov     ecx, [esp+60h+var_50]
0x93740E: mov     [esi+ecx*4+2], ax
0x937413: jnz     short loc_93741F
0x937415: push    ecx
0x937416: mov     ecx, esi
0x937418: call    sub_9363C0
0x93741D: jmp     short loc_937442
0x93741F: mov     eax, [edi+10h]
0x937422: add     dword ptr [eax], 30h ; '0'
0x937425: mov     ax, [esi+ecx*4+2]
0x93742A: mov     word ptr [esp+60h+var_54+2], ax
0x93742F: mov     cx, [esi+ecx*4+2]
0x937434: mov     [ebx+20h], cx
0x937438: cmp     byte ptr [esp+60h+var_54], 6
0x93743D: ja      short loc_937442
0x93743F: inc     byte ptr [esi+20h]
0x937442: mov     eax, [esp+60h+var_4C]
0x937446: add     eax, 2
0x937449: cmp     eax, offset word_AA1D4E
0x93744E: mov     [esp+60h+var_4C], eax
0x937452: jl      loc_9371B0
0x937458: pop     edi
0x937459: pop     esi
0x93745A: pop     ebx
0x93745B: mov     esp, ebp
0x93745D: pop     ebp
0x93745E: retn    10h
