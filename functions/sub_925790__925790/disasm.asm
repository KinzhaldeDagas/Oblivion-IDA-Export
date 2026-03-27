0x925790: push    ebp
0x925791: mov     ebp, esp
0x925793: and     esp, 0FFFFFFF0h
0x925796: sub     esp, 74h
0x925799: mov     edx, [ecx+24h]
0x92579C: push    ebx
0x92579D: mov     bl, [ecx+44h]
0x9257A0: test    bl, 2
0x9257A3: lea     eax, [ecx+44h]
0x9257A6: push    esi
0x9257A7: push    edi
0x9257A8: mov     [esp+80h+var_58], ecx
0x9257AC: mov     [esp+80h+var_54], edx
0x9257B0: jz      loc_925A50
0x9257B6: mov     ebx, [ecx+38h]
0x9257B9: mov     edi, [ecx+20h]
0x9257BC: lea     eax, [edx-1]
0x9257BF: test    eax, eax
0x9257C1: jl      loc_925A49
0x9257C7: inc     eax
0x9257C8: mov     [esp+80h+var_60], eax
0x9257CC: lea     esp, [esp+0]
0x9257D0: test    byte ptr [ebx+0Fh], 1
0x9257D4: jz      loc_925A30
0x9257DA: mov     edx, [ebp+arg_0]
0x9257DD: mov     eax, [edx+24h]
0x9257E0: mov     esi, [eax+10h]
0x9257E3: mov     eax, [eax+14h]
0x9257E6: mov     ecx, [edx+14h]
0x9257E9: movaps  xmm2, xmmword ptr [ecx+40h]
0x9257ED: mov     edx, [edx+18h]
0x9257F0: movaps  xmm1, xmmword ptr [edi]
0x9257F3: mov     ecx, [esi+50h]
0x9257F6: movaps  xmm3, xmmword ptr [ecx+0E0h]
0x9257FD: movaps  xmm0, xmm1
0x925800: subps   xmm0, xmm2
0x925803: movaps  xmm2, xmmword ptr [edx+40h]
0x925807: mov     edx, [eax+50h]
0x92580A: movaps  xmm5, xmmword ptr [edx+0D0h]
0x925811: subps   xmm1, xmm2
0x925814: movaps  xmm2, xmmword ptr [edx+0E0h]
0x92581B: movaps  xmm4, xmmword ptr [edi+10h]
0x92581F: movaps  xmm6, xmm1
0x925822: shufps  xmm6, xmm1, 0C9h ; 'É'
0x925826: movaps  xmm7, xmm2
0x925829: shufps  xmm7, xmm2, 0D2h ; 'Ò'
0x92582D: mulps   xmm7, xmm6
0x925830: movaps  xmm6, xmm1
0x925833: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x925837: movaps  xmm1, xmm2
0x92583A: shufps  xmm1, xmm2, 0C9h ; 'É'
0x92583E: movaps  xmm2, xmmword ptr [ecx+0D0h]
0x925845: mulps   xmm1, xmm6
0x925848: subps   xmm1, xmm7
0x92584B: addps   xmm1, xmm5
0x92584E: movaps  xmm5, xmm0
0x925851: shufps  xmm5, xmm0, 0C9h ; 'É'
0x925855: movaps  xmm6, xmm3
0x925858: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x92585C: mulps   xmm6, xmm5
0x92585F: movaps  xmm5, xmm0
0x925862: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x925866: movaps  xmm0, xmm3
0x925869: shufps  xmm0, xmm3, 0C9h ; 'É'
0x92586D: mulps   xmm0, xmm5
0x925870: subps   xmm0, xmm6
0x925873: addps   xmm0, xmm2
0x925876: subps   xmm0, xmm1
0x925879: mulps   xmm0, xmm4
0x92587C: mov     [esp+80h+var_64], eax
0x925880: movaps  xmm1, xmm0
0x925883: add     eax, 14h
0x925886: shufps  xmm1, xmm0, 55h ; 'U'
0x92588A: movaps  xmm2, xmm0
0x92588D: addss   xmm1, xmm0
0x925891: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x925895: lea     ecx, [esp+80h+var_68]
0x925899: addss   xmm2, xmm1
0x92589D: lea     edx, [esi+14h]
0x9258A0: mov     [esp+80h+var_48], eax
0x9258A4: movss   dword ptr [ecx], xmm2
0x9258A8: mov     ecx, [esp+80h+var_68]
0x9258AC: mov     [esp+80h+var_4C], edx
0x9258B0: lea     eax, [ebx+8]
0x9258B3: lea     edx, [esp+80h+var_4C]
0x9258B7: mov     [esp+80h+var_40], edi
0x9258BB: mov     [esp+80h+var_3C], eax
0x9258BF: mov     [esp+80h+var_38], ecx
0x9258C3: mov     [esp+80h+var_34], 1
0x9258CB: mov     eax, [esi+8]
0x9258CE: push    edx
0x9258CF: push    eax
0x9258D0: mov     [esp+88h+var_5C], eax
0x9258D4: call    sub_8DC890
0x9258D9: mov     eax, [esi+98h]
0x9258DF: add     esp, 8
0x9258E2: test    eax, eax
0x9258E4: jz      short loc_9258F4
0x9258E6: lea     eax, [esp+80h+var_4C]
0x9258EA: push    eax
0x9258EB: push    esi
0x9258EC: call    sub_8DC010
0x9258F1: add     esp, 8
0x9258F4: mov     ecx, [esp+80h+var_64]
0x9258F8: mov     eax, [ecx+98h]
0x9258FE: test    eax, eax
0x925900: jz      short loc_925914
0x925902: lea     edx, [esp+80h+var_4C]
0x925906: push    edx
0x925907: push    ecx
0x925908: call    sub_8DC010
0x92590D: mov     ecx, [esp+88h+var_64]
0x925911: add     esp, 8
0x925914: movzx   eax, byte ptr [ebx+0Eh]
0x925918: mov     edx, [esp+80h+var_5C]
0x92591C: mov     [esp+80h+var_64], eax
0x925920: mov     eax, [edx+74h]
0x925923: mov     edx, [eax+24h]
0x925926: fild    [esp+80h+var_64]
0x92592A: fld     dword ptr ds:0A9A02Ch
0x925930: fmul    st, st(1)
0x925932: fst     [esp+80h+var_64]
0x925936: fld     dword ptr [edx+40h]
0x925939: fchs
0x92593B: fcomp   [esp+80h+var_38]
0x92593F: fnstsw  ax
0x925941: test    ah, 41h
0x925944: jnz     loc_9259D2
0x92594A: fld     [esp+80h+var_64]
0x92594E: fcomp   dword ptr ds:0A3744Ch
0x925954: fnstsw  ax
0x925956: test    ah, 41h
0x925959: jnz     short loc_9259D2
0x92595B: movzx   eax, word ptr [ebx+0Ch]
0x92595F: fstp    st
0x925961: mov     edx, [esp+80h+var_64]
0x925965: fstp    st
0x925967: movaps  xmm0, xmmword ptr [edi+10h]
0x92596B: mov     [esp+80h+var_5C], eax
0x92596F: mov     eax, [esp+80h+var_38]
0x925973: fild    [esp+80h+var_5C]
0x925977: mov     [esp+80h+var_1C], edx
0x92597B: mov     [esp+80h+var_18], eax
0x92597F: mov     eax, [ebp+arg_0]
0x925982: fmul    dword ptr ds:0A9A028h
0x925988: lea     edx, [esp+80h+var_50]
0x92598C: push    edx
0x92598D: mov     edx, [eax+18h]
0x925990: mov     eax, [eax+14h]
0x925993: fstp    [esp+84h+var_20]
0x925997: push    edx
0x925998: push    eax
0x925999: push    ecx
0x92599A: push    esi
0x92599B: lea     ecx, [esp+94h+var_30]
0x92599F: push    ecx
0x9259A0: push    edi
0x9259A1: movaps  [esp+9Ch+var_30], xmm0
0x9259A6: mov     [esp+9Ch+var_14], 0
0x9259B1: mov     [esp+9Ch+var_10], 0
0x9259BC: call    sub_91FB20
0x9259C1: mov     dword ptr [ebx], 0
0x9259C7: mov     edx, [edi+1Ch]
0x9259CA: add     esp, 1Ch
0x9259CD: mov     [ebx+10h], edx
0x9259D0: jmp     short loc_925A24
0x9259D2: mov     eax, [esi+50h]
0x9259D5: mov     ecx, [ecx+50h]
0x9259D8: fld     dword ptr [eax+0C0h]
0x9259DE: fadd    dword ptr [ecx+0C0h]
0x9259E4: mov     edx, [ebp+arg_0]
0x9259E7: fadd    dword ptr ds:0A9E034h
0x9259ED: fdivr   dword ptr ds:0A2F948h
0x9259F3: fxch    st(1)
0x9259F5: fadd    dword ptr ds:0A2F948h
0x9259FB: fmulp   st(1), st
0x9259FD: fmul    [esp+80h+var_68]
0x925A01: fmul    dword ptr ds:0A5AC50h
0x925A07: fstp    dword ptr [ebx]
0x925A09: fmul    dword ptr [edx]
0x925A0B: fmul    [esp+80h+var_68]
0x925A0F: fmul    dword ptr ds:0A9A02Ch
0x925A15: fmul    dword ptr ds:0A9E030h
0x925A1B: fst     dword ptr [ebx+4]
0x925A1E: fadd    dword ptr [edi+1Ch]
0x925A21: fstp    dword ptr [ebx+10h]
0x925A24: mov     al, [ebx+0Fh]
0x925A27: mov     ecx, [esp+80h+var_58]
0x925A2B: and     al, 0FEh
0x925A2D: mov     [ebx+0Fh], al
0x925A30: mov     eax, [esp+80h+var_60]
0x925A34: add     edi, 20h ; ' '
0x925A37: add     ebx, 14h
0x925A3A: dec     eax
0x925A3B: mov     [esp+80h+var_60], eax
0x925A3F: jnz     loc_9257D0
0x925A45: mov     edx, [esp+80h+var_54]
0x925A49: and     byte ptr [ecx+44h], 0FDh
0x925A4D: lea     eax, [ecx+44h]
0x925A50: mov     esi, [ebp+arg_4]
0x925A53: push    esi
0x925A54: mov     esi, [ebp+arg_0]
0x925A57: push    esi
0x925A58: push    eax
0x925A59: mov     eax, [ecx+38h]
0x925A5C: mov     ecx, [ecx+20h]
0x925A5F: push    eax
0x925A60: push    edx
0x925A61: push    ecx
0x925A62: call    sub_94FEF0
0x925A67: add     esp, 18h
0x925A6A: pop     edi
0x925A6B: pop     esi
0x925A6C: pop     ebx
0x925A6D: mov     esp, ebp
0x925A6F: pop     ebp
0x925A70: retn    8
