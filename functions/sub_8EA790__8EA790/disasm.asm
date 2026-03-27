0x8EA790: push    ebp
0x8EA791: mov     ebp, esp
0x8EA793: and     esp, 0FFFFFFF0h
0x8EA796: sub     esp, 34h
0x8EA799: mov     eax, [ebp+arg_4]
0x8EA79C: push    ebx
0x8EA79D: push    esi
0x8EA79E: mov     [esp+3Ch+var_28], eax
0x8EA7A2: movss   xmm1, [esp+3Ch+var_28]
0x8EA7A8: push    edi
0x8EA7A9: mov     edi, [ebp+arg_8]
0x8EA7AC: movaps  xmm0, xmmword ptr [edi+40h]
0x8EA7B0: lea     esi, [ecx+10h]
0x8EA7B3: movaps  xmm2, xmm1
0x8EA7B6: shufps  xmm2, xmm1, 0
0x8EA7BA: mulps   xmm2, xmm0
0x8EA7BD: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8EA7C4: movaps  xmm0, xmmword ptr [edi+50h]
0x8EA7C8: movaps  xmm3, xmmword ptr [esi+20h]
0x8EA7CC: movaps  xmm4, xmmword ptr [esi+10h]
0x8EA7D0: movaps  xmm2, xmm0
0x8EA7D3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EA7D7: mulps   xmm3, xmm2
0x8EA7DA: movaps  xmm2, xmm0
0x8EA7DD: shufps  xmm2, xmm0, 55h ; 'U'
0x8EA7E1: mulps   xmm4, xmm2
0x8EA7E4: movaps  xmm2, xmm0
0x8EA7E7: shufps  xmm2, xmm0, 0
0x8EA7EB: movaps  xmm0, xmmword ptr [esi]
0x8EA7EE: mulps   xmm0, xmm2
0x8EA7F1: addps   xmm0, xmm4
0x8EA7F4: addps   xmm0, xmm3
0x8EA7F7: movaps  xmm2, xmm1
0x8EA7FA: shufps  xmm2, xmm1, 0
0x8EA7FE: mulps   xmm2, xmm0
0x8EA801: movaps  xmmword ptr [ecx+0E0h], xmm2
0x8EA808: mov     dx, [edi+4]
0x8EA80C: mov     [ecx+0BEh], dx
0x8EA813: movaps  xmm0, xmmword ptr [esi+50h]
0x8EA817: mov     edx, [ebp+arg_0]
0x8EA81A: movaps  xmmword ptr [esi+40h], xmm0
0x8EA81E: mov     eax, [edx]
0x8EA820: mov     [esi+4Ch], eax
0x8EA823: fld     dword ptr [esi+0A4h]
0x8EA829: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA830: fld     st
0x8EA832: movaps  xmm0, xmm1
0x8EA835: fmul    st, st(1)
0x8EA837: mulps   xmm0, xmm1
0x8EA83A: movaps  xmm2, xmm0
0x8EA83D: shufps  xmm2, xmm0, 55h ; 'U'
0x8EA841: movaps  xmm3, xmm0
0x8EA844: lea     eax, [esp+40h+var_2C]
0x8EA848: addss   xmm2, xmm0
0x8EA84C: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EA850: addss   xmm3, xmm2
0x8EA854: movss   dword ptr [eax], xmm3
0x8EA858: fld     [esp+40h+var_2C]
0x8EA85C: fcompp
0x8EA85E: fnstsw  ax
0x8EA860: fstp    st
0x8EA862: test    ah, 41h
0x8EA865: jnz     short loc_8EA88E
0x8EA867: fld     [esp+40h+var_2C]
0x8EA86B: fsqrt
0x8EA86D: fdivr   dword ptr [esi+0A4h]
0x8EA873: fstp    [esp+40h+var_28]
0x8EA877: movss   xmm0, [esp+40h+var_28]
0x8EA87D: movaps  xmm2, xmm0
0x8EA880: shufps  xmm2, xmm0, 0
0x8EA884: mulps   xmm2, xmm1
0x8EA887: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8EA88E: mov     eax, [edx+8]
0x8EA891: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA898: mov     [esp+40h+var_28], eax
0x8EA89C: movss   xmm0, [esp+40h+var_28]
0x8EA8A2: movaps  xmm2, xmm0
0x8EA8A5: shufps  xmm2, xmm0, 0
0x8EA8A9: movaps  xmm0, xmmword ptr [esi+50h]
0x8EA8AD: mulps   xmm2, xmm1
0x8EA8B0: addps   xmm0, xmm2
0x8EA8B3: movaps  xmmword ptr [esi+50h], xmm0
0x8EA8B7: mov     eax, [edx+0Ch]
0x8EA8BA: mov     [esi+5Ch], eax
0x8EA8BD: lea     eax, [esi+70h]
0x8EA8C0: mov     ebx, [eax]
0x8EA8C2: mov     dword ptr [esp+40h+var_20], ebx
0x8EA8C6: mov     ebx, [eax+4]
0x8EA8C9: mov     dword ptr [esp+40h+var_20+4], ebx
0x8EA8CD: mov     ebx, [eax+8]
0x8EA8D0: mov     eax, [eax+0Ch]
0x8EA8D3: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8EA8D7: mov     dword ptr [esp+40h+var_20+8], ebx
0x8EA8DB: movaps  xmm0, [esp+40h+var_20]
0x8EA8E0: movaps  xmmword ptr [esi+60h], xmm0
0x8EA8E4: fld     dword ptr [edx+8]
0x8EA8E7: fmul    dword ptr ds:0A3D65Ch
0x8EA8ED: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x8EA8F4: lea     eax, [esp+40h+var_28]
0x8EA8F8: fstp    [esp+40h+var_28]
0x8EA8FC: movss   xmm0, [esp+40h+var_28]
0x8EA902: movaps  xmm1, xmm0
0x8EA905: shufps  xmm1, xmm0, 0
0x8EA909: mulps   xmm1, xmm2
0x8EA90C: movaps  xmm0, xmm1
0x8EA90F: mulps   xmm0, xmm1
0x8EA912: movaps  xmm3, xmm0
0x8EA915: shufps  xmm3, xmm0, 55h ; 'U'
0x8EA919: movaps  xmm4, xmm0
0x8EA91C: addss   xmm3, xmm0
0x8EA920: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8EA924: addss   xmm4, xmm3
0x8EA928: movss   dword ptr [eax], xmm4
0x8EA92C: fld     [esp+40h+var_28]
0x8EA930: fmul    dword ptr ds:0A96F74h
0x8EA936: movaps  [esp+40h+var_10], xmm1
0x8EA93B: fstp    [esp+40h+var_2C]
0x8EA93F: fld     dword ptr [esi+0A8h]
0x8EA945: fmul    dword ptr [edx+8]
0x8EA948: fld     dword ptr ds:0A37450h
0x8EA94E: fcomp   st(1)
0x8EA950: fnstsw  ax
0x8EA952: test    ah, 5
0x8EA955: jp      short loc_8EA95F
0x8EA957: fstp    st
0x8EA959: fld     dword ptr ds:0A37450h
0x8EA95F: fld     st
0x8EA961: fmul    st, st(1)
0x8EA963: fstp    [esp+40h+var_28]
0x8EA967: fld     [esp+40h+var_2C]
0x8EA96B: fcomp   [esp+40h+var_28]
0x8EA96F: fnstsw  ax
0x8EA971: test    ah, 41h
0x8EA974: jp      short loc_8EA97A
0x8EA976: fstp    st
0x8EA978: jmp     short loc_8EA9B4
0x8EA97A: fld     [esp+40h+var_2C]
0x8EA97E: fsqrt
0x8EA980: fdivp   st(1), st
0x8EA982: fstp    [esp+40h+var_24]
0x8EA986: movss   xmm0, [esp+40h+var_24]
0x8EA98C: movaps  xmm3, xmm0
0x8EA98F: shufps  xmm3, xmm0, 0
0x8EA993: mulps   xmm3, xmm2
0x8EA996: movaps  xmmword ptr [ecx+0E0h], xmm3
0x8EA99D: mov     ecx, [esp+40h+var_28]
0x8EA9A1: movaps  xmm2, xmm0
0x8EA9A4: shufps  xmm2, xmm0, 0
0x8EA9A8: mulps   xmm2, xmm1
0x8EA9AB: movaps  [esp+40h+var_10], xmm2
0x8EA9B0: mov     [esp+40h+var_2C], ecx
0x8EA9B4: fld     [esp+40h+var_2C]
0x8EA9B8: lea     edx, [esp+40h+var_20]
0x8EA9BC: fmul    [esp+40h+var_2C]
0x8EA9C0: push    edx
0x8EA9C1: fld     [esp+44h+var_2C]
0x8EA9C5: lea     eax, [esp+44h+var_10]
0x8EA9C9: fmul    dword ptr ds:0A96F70h
0x8EA9CF: push    eax
0x8EA9D0: lea     ecx, [esp+48h+var_20]
0x8EA9D4: fsubr   dword ptr ds:0A2F948h
0x8EA9DA: fld     st(1)
0x8EA9DC: fmul    dword ptr ds:0A96F6Ch
0x8EA9E2: fsubp   st(1), st
0x8EA9E4: fxch    st(1)
0x8EA9E6: fmul    [esp+48h+var_2C]
0x8EA9EA: fmul    dword ptr ds:0A96F68h
0x8EA9F0: fsubp   st(1), st
0x8EA9F2: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8EA9F6: call    sub_889470
0x8EA9FB: lea     ecx, [esp+40h+var_20]
0x8EA9FF: call    sub_4D6830
0x8EAA04: fld     [esp+40h+var_2C]
0x8EAA08: fsqrt
0x8EAA0A: movaps  xmm0, [esp+40h+var_10]
0x8EAA0F: movaps  xmm1, xmm0
0x8EAA12: addps   xmm1, xmm0
0x8EAA15: movaps  xmm0, [esp+40h+var_20]
0x8EAA1A: lea     ecx, [esi+70h]
0x8EAA1D: movaps  xmmword ptr [esi+90h], xmm1
0x8EAA24: push    ecx
0x8EAA25: mov     ecx, esi
0x8EAA27: fmul    dword ptr ds:0A9AEBCh
0x8EAA2D: fstp    dword ptr [esi+9Ch]
0x8EAA33: movaps  xmmword ptr [esi+70h], xmm0
0x8EAA37: call    sub_8B1DD0
0x8EAA3C: movaps  xmm0, xmmword ptr [esi+80h]
0x8EAA43: movaps  xmm2, xmmword ptr [esi+20h]
0x8EAA47: movaps  xmm3, xmmword ptr [esi+10h]
0x8EAA4B: movaps  xmm1, xmm0
0x8EAA4E: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EAA52: mulps   xmm2, xmm1
0x8EAA55: movaps  xmm1, xmm0
0x8EAA58: shufps  xmm1, xmm0, 55h ; 'U'
0x8EAA5C: mulps   xmm3, xmm1
0x8EAA5F: movaps  xmm1, xmm0
0x8EAA62: shufps  xmm1, xmm0, 0
0x8EAA66: movaps  xmm0, xmmword ptr [esi]
0x8EAA69: mulps   xmm0, xmm1
0x8EAA6C: movaps  xmm1, xmmword ptr [esi+50h]
0x8EAA70: addps   xmm0, xmm3
0x8EAA73: addps   xmm0, xmm2
0x8EAA76: lea     eax, [edi+80h]
0x8EAA7C: pop     edi
0x8EAA7D: subps   xmm1, xmm0
0x8EAA80: movaps  xmmword ptr [esi+30h], xmm1
0x8EAA84: pop     esi
0x8EAA85: pop     ebx
0x8EAA86: mov     esp, ebp
0x8EAA88: pop     ebp
0x8EAA89: retn    0Ch
