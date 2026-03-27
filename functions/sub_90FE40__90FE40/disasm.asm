0x90FE40: push    ebp
0x90FE41: mov     ebp, esp
0x90FE43: and     esp, 0FFFFFFF0h
0x90FE46: sub     esp, 44h
0x90FE49: mov     eax, [ebp+arg_0]
0x90FE4C: fld     dword ptr [eax+8]
0x90FE4F: push    ebx
0x90FE50: fmul    dword ptr ds:0A57EF8h
0x90FE56: push    esi
0x90FE57: mov     esi, ecx
0x90FE59: mov     ebx, [esi+1Ch]
0x90FE5C: mov     eax, [ebx+50h]
0x90FE5F: fstp    dword ptr [esp+4Ch+var_34]
0x90FE63: push    edi
0x90FE64: mov     edi, [esi+18h]
0x90FE67: lea     ecx, [esi+20h]
0x90FE6A: push    ecx
0x90FE6B: add     eax, 80h ; '€'
0x90FE70: push    eax
0x90FE71: lea     ecx, [esp+58h+var_20]
0x90FE75: call    sub_889470
0x90FE7A: mov     eax, [edi+50h]
0x90FE7D: movaps  xmm0, xmmword ptr ds:0A965C0h
0x90FE84: movaps  xmm1, [esp+50h+var_20]
0x90FE89: mov     edx, dword ptr [esp+50h+var_20+0Ch]
0x90FE8D: lea     ecx, [esp+50h+var_10]
0x90FE91: push    ecx
0x90FE92: add     eax, 80h ; '€'
0x90FE97: xorps   xmm1, xmm0
0x90FE9A: movaps  [esp+54h+var_10], xmm1
0x90FE9F: push    eax
0x90FEA0: lea     ecx, [esp+58h+var_20]
0x90FEA4: mov     dword ptr [esp+58h+var_10+0Ch], edx
0x90FEA8: call    sub_889470
0x90FEAD: fld     dword ptr [esp+50h+var_20+0Ch]
0x90FEB1: mov     eax, [ebx+50h]
0x90FEB4: fabs
0x90FEB6: movaps  xmm0, xmmword ptr [eax+0E0h]
0x90FEBD: mov     eax, [edi+50h]
0x90FEC0: movaps  xmm3, xmmword ptr [eax+0E0h]
0x90FEC7: fst     [esp+50h+var_38]
0x90FECB: fabs
0x90FECD: subps   xmm3, xmm0
0x90FED0: fcomp   dword ptr ds:0A2F948h
0x90FED6: movaps  [esp+50h+var_10], xmm3
0x90FEDB: fnstsw  ax
0x90FEDD: test    ah, 1
0x90FEE0: jnz     short loc_90FF03
0x90FEE2: fld     [esp+50h+var_38]
0x90FEE6: fcomp   dword ptr ds:0A2FAA8h
0x90FEEC: fnstsw  ax
0x90FEEE: test    ah, 41h
0x90FEF1: jnz     short loc_90FEFB
0x90FEF3: fld     dword ptr ds:0A2FAA8h
0x90FEF9: jmp     short loc_90FF11
0x90FEFB: fld     dword ptr ds:0A9CB60h
0x90FF01: jmp     short loc_90FF11
0x90FF03: fld     [esp+50h+var_38]
0x90FF07: call    __CIacos
0x90FF0C: movaps  xmm3, [esp+50h+var_10]
0x90FF11: fadd    st, st
0x90FF13: xorps   xmm2, xmm2
0x90FF16: fld     st
0x90FF18: fabs
0x90FF1A: fcomp   dword ptr ds:0A37080h
0x90FF20: fnstsw  ax
0x90FF22: test    ah, 41h
0x90FF25: jnz     short loc_90FF42
0x90FF27: movaps  xmm1, [esp+50h+var_20]
0x90FF2C: fstp    [esp+50h+var_38]
0x90FF30: movss   xmm0, [esp+50h+var_38]
0x90FF36: movaps  xmm2, xmm0
0x90FF39: shufps  xmm2, xmm0, 0
0x90FF3D: mulps   xmm2, xmm1
0x90FF40: jmp     short loc_90FF44
0x90FF42: fstp    st
0x90FF44: fld     dword ptr [esp+50h+var_34]
0x90FF48: mov     ecx, ebx
0x90FF4A: fmul    dword ptr [esi+30h]
0x90FF4D: fstp    [esp+50h+var_38]
0x90FF51: fld     dword ptr [esp+50h+var_34]
0x90FF55: movss   xmm0, [esp+50h+var_38]
0x90FF5B: fmul    dword ptr [esi+34h]
0x90FF5E: fstp    dword ptr [esp+50h+var_34]
0x90FF62: movss   xmm1, dword ptr [esp+50h+var_34]
0x90FF68: movaps  xmm4, xmm1
0x90FF6B: shufps  xmm4, xmm1, 0
0x90FF6F: movaps  xmm1, xmm0
0x90FF72: shufps  xmm1, xmm0, 0
0x90FF76: mulps   xmm4, xmm3
0x90FF79: mulps   xmm1, xmm2
0x90FF7C: addps   xmm1, xmm4
0x90FF7F: movaps  [esp+50h+var_34+4], xmm1
0x90FF84: call    sub_8A6410
0x90FF89: mov     ecx, [ebx+50h]
0x90FF8C: mov     edx, [ecx]
0x90FF8E: lea     eax, [esp+50h+var_34+4]
0x90FF92: push    eax
0x90FF93: call    dword ptr [edx+64h]
0x90FF96: movaps  xmm1, [esp+50h+var_34+4]
0x90FF9B: movaps  xmm0, xmmword ptr ds:0A965C0h
0x90FFA2: xorps   xmm1, xmm0
0x90FFA5: mov     ecx, edi
0x90FFA7: movaps  [esp+50h+var_34+4], xmm1
0x90FFAC: call    sub_8A6410
0x90FFB1: mov     ecx, [edi+50h]
0x90FFB4: mov     edx, [ecx]
0x90FFB6: lea     eax, [esp+50h+var_34+4]
0x90FFBA: push    eax
0x90FFBB: call    dword ptr [edx+64h]
0x90FFBE: pop     edi
0x90FFBF: pop     esi
0x90FFC0: pop     ebx
0x90FFC1: mov     esp, ebp
0x90FFC3: pop     ebp
0x90FFC4: retn    4
