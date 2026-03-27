0x8AC6A0: push    ebp
0x8AC6A1: mov     ebp, esp
0x8AC6A3: and     esp, 0FFFFFFF0h
0x8AC6A6: sub     esp, 0E4h
0x8AC6AC: mov     eax, [ebp+arg_0]
0x8AC6AF: push    ebx
0x8AC6B0: push    esi
0x8AC6B1: mov     esi, ecx
0x8AC6B3: mov     ecx, [eax+8]
0x8AC6B6: mov     eax, [esi+78h]
0x8AC6B9: xor     ebx, ebx
0x8AC6BB: cmp     eax, ebx
0x8AC6BD: push    edi
0x8AC6BE: mov     [esp+0F0h+var_8C], ecx
0x8AC6C2: mov     [esp+0F0h+var_D0], ebx
0x8AC6C6: jle     loc_8ACAB3
0x8AC6CC: mov     [esp+0F0h+var_C8], ebx
0x8AC6D0: mov     edx, [esi+74h]
0x8AC6D3: mov     ecx, [ebx+edx+28h]
0x8AC6D7: mov     eax, [ecx+10h]
0x8AC6DA: mov     edx, [eax+ecx+48h]
0x8AC6DE: add     eax, ecx
0x8AC6E0: xor     ecx, ecx
0x8AC6E2: test    edx, edx
0x8AC6E4: jle     short loc_8AC761
0x8AC6E6: mov     eax, [eax+44h]
0x8AC6E9: mov     edi, eax
0x8AC6EB: jmp     short loc_8AC6F0
0x8AC6ED: align 10h
0x8AC6F0: cmp     dword ptr [edi], 1300h
0x8AC6F6: jz      short loc_8AC702
0x8AC6F8: inc     ecx
0x8AC6F9: add     edi, 10h
0x8AC6FC: cmp     ecx, edx
0x8AC6FE: jl      short loc_8AC6F0
0x8AC700: jmp     short loc_8AC761
0x8AC702: xor     ecx, ecx
0x8AC704: test    edx, edx
0x8AC706: jle     short loc_8AC724
0x8AC708: mov     edi, eax
0x8AC70A: lea     ebx, [ebx+0]
0x8AC710: cmp     dword ptr [edi], 1300h
0x8AC716: jz      loc_8AC961
0x8AC71C: inc     ecx
0x8AC71D: add     edi, 10h
0x8AC720: cmp     ecx, edx
0x8AC722: jl      short loc_8AC710
0x8AC724: xor     eax, eax
0x8AC726: mov     dword ptr [esp+0F0h+var_C0], eax
0x8AC72A: mov     edi, [esi+84h]
0x8AC730: dec     edi
0x8AC731: mov     dword ptr [esp+0F0h+var_C0+4], eax
0x8AC735: js      short loc_8AC761
0x8AC737: jmp     short loc_8AC740
0x8AC739: align 10h
0x8AC740: mov     ecx, [esi+80h]
0x8AC746: mov     ecx, [ecx+edi*4]
0x8AC749: test    ecx, ecx
0x8AC74B: jz      short loc_8AC75E
0x8AC74D: mov     eax, [esi+74h]
0x8AC750: mov     edx, [ecx]
0x8AC752: add     eax, ebx
0x8AC754: push    eax
0x8AC755: mov     eax, dword ptr [esp+0F4h+var_C0]
0x8AC759: push    eax
0x8AC75A: push    esi
0x8AC75B: call    dword ptr [edx+10h]
0x8AC75E: dec     edi
0x8AC75F: jns     short loc_8AC740
0x8AC761: mov     ecx, [esi+74h]
0x8AC764: mov     eax, [ecx+ebx+28h]
0x8AC768: mov     dl, [eax+18h]
0x8AC76B: add     ecx, ebx
0x8AC76D: cmp     dl, 1
0x8AC770: jnz     loc_8ACA98
0x8AC776: mov     edi, [eax+10h]
0x8AC779: add     edi, eax
0x8AC77B: jz      loc_8ACA98
0x8AC781: mov     al, [edi+92h]
0x8AC787: test    al, al
0x8AC789: jnz     loc_8ACA98
0x8AC78F: movaps  xmm0, xmmword ptr [ecx]
0x8AC792: mov     edx, [esi+74h]
0x8AC795: movaps  [esp+0F0h+var_B0], xmm0
0x8AC79A: mov     ecx, [ebx+edx+1Ch]
0x8AC79E: movaps  xmm4, xmmword ptr [esi+10h]
0x8AC7A2: lea     eax, [ebx+edx]
0x8AC7A5: mov     dword ptr [esp+0F0h+var_B0+0Ch], ecx
0x8AC7A9: movaps  xmm2, xmmword ptr [eax+10h]
0x8AC7AD: movaps  xmm3, [esp+0F0h+var_B0]
0x8AC7B2: movaps  [esp+0F0h+anonymous_0], xmm2
0x8AC7B7: mov     [esp+0F0h+var_80], edi
0x8AC7BB: mov     eax, [edi+50h]
0x8AC7BE: movaps  xmm1, xmmword ptr [eax+60h]
0x8AC7C2: movaps  xmm5, xmmword ptr [eax+0D0h]
0x8AC7C9: movaps  xmm0, xmm3
0x8AC7CC: subps   xmm0, xmm1
0x8AC7CF: movaps  xmm1, xmmword ptr [eax+0E0h]
0x8AC7D6: movaps  xmm6, xmm0
0x8AC7D9: shufps  xmm6, xmm0, 0C9h ; 'É'
0x8AC7DD: movaps  xmm7, xmm1
0x8AC7E0: shufps  xmm7, xmm1, 0D2h ; 'Ò'
0x8AC7E4: mulps   xmm7, xmm6
0x8AC7E7: movaps  xmm6, xmm0
0x8AC7EA: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8AC7EE: movaps  xmm0, xmm1
0x8AC7F1: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8AC7F5: mov     ebx, [ebp+arg_0]
0x8AC7F8: mulps   xmm0, xmm6
0x8AC7FB: subps   xmm0, xmm7
0x8AC7FE: addps   xmm0, xmm5
0x8AC801: subps   xmm0, xmm4
0x8AC804: mulps   xmm0, xmm2
0x8AC807: movaps  xmm1, xmm0
0x8AC80A: shufps  xmm1, xmm0, 55h ; 'U'
0x8AC80E: movaps  xmm4, xmm0
0x8AC811: addss   xmm1, xmm0
0x8AC815: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8AC819: lea     edx, [esp+0F0h+var_C4]
0x8AC81D: addss   xmm4, xmm1
0x8AC821: movss   dword ptr [edx], xmm4
0x8AC825: fld     [esp+0F0h+var_C4]
0x8AC829: fmul    dword ptr ds:0A97BDCh
0x8AC82F: mov     eax, [esp+0F0h+var_C4]
0x8AC833: mov     [esp+0F0h+var_88], eax
0x8AC837: fst     [esp+0F0h+var_D8]
0x8AC83B: fld     dword ptr [esp+0F0h+var_B0+0Ch]
0x8AC83F: fcomp   dword ptr ds:0A2FAA8h
0x8AC845: fnstsw  ax
0x8AC847: test    ah, 5
0x8AC84A: jp      short loc_8AC85F
0x8AC84C: fld     dword ptr [esp+0F0h+var_B0+0Ch]
0x8AC850: fmul    dword ptr [ebx+0Ch]
0x8AC853: fmul    dword ptr ds:0A47E6Ch
0x8AC859: faddp   st(1), st
0x8AC85B: fst     [esp+0F0h+var_D8]
0x8AC85F: fcomp   dword ptr ds:0A2FAA8h
0x8AC865: xorps   xmm1, xmm1
0x8AC868: movaps  [esp+0F0h+anonymous_1], xmm3
0x8AC870: movaps  xmmword ptr [esp+0F0h+var_7C+0Ch], xmm1
0x8AC878: fnstsw  ax
0x8AC87A: test    ah, 5
0x8AC87D: jp      loc_8AC99E
0x8AC883: mov     ecx, [edi+50h]
0x8AC886: mov     edx, [ecx]
0x8AC888: lea     eax, [esp+0F0h+var_30]
0x8AC88F: push    eax
0x8AC890: call    dword ptr [edx+3Ch]
0x8AC893: mov     ecx, [edi+50h]
0x8AC896: movaps  xmm1, xmmword ptr [ecx+60h]
0x8AC89A: movaps  xmm0, [esp+0F0h+var_B0]
0x8AC89F: subps   xmm0, xmm1
0x8AC8A2: movaps  xmm1, [esp+0F0h+anonymous_0]
0x8AC8A7: movaps  xmm2, xmm1
0x8AC8AA: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8AC8AE: movaps  xmm3, xmm0
0x8AC8B1: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8AC8B5: mulps   xmm3, xmm2
0x8AC8B8: movaps  xmm2, xmm1
0x8AC8BB: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8AC8BF: lea     edx, [esp+0F0h+var_50]
0x8AC8C6: movaps  xmm1, xmm0
0x8AC8C9: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8AC8CD: push    edx
0x8AC8CE: lea     eax, [esp+0F4h+var_30]
0x8AC8D5: mulps   xmm1, xmm2
0x8AC8D8: subps   xmm1, xmm3
0x8AC8DB: push    eax
0x8AC8DC: lea     ecx, [esp+0F8h+var_40]
0x8AC8E3: movaps  [esp+0F8h+var_50], xmm1
0x8AC8EB: call    sub_88FE00
0x8AC8F0: movaps  xmm1, [esp+0F0h+var_50]
0x8AC8F8: movaps  xmm0, xmmword ptr [esp+0F0h+var_40]
0x8AC900: mulps   xmm0, xmm1
0x8AC903: movaps  xmm1, xmm0
0x8AC906: shufps  xmm1, xmm0, 55h ; 'U'
0x8AC90A: movaps  xmm2, xmm0
0x8AC90D: addss   xmm1, xmm0
0x8AC911: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8AC915: lea     ecx, [esp+0F0h+var_CC]
0x8AC919: addss   xmm2, xmm1
0x8AC91D: movss   dword ptr [ecx], xmm2
0x8AC921: fld     [esp+0F0h+var_CC]
0x8AC925: mov     edx, [esp+0F0h+var_CC]
0x8AC929: mov     [esp+0F0h+var_84], edx
0x8AC92D: mov     eax, [edi+50h]
0x8AC930: fadd    dword ptr [eax+0C0h]
0x8AC936: fstp    [esp+0F0h+var_84]
0x8AC93A: fld     [esp+0F0h+var_D8]
0x8AC93E: fdiv    [esp+0F0h+var_84]
0x8AC942: fstp    [esp+0F0h+var_90]
0x8AC946: fld     dword ptr [esi+6Ch]
0x8AC949: fmul    dword ptr [ebx+8]
0x8AC94C: fchs
0x8AC94E: fld     [esp+0F0h+var_90]
0x8AC952: fcomp   st(1)
0x8AC954: fnstsw  ax
0x8AC956: test    ah, 5
0x8AC959: jp      short loc_8AC975
0x8AC95B: fstp    [esp+0F0h+var_90]
0x8AC95F: jmp     short loc_8AC977
0x8AC961: shl     ecx, 4
0x8AC964: mov     edx, [ecx+eax+8]
0x8AC968: mov     eax, [ecx+eax+0Ch]
0x8AC96C: mov     dword ptr [esp+0F0h+var_C0], edx
0x8AC970: jmp     loc_8AC72A
0x8AC975: fstp    st
0x8AC977: mov     ecx, [esp+0F0h+var_90]
0x8AC97B: movaps  xmm2, [esp+0F0h+anonymous_0]
0x8AC980: mov     dword ptr [esp+0F0h+var_C0+8], ecx
0x8AC984: movss   xmm0, dword ptr [esp+0F0h+var_C0+8]
0x8AC98A: movaps  xmm1, xmm0
0x8AC98D: shufps  xmm1, xmm0, 0
0x8AC991: mulps   xmm1, xmm2
0x8AC994: movaps  xmmword ptr [esp+0F0h+var_7C+0Ch], xmm1
0x8AC99C: jmp     short loc_8AC9B3
0x8AC99E: mov     [esp+0F0h+var_90], 0
0x8AC9A6: mov     edx, [edi+50h]
0x8AC9A9: mov     eax, [edx+0C0h]
0x8AC9AF: mov     [esp+0F0h+var_84], eax
0x8AC9B3: mov     ecx, [ebx+8]
0x8AC9B6: mov     edx, [ebp+arg_4]
0x8AC9B9: movaps  xmm3, xmmword ptr [edx]
0x8AC9BC: mov     dword ptr [esp+0F0h+var_C0+0Ch], ecx
0x8AC9C0: movss   xmm0, dword ptr [esp+0F0h+var_C0+0Ch]
0x8AC9C6: movaps  xmm4, xmm0
0x8AC9C9: shufps  xmm4, xmm0, 0
0x8AC9CD: movaps  xmm0, xmm4
0x8AC9D0: mulps   xmm0, xmm3
0x8AC9D3: mulps   xmm0, xmm2
0x8AC9D6: movaps  xmm3, xmm0
0x8AC9D9: shufps  xmm3, xmm0, 55h ; 'U'
0x8AC9DD: movaps  xmm4, xmm0
0x8AC9E0: lea     eax, [esp+0F0h+var_D4]
0x8AC9E4: addss   xmm3, xmm0
0x8AC9E8: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8AC9EC: addss   xmm4, xmm3
0x8AC9F0: movss   dword ptr [eax], xmm4
0x8AC9F4: fld     [esp+0F0h+var_D4]
0x8AC9F8: fld     [esp+0F0h+var_88]
0x8AC9FC: fcomp   dword ptr ds:0A2FAA8h
0x8ACA02: fnstsw  ax
0x8ACA04: test    ah, 5
0x8ACA07: jp      short loc_8ACA13
0x8ACA09: fstp    st
0x8ACA0B: fld     [esp+0F0h+var_D4]
0x8ACA0F: fsub    [esp+0F0h+var_88]
0x8ACA13: fcom    dword ptr ds:0A97BD8h
0x8ACA19: fnstsw  ax
0x8ACA1B: test    ah, 5
0x8ACA1E: jp      short loc_8ACA44
0x8ACA20: fmul    dword ptr [esi+70h]
0x8ACA23: fstp    [esp+0F0h+var_D8]
0x8ACA27: movss   xmm0, [esp+0F0h+var_D8]
0x8ACA2D: movaps  xmm3, xmm0
0x8ACA30: shufps  xmm3, xmm0, 0
0x8ACA34: mulps   xmm3, xmm2
0x8ACA37: addps   xmm1, xmm3
0x8ACA3A: movaps  xmmword ptr [esp+0F0h+var_7C+0Ch], xmm1
0x8ACA42: jmp     short loc_8ACA46
0x8ACA44: fstp    st
0x8ACA46: mov     ebx, [esi+84h]
0x8ACA4C: dec     ebx
0x8ACA4D: js      short loc_8ACA73
0x8ACA4F: nop
0x8ACA50: mov     ecx, [esi+80h]
0x8ACA56: mov     ecx, [ecx+ebx*4]
0x8ACA59: test    ecx, ecx
0x8ACA5B: jz      short loc_8ACA70
0x8ACA5D: mov     edx, [ecx]
0x8ACA5F: lea     eax, [esp+0F0h+var_7C+0Ch]
0x8ACA66: push    eax
0x8ACA67: lea     eax, [esp+0F4h+var_B0]
0x8ACA6B: push    eax
0x8ACA6C: push    esi
0x8ACA6D: call    dword ptr [edx+14h]
0x8ACA70: dec     ebx
0x8ACA71: jns     short loc_8ACA50
0x8ACA73: mov     ecx, edi
0x8ACA75: call    sub_8A6410
0x8ACA7A: mov     edi, [edi+50h]
0x8ACA7D: mov     edx, [edi]
0x8ACA7F: lea     eax, [esp+0F0h+anonymous_1]
0x8ACA86: push    eax
0x8ACA87: lea     ecx, [esp+0F4h+var_7C+0Ch]
0x8ACA8E: push    ecx
0x8ACA8F: mov     ecx, edi
0x8ACA91: call    dword ptr [edx+60h]
0x8ACA94: mov     ebx, [esp+0F0h+var_C8]
0x8ACA98: mov     eax, [esp+0F0h+var_D0]
0x8ACA9C: mov     ecx, [esi+78h]
0x8ACA9F: inc     eax
0x8ACAA0: add     ebx, 30h ; '0'
0x8ACAA3: cmp     eax, ecx
0x8ACAA5: mov     [esp+0F0h+var_D0], eax
0x8ACAA9: mov     [esp+0F0h+var_C8], ebx
0x8ACAAD: jl      loc_8AC6D0
0x8ACAB3: pop     edi
0x8ACAB4: pop     esi
0x8ACAB5: pop     ebx
0x8ACAB6: mov     esp, ebp
0x8ACAB8: pop     ebp
0x8ACAB9: retn    8
