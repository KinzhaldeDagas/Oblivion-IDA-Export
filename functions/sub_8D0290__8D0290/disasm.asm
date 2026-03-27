0x8D0290: push    ebp
0x8D0291: mov     ebp, esp
0x8D0293: and     esp, 0FFFFFFF0h
0x8D0296: sub     esp, 74h
0x8D0299: mov     eax, [ebp+arg_0]
0x8D029C: movaps  xmm6, xmmword ptr [eax+10h]
0x8D02A0: movaps  xmm3, xmmword ptr [eax]
0x8D02A3: push    ebx
0x8D02A4: push    esi
0x8D02A5: push    edi
0x8D02A6: mov     edi, [ebp+arg_8]
0x8D02A9: movaps  xmm5, xmmword ptr [edi]
0x8D02AC: movaps  xmm2, xmmword ptr [edi+10h]
0x8D02B0: movaps  xmm1, xmm6
0x8D02B3: subps   xmm1, xmm3
0x8D02B6: subps   xmm2, xmm5
0x8D02B9: movaps  xmm0, xmm1
0x8D02BC: mulps   xmm0, xmm2
0x8D02BF: movaps  xmm4, xmm0
0x8D02C2: shufps  xmm4, xmm0, 55h ; 'U'
0x8D02C6: movaps  xmm7, xmm0
0x8D02C9: lea     eax, [esp+80h+var_50]
0x8D02CD: addss   xmm4, xmm0
0x8D02D1: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D02D5: addss   xmm7, xmm4
0x8D02D9: movss   dword ptr [eax], xmm7
0x8D02DD: fld     [esp+80h+var_50]
0x8D02E1: fcomp   dword ptr ds:0A2FAA8h
0x8D02E7: mov     ecx, [esp+80h+var_50]
0x8D02EB: movaps  [esp+80h+var_40], xmm1
0x8D02F0: mov     [esp+80h+var_64], ecx
0x8D02F4: fnstsw  ax
0x8D02F6: test    ah, 5
0x8D02F9: jp      short loc_8D031E
0x8D02FB: fld     [esp+80h+var_50]
0x8D02FF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8D0306: fchs
0x8D0308: xorps   xmm1, xmm0
0x8D030B: fstp    [esp+80h+var_64]
0x8D030F: movaps  [esp+80h+var_40], xmm1
0x8D0314: movaps  xmm4, xmm6
0x8D0317: movaps  [esp+80h+var_10], xmm3
0x8D031C: jmp     short loc_8D0326
0x8D031E: movaps  xmm4, xmm3
0x8D0321: movaps  [esp+80h+var_10], xmm6
0x8D0326: movaps  xmm3, xmm5
0x8D0329: subps   xmm3, xmm4
0x8D032C: movaps  xmm0, xmm1
0x8D032F: mulps   xmm0, xmm3
0x8D0332: movaps  xmm6, xmm0
0x8D0335: shufps  xmm6, xmm0, 55h ; 'U'
0x8D0339: addss   xmm6, xmm0
0x8D033D: movaps  xmm7, xmm0
0x8D0340: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D0344: addss   xmm7, xmm6
0x8D0348: movaps  xmm0, xmm2
0x8D034B: mulps   xmm0, xmm3
0x8D034E: movaps  xmm3, xmm0
0x8D0351: shufps  xmm3, xmm0, 55h ; 'U'
0x8D0355: addss   xmm3, xmm0
0x8D0359: movaps  xmm6, xmm0
0x8D035C: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D0360: addss   xmm6, xmm3
0x8D0364: lea     eax, [esp+80h+var_4C]
0x8D0368: movss   dword ptr [eax], xmm6
0x8D036C: movaps  xmm0, xmm1
0x8D036F: mulps   xmm0, xmm1
0x8D0372: movaps  xmm3, xmm0
0x8D0375: shufps  xmm3, xmm0, 55h ; 'U'
0x8D0379: addss   xmm3, xmm0
0x8D037D: movaps  xmm6, xmm0
0x8D0380: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D0384: addss   xmm6, xmm3
0x8D0388: lea     edx, [esp+80h+var_48]
0x8D038C: lea     ecx, [esp+80h+var_58]
0x8D0390: movss   dword ptr [ecx], xmm6
0x8D0394: movaps  xmm0, xmm2
0x8D0397: mulps   xmm0, xmm2
0x8D039A: movss   dword ptr [edx], xmm7
0x8D039E: movaps  xmm3, xmm0
0x8D03A1: shufps  xmm3, xmm0, 55h ; 'U'
0x8D03A5: movaps  xmm6, xmm0
0x8D03A8: addss   xmm3, xmm0
0x8D03AC: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D03B0: lea     edx, [esp+80h+var_5C]
0x8D03B4: addss   xmm6, xmm3
0x8D03B8: movss   dword ptr [edx], xmm6
0x8D03BC: fld     [esp+80h+var_5C]
0x8D03C0: fmul    [esp+80h+var_58]
0x8D03C4: xor     ebx, ebx
0x8D03C6: movaps  [esp+80h+var_20], xmm4
0x8D03CB: fstp    [esp+80h+var_50]
0x8D03CF: fld     [esp+80h+var_64]
0x8D03D3: fmul    [esp+80h+var_64]
0x8D03D7: fstp    [esp+80h+var_68]
0x8D03DB: fld     [esp+80h+var_50]
0x8D03DF: fsub    [esp+80h+var_68]
0x8D03E3: fabs
0x8D03E5: fstp    [esp+80h+var_54]
0x8D03E9: fld     [esp+80h+var_5C]
0x8D03ED: fmul    [esp+80h+var_48]
0x8D03F1: fld     [esp+80h+var_4C]
0x8D03F5: fmul    [esp+80h+var_64]
0x8D03F9: fsubp   st(1), st
0x8D03FB: fst     [esp+80h+var_60]
0x8D03FF: fmul    [esp+80h+var_54]
0x8D0403: fld     [esp+80h+var_54]
0x8D0407: fmul    [esp+80h+var_54]
0x8D040B: fcompp
0x8D040D: fnstsw  ax
0x8D040F: test    ah, 41h
0x8D0412: jnp     short loc_8D045E
0x8D0414: fld     [esp+80h+var_60]
0x8D0418: fcomp   dword ptr ds:0A2FAA8h
0x8D041E: fnstsw  ax
0x8D0420: test    ah, 41h
0x8D0423: jp      short loc_8D0435
0x8D0425: fld     dword ptr ds:0A2FAA8h
0x8D042B: mov     [esp+80h+var_6C], 2
0x8D0433: jmp     short loc_8D046C
0x8D0435: fld     [esp+80h+var_50]
0x8D0439: fabs
0x8D043B: fadd    [esp+80h+var_68]
0x8D043F: fmul    dword ptr ds:0A99EFCh
0x8D0445: fcomp   [esp+80h+var_54]
0x8D0449: fnstsw  ax
0x8D044B: test    ah, 5
0x8D044E: jp      short loc_8D045E
0x8D0450: fld     [esp+80h+var_60]
0x8D0454: mov     [esp+80h+var_6C], ebx
0x8D0458: fdiv    [esp+80h+var_54]
0x8D045C: jmp     short loc_8D046C
0x8D045E: fld     dword ptr ds:0A2F948h
0x8D0464: mov     [esp+80h+var_6C], 1
0x8D046C: fld     [esp+80h+var_64]
0x8D0470: fmul    st, st(1)
0x8D0472: fsub    [esp+80h+var_4C]
0x8D0476: fst     [esp+80h+var_68]
0x8D047A: fcomp   [esp+80h+var_5C]
0x8D047E: fnstsw  ax
0x8D0480: test    ah, 1
0x8D0483: jnz     short loc_8D0497
0x8D0485: mov     [esp+80h+var_68], 3F800000h
0x8D048D: mov     [esp+80h+var_6C], 4
0x8D0495: jmp     short loc_8D04B8
0x8D0497: fld     [esp+80h+var_68]
0x8D049B: fcomp   dword ptr ds:0A2FAA8h
0x8D04A1: fnstsw  ax
0x8D04A3: test    ah, 41h
0x8D04A6: jp      short loc_8D0516
0x8D04A8: mov     [esp+80h+var_68], 0
0x8D04B0: mov     [esp+80h+var_6C], 8
0x8D04B8: fstp    st
0x8D04BA: fld     [esp+80h+var_68]
0x8D04BE: fmul    [esp+80h+var_64]
0x8D04C2: fadd    [esp+80h+var_48]
0x8D04C6: fst     [esp+80h+var_60]
0x8D04CA: fcomp   dword ptr ds:0A2FAA8h
0x8D04D0: fnstsw  ax
0x8D04D2: test    ah, 41h
0x8D04D5: jp      short loc_8D04EA
0x8D04D7: mov     eax, [esp+80h+var_6C]
0x8D04DB: fld     dword ptr ds:0A2FAA8h
0x8D04E1: or      eax, 2
0x8D04E4: mov     [esp+80h+var_6C], eax
0x8D04E8: jmp     short loc_8D0522
0x8D04EA: fld     [esp+80h+var_60]
0x8D04EE: fcomp   [esp+80h+var_58]
0x8D04F2: fnstsw  ax
0x8D04F4: test    ah, 1
0x8D04F7: jnz     short loc_8D050C
0x8D04F9: mov     eax, [esp+80h+var_6C]
0x8D04FD: fld     dword ptr ds:0A2F948h
0x8D0503: or      eax, 1
0x8D0506: mov     [esp+80h+var_6C], eax
0x8D050A: jmp     short loc_8D0522
0x8D050C: fld     [esp+80h+var_60]
0x8D0510: fdiv    [esp+80h+var_58]
0x8D0514: jmp     short loc_8D0522
0x8D0516: fld     [esp+80h+var_68]
0x8D051A: fdiv    [esp+80h+var_5C]
0x8D051E: fstp    [esp+80h+var_68]
0x8D0522: mov     eax, [esp+80h+var_68]
0x8D0526: fstp    [esp+80h+var_44]
0x8D052A: movss   xmm0, [esp+80h+var_44]
0x8D0530: fld     [ebp+arg_4]
0x8D0533: fadd    [ebp+arg_C]
0x8D0536: mov     edx, [ebp+arg_10]
0x8D0539: movaps  xmm3, xmm0
0x8D053C: shufps  xmm3, xmm0, 0
0x8D0540: mulps   xmm3, xmm1
0x8D0543: addps   xmm4, xmm3
0x8D0546: mov     [esp+80h+var_44], eax
0x8D054A: movss   xmm0, [esp+80h+var_44]
0x8D0550: fst     [esp+80h+var_44]
0x8D0554: movaps  xmm3, xmm0
0x8D0557: fld     st
0x8D0559: fadd    dword ptr [edx+1Ch]
0x8D055C: shufps  xmm3, xmm0, 0
0x8D0560: mulps   xmm3, xmm2
0x8D0563: addps   xmm5, xmm3
0x8D0566: movaps  xmm3, xmm4
0x8D0569: subps   xmm3, xmm5
0x8D056C: movaps  xmm0, xmm3
0x8D056F: mulps   xmm0, xmm3
0x8D0572: movaps  xmm5, xmm0
0x8D0575: shufps  xmm5, xmm0, 55h ; 'U'
0x8D0579: movaps  xmm6, xmm0
0x8D057C: addss   xmm5, xmm0
0x8D0580: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D0584: lea     ecx, [esp+80h+var_60]
0x8D0588: addss   xmm6, xmm5
0x8D058C: movss   dword ptr [ecx], xmm6
0x8D0590: fld     [esp+80h+var_60]
0x8D0594: fsqrt
0x8D0596: movaps  xmmword ptr [edx+10h], xmm3
0x8D059A: fdivr   dword ptr ds:0A2F948h
0x8D05A0: fstp    [esp+80h+var_68]
0x8D05A4: fld     st
0x8D05A6: fmul    st, st(1)
0x8D05A8: fld     [esp+80h+var_60]
0x8D05AC: fcompp
0x8D05AE: fnstsw  ax
0x8D05B0: fstp    st
0x8D05B2: test    ah, 5
0x8D05B5: fld     [esp+80h+var_60]
0x8D05B9: jp      loc_8D09C7
0x8D05BF: fcomp   dword ptr ds:0A99EF4h
0x8D05C5: fnstsw  ax
0x8D05C7: test    ah, 5
0x8D05CA: jp      loc_8D06AD
0x8D05D0: fld     dword ptr ds:0A2FAA8h
0x8D05D6: xor     ecx, ecx
0x8D05D8: fld     dword ptr [esp+80h+var_40]
0x8D05DC: mov     esi, 1
0x8D05E1: fabs
0x8D05E3: mov     edi, 2
0x8D05E8: fld     dword ptr [esp+80h+var_40+4]
0x8D05EC: fabs
0x8D05EE: fst     [esp+80h+var_60]
0x8D05F2: fld     dword ptr [esp+80h+var_40+8]
0x8D05F6: fabs
0x8D05F8: fstp    [esp+80h+var_68]
0x8D05FC: fcomp   st(1)
0x8D05FE: fnstsw  ax
0x8D0600: test    ah, 5
0x8D0603: jp      short loc_8D0612
0x8D0605: fstp    st
0x8D0607: xor     esi, esi
0x8D0609: fld     [esp+80h+var_60]
0x8D060D: mov     ecx, 1
0x8D0612: fld     [esp+80h+var_68]
0x8D0616: fcomp   st(1)
0x8D0618: fnstsw  ax
0x8D061A: fstp    st
0x8D061C: test    ah, 5
0x8D061F: jp      short loc_8D0628
0x8D0621: mov     edi, ecx
0x8D0623: mov     ecx, 2
0x8D0628: mov     eax, dword ptr [esp+edi*4+80h+var_40]
0x8D062C: fld     dword ptr [esp+esi*4+80h+var_40]
0x8D0630: mov     [edx+ecx*4+10h], ebx
0x8D0634: fchs
0x8D0636: mov     [edx+1Ch], ebx
0x8D0639: mov     [edx+esi*4+10h], eax
0x8D063D: fstp    dword ptr [edx+edi*4+10h]
0x8D0641: movaps  xmm3, xmmword ptr [edx+10h]
0x8D0645: mov     edi, [ebp+arg_8]
0x8D0648: movaps  xmm0, xmm3
0x8D064B: mulps   xmm0, xmm3
0x8D064E: movaps  xmm5, xmm0
0x8D0651: shufps  xmm5, xmm0, 55h ; 'U'
0x8D0655: addss   xmm5, xmm0
0x8D0659: movaps  xmm6, xmm0
0x8D065C: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D0660: movaps  xmm0, xmm6
0x8D0663: addss   xmm0, xmm5
0x8D0667: movaps  [esp+80h+var_30], xmm0
0x8D066C: rsqrtss xmm5, xmm0
0x8D0670: movss   dword ptr [esp+80h+var_30], xmm5
0x8D0676: movaps  xmm5, [esp+80h+var_30]
0x8D067B: mulss   xmm0, xmm5
0x8D067F: mulss   xmm0, xmm5
0x8D0683: mov     [esp+80h+var_60], 40400000h
0x8D068B: movss   xmm6, [esp+80h+var_60]
0x8D0691: subss   xmm6, xmm0
0x8D0695: mov     [esp+80h+var_60], 3F000000h
0x8D069D: movss   xmm0, [esp+80h+var_60]
0x8D06A3: mulss   xmm0, xmm5
0x8D06A7: mulss   xmm0, xmm6
0x8D06AB: jmp     short loc_8D06C7
0x8D06AD: fld     [esp+80h+var_60]
0x8D06B1: mov     ecx, [esp+80h+var_68]
0x8D06B5: fmul    [esp+80h+var_68]
0x8D06B9: movaps  xmm3, xmmword ptr [edx+10h]
0x8D06BD: mov     [esp+80h+var_60], ecx
0x8D06C1: movss   xmm0, [esp+80h+var_60]
0x8D06C7: fld     [ebp+arg_C]
0x8D06CA: movaps  xmm5, xmm0
0x8D06CD: fsub    st, st(1)
0x8D06CF: shufps  xmm5, xmm0, 0
0x8D06D3: mulps   xmm5, xmm3
0x8D06D6: movaps  xmmword ptr [edx+10h], xmm5
0x8D06DA: movaps  xmm3, xmmword ptr [edx+10h]
0x8D06DE: fstp    [esp+80h+var_60]
0x8D06E2: movss   xmm0, [esp+80h+var_60]
0x8D06E8: fsub    st, st(1)
0x8D06EA: movaps  xmm5, xmm0
0x8D06ED: shufps  xmm5, xmm0, 0
0x8D06F1: mulps   xmm5, xmm3
0x8D06F4: fstp    dword ptr [edx+1Ch]
0x8D06F7: addps   xmm4, xmm5
0x8D06FA: movaps  xmmword ptr [edx], xmm4
0x8D06FD: fstp    st
0x8D06FF: fld     [esp+80h+var_50]
0x8D0703: fmul    dword ptr ds:0A3D9A4h
0x8D0709: fcomp   [esp+80h+var_54]
0x8D070D: fnstsw  ax
0x8D070F: test    ah, 5
0x8D0712: jnp     loc_8D09FF
0x8D0718: fld     dword ptr ds:0A2F948h
0x8D071E: mov     eax, dword ptr [esp+80h+var_20]
0x8D0722: fdiv    [esp+80h+var_50]
0x8D0726: mov     dword ptr [esp+80h+var_40], eax
0x8D072A: mov     eax, dword ptr [esp+80h+var_20+4]
0x8D072E: movaps  xmm5, xmmword ptr ds:0A965C0h
0x8D0735: mov     dword ptr [esp+80h+var_40+4], eax
0x8D0739: mov     eax, dword ptr [esp+80h+var_20+8]
0x8D073D: mov     dword ptr [esp+80h+var_40+8], eax
0x8D0741: mov     eax, dword ptr [esp+80h+var_20+0Ch]
0x8D0745: mov     dword ptr [esp+80h+var_40+0Ch], eax
0x8D0749: movaps  xmm3, [esp+80h+var_40]
0x8D074E: mov     eax, edi
0x8D0750: mov     esi, [eax]
0x8D0752: mov     dword ptr [esp+80h+var_30], esi
0x8D0756: mov     esi, [eax+4]
0x8D0759: mov     dword ptr [esp+80h+var_30+4], esi
0x8D075D: mov     esi, [eax+8]
0x8D0760: mov     eax, [eax+0Ch]
0x8D0763: mov     dword ptr [esp+80h+var_30+8], esi
0x8D0767: mov     dword ptr [esp+80h+var_30+0Ch], eax
0x8D076B: movaps  xmm0, [esp+80h+var_30]
0x8D0770: lea     ecx, [edx+20h]
0x8D0773: xor     esi, esi
0x8D0775: mov     eax, 0Ah
0x8D077A: fld     [esp+80h+var_5C]
0x8D077E: fmul    st, st(1)
0x8D0780: fstp    [esp+80h+var_50]
0x8D0784: fmul    [esp+80h+var_58]
0x8D0788: fld     [esp+80h+var_4C]
0x8D078C: fchs
0x8D078E: fld     [esp+80h+var_48]
0x8D0792: mov     ebx, [esp+80h+var_6C]
0x8D0796: test    ebx, eax
0x8D0798: jnz     loc_8D098F
0x8D079E: fld     st(1)
0x8D07A0: fcomp   dword ptr ds:0A2FAA8h
0x8D07A6: fnstsw  ax
0x8D07A8: test    ah, 41h
0x8D07AB: jnz     loc_8D0841
0x8D07B1: fld     st(1)
0x8D07B3: fcomp   [esp+80h+var_5C]
0x8D07B7: fnstsw  ax
0x8D07B9: test    ah, 41h
0x8D07BC: jz      loc_8D098F
0x8D07C2: fcom    dword ptr ds:0A2FAA8h
0x8D07C8: fnstsw  ax
0x8D07CA: test    ah, 41h
0x8D07CD: jnz     short loc_8D0824
0x8D07CF: fcom    [esp+80h+var_58]
0x8D07D3: fnstsw  ax
0x8D07D5: test    ah, 41h
0x8D07D8: jz      loc_8D098F
0x8D07DE: fld     st(1)
0x8D07E0: fmul    st, st(2)
0x8D07E2: fmul    st, st(3)
0x8D07E4: fld     st(1)
0x8D07E6: fmul    st, st(2)
0x8D07E8: fmul    [esp+80h+var_50]
0x8D07EC: fcompp
0x8D07EE: fnstsw  ax
0x8D07F0: test    ah, 5
0x8D07F3: jp      short loc_8D0807
0x8D07F5: fld     [esp+80h+var_50]
0x8D07F9: fmul    st, st(1)
0x8D07FB: fstp    [esp+80h+var_4C]
0x8D07FF: movss   xmm4, [esp+80h+var_4C]
0x8D0805: jmp     short loc_8D086D
0x8D0807: fld     st(1)
0x8D0809: fmul    st, st(3)
0x8D080B: fstp    [esp+80h+var_4C]
0x8D080F: movss   xmm4, [esp+80h+var_4C]
0x8D0815: movaps  xmm6, xmm4
0x8D0818: shufps  xmm6, xmm4, 0
0x8D081C: mulps   xmm6, xmm2
0x8D081F: addps   xmm0, xmm6
0x8D0822: jmp     short loc_8D087A
0x8D0824: fld     st(1)
0x8D0826: fmul    st, st(3)
0x8D0828: fstp    [esp+80h+var_4C]
0x8D082C: movss   xmm4, [esp+80h+var_4C]
0x8D0832: movaps  xmm6, xmm4
0x8D0835: shufps  xmm6, xmm4, 0
0x8D0839: mulps   xmm6, xmm2
0x8D083C: addps   xmm0, xmm6
0x8D083F: jmp     short loc_8D087A
0x8D0841: fcom    dword ptr ds:0A2FAA8h
0x8D0847: fnstsw  ax
0x8D0849: test    ah, 41h
0x8D084C: jnz     short loc_8D087A
0x8D084E: fcom    [esp+80h+var_58]
0x8D0852: fnstsw  ax
0x8D0854: test    ah, 41h
0x8D0857: jz      loc_8D098F
0x8D085D: fld     [esp+80h+var_50]
0x8D0861: fmul    st, st(1)
0x8D0863: fstp    [esp+80h+var_4C]
0x8D0867: movss   xmm4, [esp+80h+var_4C]
0x8D086D: movaps  xmm6, xmm4
0x8D0870: shufps  xmm6, xmm4, 0
0x8D0874: mulps   xmm6, xmm1
0x8D0877: addps   xmm3, xmm6
0x8D087A: fld     [esp+80h+var_44]
0x8D087E: movaps  xmm4, xmm3
0x8D0881: fld     st
0x8D0883: subps   xmm4, xmm0
0x8D0886: fadd    dword ptr [ecx+1Ch]
0x8D0889: movaps  xmm0, xmm4
0x8D088C: mulps   xmm0, xmm4
0x8D088F: movaps  xmm6, xmm0
0x8D0892: fld     st
0x8D0894: shufps  xmm6, xmm0, 55h ; 'U'
0x8D0898: movaps  xmm7, xmm0
0x8D089B: fmul    st, st(1)
0x8D089D: lea     eax, [esp+80h+var_48]
0x8D08A1: addss   xmm6, xmm0
0x8D08A5: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D08A9: addss   xmm7, xmm6
0x8D08AD: movss   dword ptr [eax], xmm7
0x8D08B1: fld     [esp+80h+var_48]
0x8D08B5: fcompp
0x8D08B7: fnstsw  ax
0x8D08B9: fstp    st
0x8D08BB: test    ah, 5
0x8D08BE: jp      loc_8D098D
0x8D08C4: fld     [esp+80h+var_48]
0x8D08C8: movaps  xmmword ptr [ecx+10h], xmm4
0x8D08CC: fsqrt
0x8D08CE: fld     [esp+80h+var_48]
0x8D08D2: fcomp   dword ptr ds:0A99EF4h
0x8D08D8: fnstsw  ax
0x8D08DA: test    ah, 41h
0x8D08DD: jnz     short loc_8D0956
0x8D08DF: movaps  xmm4, xmmword ptr [ecx+10h]
0x8D08E3: movaps  xmm0, xmm4
0x8D08E6: mulps   xmm0, xmm4
0x8D08E9: movaps  xmm5, xmm0
0x8D08EC: shufps  xmm5, xmm0, 55h ; 'U'
0x8D08F0: addss   xmm5, xmm0
0x8D08F4: movaps  xmm6, xmm0
0x8D08F7: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8D08FB: movaps  xmm0, xmm6
0x8D08FE: addss   xmm0, xmm5
0x8D0902: movaps  [esp+80h+var_30], xmm0
0x8D0907: rsqrtss xmm5, xmm0
0x8D090B: movss   dword ptr [esp+80h+var_30], xmm5
0x8D0911: movaps  xmm5, [esp+80h+var_30]
0x8D0916: mulss   xmm0, xmm5
0x8D091A: mulss   xmm0, xmm5
0x8D091E: mov     [esp+80h+var_54], 40400000h
0x8D0926: movss   xmm6, [esp+80h+var_54]
0x8D092C: subss   xmm6, xmm0
0x8D0930: mov     [esp+80h+var_60], 3F000000h
0x8D0938: movss   xmm0, [esp+80h+var_60]
0x8D093E: mulss   xmm0, xmm5
0x8D0942: mulss   xmm0, xmm6
0x8D0946: movaps  xmm5, xmm0
0x8D0949: shufps  xmm5, xmm0, 0
0x8D094D: mulps   xmm5, xmm4
0x8D0950: movaps  xmmword ptr [ecx+10h], xmm5
0x8D0954: jmp     short loc_8D095E
0x8D0956: movaps  xmm0, xmmword ptr [edx+10h]
0x8D095A: movaps  xmmword ptr [ecx+10h], xmm0
0x8D095E: fld     [ebp+arg_C]
0x8D0961: movaps  xmm4, xmmword ptr [ecx+10h]
0x8D0965: fsub    st, st(1)
0x8D0967: fstp    [esp+80h+var_4C]
0x8D096B: movss   xmm0, [esp+80h+var_4C]
0x8D0971: movaps  xmm5, xmm0
0x8D0974: shufps  xmm5, xmm0, 0
0x8D0978: fsub    st, st(1)
0x8D097A: mulps   xmm5, xmm4
0x8D097D: addps   xmm3, xmm5
0x8D0980: fstp    dword ptr [ecx+1Ch]
0x8D0983: movaps  xmmword ptr [ecx], xmm3
0x8D0986: movaps  xmm5, xmmword ptr ds:0A965C0h
0x8D098D: fstp    st
0x8D098F: cmp     esi, 1
0x8D0992: jz      short loc_8D09F9
0x8D0994: fld     [esp+80h+var_5C]
0x8D0998: movaps  xmm3, [esp+80h+var_10]
0x8D099D: movaps  xmm0, xmmword ptr [edi+10h]
0x8D09A1: fsubrp  st(2), st
0x8D09A3: fxch    st(1)
0x8D09A5: add     ecx, 20h ; ' '
0x8D09A8: xorps   xmm1, xmm5
0x8D09AB: fsub    [esp+80h+var_64]
0x8D09AF: xorps   xmm2, xmm5
0x8D09B2: fxch    st(1)
0x8D09B4: inc     esi
0x8D09B5: fsubr   [esp+80h+var_58]
0x8D09B9: mov     eax, 5
0x8D09BE: fsub    [esp+80h+var_64]
0x8D09C2: jmp     loc_8D0792
0x8D09C7: fmul    [esp+80h+var_68]
0x8D09CB: mov     ecx, [esp+80h+var_68]
0x8D09CF: movaps  xmm1, xmmword ptr [edx+10h]
0x8D09D3: mov     [esp+80h+var_44], ecx
0x8D09D7: movss   xmm0, [esp+80h+var_44]
0x8D09DD: fsub    st, st(1)
0x8D09DF: movaps  xmm2, xmm0
0x8D09E2: shufps  xmm2, xmm0, 0
0x8D09E6: mulps   xmm2, xmm1
0x8D09E9: movaps  xmmword ptr [edx+10h], xmm2
0x8D09ED: fstp    dword ptr [edx+1Ch]
0x8D09F0: fstp    st
0x8D09F2: pop     edi
0x8D09F3: pop     esi
0x8D09F4: pop     ebx
0x8D09F5: mov     esp, ebp
0x8D09F7: pop     ebp
0x8D09F8: retn
0x8D09F9: fstp    st
0x8D09FB: fstp    st
0x8D09FD: fstp    st
0x8D09FF: pop     edi
0x8D0A00: pop     esi
0x8D0A01: pop     ebx
0x8D0A02: mov     esp, ebp
0x8D0A04: pop     ebp
0x8D0A05: retn
