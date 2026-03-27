0x937470: push    ebp
0x937471: mov     ebp, esp
0x937473: and     esp, 0FFFFFFF0h
0x937476: sub     esp, 54h
0x937479: push    ebx
0x93747A: mov     ebx, [ebp+arg_4]
0x93747D: push    esi
0x93747E: push    edi
0x93747F: mov     edi, [ebp+arg_0]
0x937482: movzx   eax, byte ptr [edi+21h]
0x937486: dec     eax
0x937487: mov     esi, ecx
0x937489: js      short loc_9374A5
0x93748B: mov     cl, [ebx]
0x93748D: lea     ecx, [ecx+0]
0x937490: cmp     [edi+eax*4], cl
0x937493: jnz     short loc_9374A2
0x937495: mov     dl, [edi+eax*4+1]
0x937499: cmp     dl, [ebx+1]
0x93749C: jz      loc_9376CA
0x9374A2: dec     eax
0x9374A3: jns     short loc_937490
0x9374A5: movzx   eax, byte ptr [ebx]
0x9374A8: movzx   ecx, byte ptr [ebx+1]
0x9374AC: lea     edx, [esp+60h+var_40]
0x9374B0: mov     [esp+60h+var_8], eax
0x9374B4: push    edx
0x9374B5: lea     eax, [esp+64h+var_49]
0x9374B9: mov     [esp+64h+var_4], ecx
0x9374BD: push    eax
0x9374BE: mov     ecx, esi
0x9374C0: call    sub_936810
0x9374C5: cmp     byte ptr [eax], 0
0x9374C8: jz      loc_9376CA
0x9374CE: fld     [ebp+arg_8]
0x9374D1: fmul    dword ptr ds:0A3F478h
0x9374D7: fcomp   [esp+60h+var_C]
0x9374DB: fnstsw  ax
0x9374DD: test    ah, 41h
0x9374E0: jp      loc_9376CA
0x9374E6: mov     al, [ebx]
0x9374E8: cmp     al, 6
0x9374EA: ja      loc_9375B4
0x9374F0: cmp     al, 2
0x9374F2: ja      short loc_9374FE
0x9374F4: mov     eax, [esi+18h]
0x9374F7: movaps  xmm0, [esp+60h+var_30]
0x9374FC: jmp     short loc_937506
0x9374FE: mov     eax, [esi+14h]
0x937501: movaps  xmm0, [esp+60h+var_40]
0x937506: movaps  xmm3, xmmword ptr [eax+20h]
0x93750A: movaps  xmm1, xmmword ptr [eax+30h]
0x93750E: movaps  xmm2, xmm0
0x937511: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x937515: mulps   xmm3, xmm2
0x937518: movaps  xmm2, xmmword ptr [eax+10h]
0x93751C: addps   xmm3, xmm1
0x93751F: movaps  xmm1, xmm0
0x937522: shufps  xmm1, xmm0, 55h ; 'U'
0x937526: mulps   xmm2, xmm1
0x937529: movaps  xmm1, xmm0
0x93752C: shufps  xmm1, xmm0, 0
0x937530: movaps  xmm0, xmmword ptr [eax]
0x937533: mov     al, [edi+21h]
0x937536: mulps   xmm0, xmm1
0x937539: movaps  xmm1, xmm0
0x93753C: xor     ecx, ecx
0x93753E: test    al, al
0x937540: addps   xmm1, xmm2
0x937543: addps   xmm1, xmm3
0x937546: jbe     short loc_9375B4
0x937548: xor     edx, edx
0x93754A: lea     ebx, [ebx+0]
0x937550: cmp     byte ptr [edi+ecx*4], 6
0x937554: ja      short loc_9375A8
0x937556: mov     eax, [esi+10h]
0x937559: fld     dword ptr [esi+0B0h]
0x93755F: movaps  xmm2, xmmword ptr [eax+edx+30h]
0x937564: fld     st
0x937566: fmul    st, st(1)
0x937568: movaps  xmm0, xmm1
0x93756B: subps   xmm0, xmm2
0x93756E: mulps   xmm0, xmm0
0x937571: fadd    dword ptr ds:0AA1D50h
0x937577: movaps  xmm2, xmm0
0x93757A: shufps  xmm2, xmm0, 55h ; 'U'
0x93757E: movaps  xmm3, xmm0
0x937581: lea     eax, [esp+60h+var_48]
0x937585: addss   xmm2, xmm0
0x937589: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93758D: addss   xmm3, xmm2
0x937591: movss   dword ptr [eax], xmm3
0x937595: fld     [esp+60h+var_48]
0x937599: fcompp
0x93759B: fnstsw  ax
0x93759D: fstp    st
0x93759F: test    ah, 41h
0x9375A2: jnp     loc_9376CA
0x9375A8: movzx   eax, byte ptr [edi+21h]
0x9375AC: inc     ecx
0x9375AD: add     edx, 30h ; '0'
0x9375B0: cmp     ecx, eax
0x9375B2: jl      short loc_937550
0x9375B4: cmp     byte ptr [edi+21h], 8
0x9375B8: jnb     loc_9376CA
0x9375BE: mov     ecx, [esi+4]
0x9375C1: mov     edx, [esi]
0x9375C3: push    ebx
0x9375C4: push    ecx
0x9375C5: push    edx
0x9375C6: mov     ecx, edi
0x9375C8: call    sub_936460
0x9375CD: test    eax, eax
0x9375CF: mov     [esp+60h+var_48], eax
0x9375D3: jl      loc_9376CA
0x9375D9: mov     eax, [esi+10h]
0x9375DC: mov     ebx, [eax]
0x9375DE: mov     eax, [esp+60h+var_8]
0x9375E2: cmp     eax, 2
0x9375E5: jg      short loc_9375FA
0x9375E7: mov     edx, [ebp+arg_4]
0x9375EA: lea     ecx, [esp+60h+var_40]
0x9375EE: push    ecx
0x9375EF: push    edx
0x9375F0: push    ebx
0x9375F1: mov     ecx, esi
0x9375F3: call    sub_936C10
0x9375F8: jmp     short loc_937623
0x9375FA: cmp     eax, 6
0x9375FD: jg      short loc_937612
0x9375FF: mov     ecx, [ebp+arg_4]
0x937602: lea     eax, [esp+60h+var_40]
0x937606: push    eax
0x937607: push    ecx
0x937608: push    ebx
0x937609: mov     ecx, esi
0x93760B: call    sub_936D70
0x937610: jmp     short loc_937623
0x937612: mov     eax, [ebp+arg_4]
0x937615: lea     edx, [esp+60h+var_40]
0x937619: push    edx
0x93761A: push    eax
0x93761B: push    ebx
0x93761C: mov     ecx, esi
0x93761E: call    sub_936E10
0x937623: cmp     byte ptr [edi+21h], 1
0x937627: jbe     short loc_937680
0x937629: mov     ecx, [esi+10h]
0x93762C: mov     edx, [ecx]
0x93762E: movaps  xmm1, xmmword ptr [ebx+10h]
0x937632: movaps  xmm0, xmmword ptr [edx-20h]
0x937636: sub     edx, 20h ; ' '
0x937639: mulps   xmm0, xmm1
0x93763C: movaps  xmm1, xmm0
0x93763F: shufps  xmm1, xmm0, 55h ; 'U'
0x937643: movaps  xmm2, xmm0
0x937646: lea     eax, [esp+60h+var_44]
0x93764A: addss   xmm1, xmm0
0x93764E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x937652: addss   xmm2, xmm1
0x937656: movss   dword ptr [eax], xmm2
0x93765A: fld     [esp+60h+var_44]
0x93765E: fcomp   dword ptr ds:0A2FAA8h
0x937664: fnstsw  ax
0x937666: test    ah, 41h
0x937669: jp      short loc_937680
0x93766B: mov     ecx, [esp+60h+var_48]
0x93766F: push    ecx
0x937670: mov     ecx, edi
0x937672: call    sub_9363C0
0x937677: pop     edi
0x937678: pop     esi
0x937679: pop     ebx
0x93767A: mov     esp, ebp
0x93767C: pop     ebp
0x93767D: retn    0Ch
0x937680: mov     eax, [esi+8]
0x937683: mov     ecx, [esi+0Ch]
0x937686: mov     edx, [ecx]
0x937688: push    ebx
0x937689: push    eax
0x93768A: mov     eax, [esi+4]
0x93768D: push    eax
0x93768E: mov     eax, [esi]
0x937690: push    eax
0x937691: call    dword ptr [edx+8]
0x937694: cmp     ax, 0FFFFh
0x937698: mov     ecx, [esp+60h+var_48]
0x93769C: mov     [edi+ecx*4+2], ax
0x9376A1: jz      short loc_93766F
0x9376A3: mov     esi, [esi+10h]
0x9376A6: mov     edx, [esi]
0x9376A8: mov     eax, [ebp+arg_4]
0x9376AB: add     edx, 30h ; '0'
0x9376AE: mov     [esi], edx
0x9376B0: mov     dx, [edi+ecx*4+2]
0x9376B5: mov     [eax+2], dx
0x9376B9: mov     cx, [edi+ecx*4+2]
0x9376BE: mov     [ebx+20h], cx
0x9376C2: cmp     byte ptr [eax], 6
0x9376C5: ja      short loc_9376CA
0x9376C7: inc     byte ptr [edi+20h]
0x9376CA: pop     edi
0x9376CB: pop     esi
0x9376CC: pop     ebx
0x9376CD: mov     esp, ebp
0x9376CF: pop     ebp
0x9376D0: retn    0Ch
