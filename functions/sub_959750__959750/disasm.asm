0x959750: push    ebp
0x959751: mov     ebp, esp
0x959753: and     esp, 0FFFFFFF0h
0x959756: sub     esp, 0F4h
0x95975C: push    ebx
0x95975D: mov     ebx, [ebp+arg_4]
0x959760: push    esi
0x959761: mov     esi, [ebp+arg_8]
0x959764: push    edi
0x959765: mov     dword ptr [esp+100h+var_B0+0Ch], 0FF7FFFFFh
0x95976D: mov     [esp+100h+var_E8], offset xmmword_B2F090
0x959775: mov     eax, [esp+100h+var_E8]
0x959779: mov     ecx, [eax]
0x95977B: mov     edx, [eax+4]
0x95977E: mov     dword ptr [esp+100h+var_E0], ecx
0x959782: mov     ecx, [eax+8]
0x959785: mov     dword ptr [esp+100h+var_E0+4], edx
0x959789: mov     edx, [eax+0Ch]
0x95978C: lea     eax, [esp+100h+var_E0]
0x959790: push    eax
0x959791: mov     dword ptr [esp+104h+var_E0+8], ecx
0x959795: mov     ecx, [ebp+arg_0]
0x959798: push    ebx
0x959799: lea     edi, [esp+108h+var_A0]
0x95979D: mov     dword ptr [esp+108h+var_E0+0Ch], edx
0x9597A1: call    sub_959630
0x9597A6: fld     dword ptr [esp+108h+anonymous_0+0Ch]
0x9597AD: fcomp   dword ptr [esp+108h+var_B0+0Ch]
0x9597B1: add     esp, 8
0x9597B4: fnstsw  ax
0x9597B6: test    ah, 41h
0x9597B9: jnz     short loc_9597DC
0x9597BB: movaps  xmm0, [esp+100h+var_A0]
0x9597C0: movaps  [esp+100h+var_D0], xmm0
0x9597C5: movaps  xmm0, [esp+100h+var_90]
0x9597CA: movaps  [esp+100h+var_C0], xmm0
0x9597CF: movaps  xmm0, [esp+100h+anonymous_0]
0x9597D7: movaps  [esp+100h+var_B0], xmm0
0x9597DC: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9597E3: movaps  xmm1, [esp+100h+var_E0]
0x9597E8: lea     ecx, [esp+100h+var_E0]
0x9597EC: push    ecx
0x9597ED: mov     ecx, [ebp+arg_0]
0x9597F0: xorps   xmm1, xmm0
0x9597F3: push    ebx
0x9597F4: lea     edi, [esp+108h+var_A0]
0x9597F8: movaps  [esp+108h+var_E0], xmm1
0x9597FD: call    sub_959630
0x959802: fld     dword ptr [esp+108h+anonymous_0+0Ch]
0x959809: fcomp   dword ptr [esp+108h+var_B0+0Ch]
0x95980D: add     esp, 8
0x959810: fnstsw  ax
0x959812: test    ah, 41h
0x959815: jnz     short loc_959838
0x959817: movaps  xmm0, [esp+100h+var_A0]
0x95981C: movaps  [esp+100h+var_D0], xmm0
0x959821: movaps  xmm0, [esp+100h+var_90]
0x959826: movaps  [esp+100h+var_C0], xmm0
0x95982B: movaps  xmm0, [esp+100h+anonymous_0]
0x959833: movaps  [esp+100h+var_B0], xmm0
0x959838: mov     eax, [esp+100h+var_E8]
0x95983C: add     eax, 10h
0x95983F: cmp     eax, offset unk_B2F0C0
0x959844: mov     [esp+100h+var_E8], eax
0x959848: jl      loc_959775
0x95984E: fld     dword ptr ds:0A2F948h
0x959854: mov     [esp+100h+var_E8], 40400000h
0x95985C: movss   xmm6, [esp+100h+var_E8]
0x959862: mov     [esp+100h+var_E8], 3F000000h
0x95986A: movss   xmm0, [esp+100h+var_E8]
0x959870: movaps  [esp+100h+var_50], xmm6
0x959878: movaps  [esp+100h+var_60], xmm0
0x959880: jmp     short loc_959890
0x959882: movaps  xmm6, [esp+100h+var_50]
0x95988A: lea     ebx, [ebx+0]
0x959890: fmul    dword ptr ds:0A65520h
0x959896: xor     ecx, ecx
0x959898: fld     dword ptr [esp+100h+var_B0]
0x95989C: mov     edx, 1
0x9598A1: fabs
0x9598A3: mov     edi, 2
0x9598A8: fld     dword ptr [esp+100h+var_B0+4]
0x9598AC: fabs
0x9598AE: fst     [esp+100h+var_E8]
0x9598B2: fld     dword ptr [esp+100h+var_B0+8]
0x9598B6: fabs
0x9598B8: fstp    [esp+100h+var_E4]
0x9598BC: fcomp   st(1)
0x9598BE: fnstsw  ax
0x9598C0: test    ah, 5
0x9598C3: jp      short loc_9598D2
0x9598C5: fstp    st
0x9598C7: xor     edx, edx
0x9598C9: fld     [esp+100h+var_E8]
0x9598CD: mov     ecx, 1
0x9598D2: fld     [esp+100h+var_E4]
0x9598D6: fcomp   st(1)
0x9598D8: fnstsw  ax
0x9598DA: fstp    st
0x9598DC: test    ah, 5
0x9598DF: jp      short loc_9598E8
0x9598E1: mov     edi, ecx
0x9598E3: mov     ecx, 2
0x9598E8: fld     dword ptr [esp+edx*4+100h+var_B0]
0x9598EC: mov     eax, dword ptr [esp+edi*4+100h+var_B0]
0x9598F0: mov     dword ptr [esp+ecx*4+100h+var_E0], 0
0x9598F8: fchs
0x9598FA: mov     dword ptr [esp+100h+var_E0+0Ch], 0
0x959902: mov     dword ptr [esp+edx*4+100h+var_E0], eax
0x959906: fstp    dword ptr [esp+edi*4+100h+var_E0]
0x95990A: movaps  xmm2, [esp+100h+var_E0]
0x95990F: movaps  xmm0, xmm2
0x959912: fst     [esp+100h+var_E4]
0x959916: mulps   xmm0, xmm2
0x959919: movaps  xmm1, xmm0
0x95991C: shufps  xmm1, xmm0, 55h ; 'U'
0x959920: addss   xmm1, xmm0
0x959924: movaps  xmm3, xmm0
0x959927: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x95992B: movaps  xmm0, xmm3
0x95992E: addss   xmm0, xmm1
0x959932: movaps  [esp+100h+var_70], xmm0
0x95993A: rsqrtss xmm1, xmm0
0x95993E: movss   dword ptr [esp+100h+var_70], xmm1
0x959947: movaps  xmm1, [esp+100h+var_70]
0x95994F: mulss   xmm0, xmm1
0x959953: mulss   xmm0, xmm1
0x959957: movaps  xmm3, xmm6
0x95995A: subss   xmm3, xmm0
0x95995E: movaps  xmm0, [esp+100h+var_60]
0x959966: mulss   xmm0, xmm1
0x95996A: mulss   xmm0, xmm3
0x95996E: movaps  xmm1, xmm0
0x959971: shufps  xmm1, xmm0, 0
0x959975: movaps  xmm0, xmm1
0x959978: mulps   xmm0, xmm2
0x95997B: movss   xmm2, [esp+100h+var_E4]
0x959981: movaps  xmm4, xmm0
0x959984: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x959988: movaps  xmm5, xmm0
0x95998B: shufps  xmm5, xmm0, 0C9h ; 'É'
0x95998F: movaps  xmm1, xmm2
0x959992: shufps  xmm1, xmm2, 0
0x959996: movaps  xmm3, xmm1
0x959999: movaps  xmm1, [esp+100h+var_B0]
0x95999E: mulps   xmm3, xmm0
0x9599A1: movaps  xmm0, xmm1
0x9599A4: shufps  xmm0, xmm1, 0D2h ; 'Ò'
0x9599A8: mulps   xmm0, xmm5
0x9599AB: movaps  xmm5, xmm1
0x9599AE: shufps  xmm5, xmm1, 0C9h ; 'É'
0x9599B2: mulps   xmm5, xmm4
0x9599B5: subps   xmm5, xmm0
0x9599B8: movaps  xmm0, xmm2
0x9599BB: shufps  xmm0, xmm2, 0
0x9599BF: movaps  xmm4, xmm0
0x9599C2: mulps   xmm4, xmm5
0x9599C5: movaps  xmm2, xmm1
0x9599C8: addps   xmm2, xmm3
0x9599CB: movaps  xmm0, xmm2
0x9599CE: mulps   xmm0, xmm2
0x9599D1: movaps  xmm5, xmm0
0x9599D4: shufps  xmm5, xmm0, 55h ; 'U'
0x9599D8: addss   xmm5, xmm0
0x9599DC: movaps  xmm7, xmm0
0x9599DF: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x9599E3: movaps  xmm0, xmm7
0x9599E6: addss   xmm0, xmm5
0x9599EA: movaps  [esp+100h+var_70], xmm0
0x9599F2: rsqrtss xmm5, xmm0
0x9599F6: movss   dword ptr [esp+100h+var_70], xmm5
0x9599FF: movaps  xmm5, [esp+100h+var_70]
0x959A07: mulss   xmm0, xmm5
0x959A0B: mulss   xmm0, xmm5
0x959A0F: subss   xmm6, xmm0
0x959A13: movaps  xmm0, [esp+100h+var_60]
0x959A1B: mulss   xmm0, xmm5
0x959A1F: mulss   xmm0, xmm6
0x959A23: shufps  xmm0, xmm0, 0
0x959A27: movaps  xmm5, xmm0
0x959A2A: mulps   xmm5, xmm2
0x959A2D: movaps  [esp+100h+var_E0], xmm3
0x959A32: movaps  [esp+100h+var_30], xmm5
0x959A3A: movaps  xmm2, xmm1
0x959A3D: subps   xmm2, xmm3
0x959A40: movaps  xmm3, xmm0
0x959A43: mulps   xmm3, xmm2
0x959A46: lea     ecx, [esp+100h+var_30]
0x959A4D: movaps  [esp+100h+var_10], xmm3
0x959A55: movaps  xmm2, xmm1
0x959A58: push    ecx
0x959A59: mov     ecx, [ebp+arg_0]
0x959A5C: movaps  xmm3, xmm0
0x959A5F: addps   xmm2, xmm4
0x959A62: subps   xmm1, xmm4
0x959A65: mulps   xmm3, xmm2
0x959A68: mulps   xmm0, xmm1
0x959A6B: push    ebx
0x959A6C: lea     edi, [esp+108h+var_A0]
0x959A70: movaps  [esp+108h+var_20], xmm3
0x959A78: movaps  [esp+108h+var_40], xmm0
0x959A80: call    sub_959630
0x959A85: fld     dword ptr [esp+108h+anonymous_0+0Ch]
0x959A8C: fcomp   dword ptr [esp+108h+var_B0+0Ch]
0x959A90: add     esp, 8
0x959A93: fnstsw  ax
0x959A95: test    ah, 41h
0x959A98: jz      short loc_959AC0
0x959A9A: mov     ecx, [ebp+arg_0]
0x959A9D: lea     edx, [esp+100h+var_10]
0x959AA4: push    edx
0x959AA5: push    ebx
0x959AA6: call    sub_959630
0x959AAB: fld     dword ptr [esp+108h+anonymous_0+0Ch]
0x959AB2: fcomp   dword ptr [esp+108h+var_B0+0Ch]
0x959AB6: add     esp, 8
0x959AB9: fnstsw  ax
0x959ABB: test    ah, 41h
0x959ABE: jnz     short loc_959AE3
0x959AC0: movaps  xmm0, [esp+100h+var_A0]
0x959AC5: movaps  [esp+100h+var_D0], xmm0
0x959ACA: movaps  xmm0, [esp+100h+var_90]
0x959ACF: movaps  [esp+100h+var_C0], xmm0
0x959AD4: movaps  xmm0, [esp+100h+anonymous_0]
0x959ADC: movaps  [esp+100h+var_B0], xmm0
0x959AE1: jmp     short loc_959B39
0x959AE3: mov     ecx, [ebp+arg_0]
0x959AE6: lea     eax, [esp+100h+var_20]
0x959AED: push    eax
0x959AEE: push    ebx
0x959AEF: lea     edi, [esp+108h+var_A0]
0x959AF3: call    sub_959630
0x959AF8: fld     dword ptr [esp+108h+anonymous_0+0Ch]
0x959AFF: fcomp   dword ptr [esp+108h+var_B0+0Ch]
0x959B03: add     esp, 8
0x959B06: fnstsw  ax
0x959B08: test    ah, 41h
0x959B0B: jz      short loc_959AC0
0x959B0D: lea     ecx, [esp+100h+var_40]
0x959B14: push    ecx
0x959B15: mov     ecx, [ebp+arg_0]
0x959B18: push    ebx
0x959B19: call    sub_959630
0x959B1E: fld     dword ptr [esp+108h+anonymous_0+0Ch]
0x959B25: fcomp   dword ptr [esp+108h+var_B0+0Ch]
0x959B29: add     esp, 8
0x959B2C: fnstsw  ax
0x959B2E: test    ah, 41h
0x959B31: jz      short loc_959AC0
0x959B33: fmul    dword ptr ds:0A3D65Ch
0x959B39: fcom    dword ptr ds:0A37080h
0x959B3F: fnstsw  ax
0x959B41: test    ah, 41h
0x959B44: jz      loc_959882
0x959B4A: mov     edx, [ebp+arg_C]
0x959B4D: fstp    st
0x959B4F: movaps  xmm0, [esp+100h+var_D0]
0x959B54: fld     dword ptr [esp+100h+var_B0+0Ch]
0x959B58: mov     eax, [ebp+arg_10]
0x959B5B: movaps  xmm1, [esp+100h+var_C0]
0x959B60: movaps  xmmword ptr [edx], xmm0
0x959B63: movaps  xmmword ptr [eax], xmm1
0x959B66: mov     eax, [ebp+arg_14]
0x959B69: movaps  xmm1, [esp+100h+var_B0]
0x959B6E: fstp    dword ptr [eax+20h]
0x959B71: pop     edi
0x959B72: pop     esi
0x959B73: movaps  xmmword ptr [eax], xmm1
0x959B76: movaps  xmmword ptr [eax+10h], xmm0
0x959B7A: mov     dword ptr [eax+24h], 3F000000h
0x959B81: pop     ebx
0x959B82: mov     esp, ebp
0x959B84: pop     ebp
0x959B85: retn
