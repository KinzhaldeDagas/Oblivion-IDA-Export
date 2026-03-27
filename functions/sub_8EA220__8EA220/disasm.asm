0x8EA220: push    ebp
0x8EA221: mov     ebp, esp
0x8EA223: and     esp, 0FFFFFFF0h
0x8EA226: sub     esp, 34h
0x8EA229: push    ebx
0x8EA22A: push    esi
0x8EA22B: push    edi
0x8EA22C: movaps  xmm0, xmmword ptr [ecx+60h]
0x8EA230: mov     edx, [ebp+arg_0]
0x8EA233: lea     esi, [ecx+10h]
0x8EA236: movaps  xmmword ptr [esi+40h], xmm0
0x8EA23A: mov     eax, [edx]
0x8EA23C: mov     [esi+4Ch], eax
0x8EA23F: fld     dword ptr [esi+0A4h]
0x8EA245: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA24C: fld     st
0x8EA24E: movaps  xmm0, xmm1
0x8EA251: fmul    st, st(1)
0x8EA253: mulps   xmm0, xmm1
0x8EA256: movaps  xmm2, xmm0
0x8EA259: shufps  xmm2, xmm0, 55h ; 'U'
0x8EA25D: movaps  xmm3, xmm0
0x8EA260: lea     eax, [esp+40h+var_2C]
0x8EA264: addss   xmm2, xmm0
0x8EA268: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EA26C: addss   xmm3, xmm2
0x8EA270: movss   dword ptr [eax], xmm3
0x8EA274: fld     [esp+40h+var_2C]
0x8EA278: fcompp
0x8EA27A: fnstsw  ax
0x8EA27C: fstp    st
0x8EA27E: test    ah, 41h
0x8EA281: jnz     short loc_8EA2AA
0x8EA283: fld     [esp+40h+var_2C]
0x8EA287: fsqrt
0x8EA289: fdivr   dword ptr [esi+0A4h]
0x8EA28F: fstp    [esp+40h+var_28]
0x8EA293: movss   xmm0, [esp+40h+var_28]
0x8EA299: movaps  xmm2, xmm0
0x8EA29C: shufps  xmm2, xmm0, 0
0x8EA2A0: mulps   xmm2, xmm1
0x8EA2A3: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8EA2AA: mov     eax, [edx+8]
0x8EA2AD: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA2B4: mov     [esp+40h+var_28], eax
0x8EA2B8: movss   xmm0, [esp+40h+var_28]
0x8EA2BE: movaps  xmm2, xmm0
0x8EA2C1: shufps  xmm2, xmm0, 0
0x8EA2C5: movaps  xmm0, xmmword ptr [esi+50h]
0x8EA2C9: mulps   xmm2, xmm1
0x8EA2CC: addps   xmm0, xmm2
0x8EA2CF: movaps  xmmword ptr [esi+50h], xmm0
0x8EA2D3: mov     eax, [edx+0Ch]
0x8EA2D6: mov     [esi+5Ch], eax
0x8EA2D9: lea     edi, [esi+70h]
0x8EA2DC: mov     eax, edi
0x8EA2DE: mov     ebx, [eax]
0x8EA2E0: mov     dword ptr [esp+40h+var_20], ebx
0x8EA2E4: mov     ebx, [eax+4]
0x8EA2E7: mov     dword ptr [esp+40h+var_20+4], ebx
0x8EA2EB: mov     ebx, [eax+8]
0x8EA2EE: mov     eax, [eax+0Ch]
0x8EA2F1: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8EA2F5: mov     dword ptr [esp+40h+var_20+8], ebx
0x8EA2F9: movaps  xmm0, [esp+40h+var_20]
0x8EA2FE: movaps  xmmword ptr [esi+60h], xmm0
0x8EA302: fld     dword ptr [edx+8]
0x8EA305: fmul    dword ptr ds:0A3D65Ch
0x8EA30B: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x8EA312: lea     eax, [esp+40h+var_28]
0x8EA316: fstp    [esp+40h+var_28]
0x8EA31A: movss   xmm0, [esp+40h+var_28]
0x8EA320: movaps  xmm1, xmm0
0x8EA323: shufps  xmm1, xmm0, 0
0x8EA327: mulps   xmm1, xmm2
0x8EA32A: movaps  xmm0, xmm1
0x8EA32D: mulps   xmm0, xmm1
0x8EA330: movaps  xmm3, xmm0
0x8EA333: shufps  xmm3, xmm0, 55h ; 'U'
0x8EA337: movaps  xmm4, xmm0
0x8EA33A: addss   xmm3, xmm0
0x8EA33E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8EA342: addss   xmm4, xmm3
0x8EA346: movss   dword ptr [eax], xmm4
0x8EA34A: fld     [esp+40h+var_28]
0x8EA34E: fmul    dword ptr ds:0A96F74h
0x8EA354: movaps  [esp+40h+var_10], xmm1
0x8EA359: fstp    [esp+40h+var_2C]
0x8EA35D: fld     dword ptr [esi+0A8h]
0x8EA363: fmul    dword ptr [edx+8]
0x8EA366: fld     dword ptr ds:0A37450h
0x8EA36C: fcomp   st(1)
0x8EA36E: fnstsw  ax
0x8EA370: test    ah, 5
0x8EA373: jp      short loc_8EA37D
0x8EA375: fstp    st
0x8EA377: fld     dword ptr ds:0A37450h
0x8EA37D: fld     st
0x8EA37F: fmul    st, st(1)
0x8EA381: fstp    [esp+40h+var_28]
0x8EA385: fld     [esp+40h+var_2C]
0x8EA389: fcomp   [esp+40h+var_28]
0x8EA38D: fnstsw  ax
0x8EA38F: test    ah, 41h
0x8EA392: jp      short loc_8EA398
0x8EA394: fstp    st
0x8EA396: jmp     short loc_8EA3D2
0x8EA398: fld     [esp+40h+var_2C]
0x8EA39C: fsqrt
0x8EA39E: fdivp   st(1), st
0x8EA3A0: fstp    [esp+40h+var_24]
0x8EA3A4: movss   xmm0, [esp+40h+var_24]
0x8EA3AA: movaps  xmm3, xmm0
0x8EA3AD: shufps  xmm3, xmm0, 0
0x8EA3B1: mulps   xmm3, xmm2
0x8EA3B4: movaps  xmmword ptr [ecx+0E0h], xmm3
0x8EA3BB: mov     ecx, [esp+40h+var_28]
0x8EA3BF: movaps  xmm2, xmm0
0x8EA3C2: shufps  xmm2, xmm0, 0
0x8EA3C6: mulps   xmm2, xmm1
0x8EA3C9: movaps  [esp+40h+var_10], xmm2
0x8EA3CE: mov     [esp+40h+var_2C], ecx
0x8EA3D2: fld     [esp+40h+var_2C]
0x8EA3D6: lea     edx, [esp+40h+var_20]
0x8EA3DA: fmul    [esp+40h+var_2C]
0x8EA3DE: push    edx
0x8EA3DF: fld     [esp+44h+var_2C]
0x8EA3E3: lea     eax, [esp+44h+var_10]
0x8EA3E7: fmul    dword ptr ds:0A96F70h
0x8EA3ED: push    eax
0x8EA3EE: lea     ecx, [esp+48h+var_20]
0x8EA3F2: fsubr   dword ptr ds:0A2F948h
0x8EA3F8: fld     st(1)
0x8EA3FA: fmul    dword ptr ds:0A96F6Ch
0x8EA400: fsubp   st(1), st
0x8EA402: fxch    st(1)
0x8EA404: fmul    [esp+48h+var_2C]
0x8EA408: fmul    dword ptr ds:0A96F68h
0x8EA40E: fsubp   st(1), st
0x8EA410: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8EA414: call    sub_889470
0x8EA419: lea     ecx, [esp+40h+var_20]
0x8EA41D: call    sub_4D6830
0x8EA422: fld     [esp+40h+var_2C]
0x8EA426: fsqrt
0x8EA428: movaps  xmm0, [esp+40h+var_10]
0x8EA42D: movaps  xmm1, xmm0
0x8EA430: addps   xmm1, xmm0
0x8EA433: movaps  xmm0, [esp+40h+var_20]
0x8EA438: lea     ecx, [esi+70h]
0x8EA43B: movaps  xmmword ptr [esi+90h], xmm1
0x8EA442: push    ecx
0x8EA443: mov     ecx, esi
0x8EA445: fmul    dword ptr ds:0A9AEA0h
0x8EA44B: fstp    dword ptr [esi+9Ch]
0x8EA451: movaps  xmmword ptr [edi], xmm0
0x8EA454: call    sub_8B1DD0
0x8EA459: movaps  xmm0, xmmword ptr [esi+80h]
0x8EA460: movaps  xmm2, xmmword ptr [esi+20h]
0x8EA464: movaps  xmm3, xmmword ptr [esi+10h]
0x8EA468: mov     eax, [ebp+arg_8]
0x8EA46B: movaps  xmm1, xmm0
0x8EA46E: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EA472: mulps   xmm2, xmm1
0x8EA475: movaps  xmm1, xmm0
0x8EA478: shufps  xmm1, xmm0, 55h ; 'U'
0x8EA47C: mulps   xmm3, xmm1
0x8EA47F: movaps  xmm1, xmm0
0x8EA482: shufps  xmm1, xmm0, 0
0x8EA486: movaps  xmm0, xmmword ptr [esi]
0x8EA489: mulps   xmm0, xmm1
0x8EA48C: movaps  xmm1, xmmword ptr [esi+50h]
0x8EA490: addps   xmm0, xmm3
0x8EA493: addps   xmm0, xmm2
0x8EA496: pop     edi
0x8EA497: subps   xmm1, xmm0
0x8EA49A: movaps  xmmword ptr [esi+30h], xmm1
0x8EA49E: pop     esi
0x8EA49F: add     eax, 80h ; '€'
0x8EA4A4: pop     ebx
0x8EA4A5: mov     esp, ebp
0x8EA4A7: pop     ebp
0x8EA4A8: retn    0Ch
