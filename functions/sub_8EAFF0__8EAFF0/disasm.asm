0x8EAFF0: push    ebp
0x8EAFF1: mov     ebp, esp
0x8EAFF3: and     esp, 0FFFFFFF0h
0x8EAFF6: sub     esp, 34h
0x8EAFF9: mov     eax, [ebp+arg_4]
0x8EAFFC: movaps  xmm0, xmmword ptr [eax]
0x8EAFFF: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EB006: mov     edx, [ebp+arg_0]
0x8EB009: addps   xmm1, xmm0
0x8EB00C: movaps  xmmword ptr [ecx+0D0h], xmm1
0x8EB013: fld     dword ptr [edx+8]
0x8EB016: fld     st
0x8EB018: push    ebx
0x8EB019: fmul    dword ptr [ecx+0C8h]
0x8EB01F: push    esi
0x8EB020: push    edi
0x8EB021: fsubr   dword ptr ds:0A2F948h
0x8EB027: fld     dword ptr ds:0A2FAA8h
0x8EB02D: fcomp   st(1)
0x8EB02F: fnstsw  ax
0x8EB031: test    ah, 41h
0x8EB034: jnz     short loc_8EB03E
0x8EB036: fstp    st
0x8EB038: fld     dword ptr ds:0A2FAA8h
0x8EB03E: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EB045: fstp    [esp+40h+var_28]
0x8EB049: movss   xmm0, [esp+40h+var_28]
0x8EB04F: movaps  xmm2, xmm0
0x8EB052: shufps  xmm2, xmm0, 0
0x8EB056: mulps   xmm2, xmm1
0x8EB059: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8EB060: fmul    dword ptr [ecx+0CCh]
0x8EB066: fsubr   dword ptr ds:0A2F948h
0x8EB06C: fld     dword ptr ds:0A2FAA8h
0x8EB072: fcomp   st(1)
0x8EB074: fnstsw  ax
0x8EB076: test    ah, 41h
0x8EB079: jnz     short loc_8EB083
0x8EB07B: fstp    st
0x8EB07D: fld     dword ptr ds:0A2FAA8h
0x8EB083: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8EB08A: fstp    [esp+40h+var_28]
0x8EB08E: movss   xmm0, [esp+40h+var_28]
0x8EB094: movaps  xmm2, xmm0
0x8EB097: shufps  xmm2, xmm0, 0
0x8EB09B: mulps   xmm2, xmm1
0x8EB09E: movaps  xmmword ptr [ecx+0E0h], xmm2
0x8EB0A5: movaps  xmm0, xmmword ptr [ecx+60h]
0x8EB0A9: lea     esi, [ecx+10h]
0x8EB0AC: movaps  xmmword ptr [esi+40h], xmm0
0x8EB0B0: mov     eax, [edx]
0x8EB0B2: mov     [esi+4Ch], eax
0x8EB0B5: fld     dword ptr [esi+0A4h]
0x8EB0BB: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EB0C2: fld     st
0x8EB0C4: movaps  xmm0, xmm1
0x8EB0C7: fmul    st, st(1)
0x8EB0C9: mulps   xmm0, xmm1
0x8EB0CC: movaps  xmm2, xmm0
0x8EB0CF: shufps  xmm2, xmm0, 55h ; 'U'
0x8EB0D3: movaps  xmm3, xmm0
0x8EB0D6: lea     eax, [esp+40h+var_2C]
0x8EB0DA: addss   xmm2, xmm0
0x8EB0DE: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8EB0E2: addss   xmm3, xmm2
0x8EB0E6: movss   dword ptr [eax], xmm3
0x8EB0EA: fld     [esp+40h+var_2C]
0x8EB0EE: fcompp
0x8EB0F0: fnstsw  ax
0x8EB0F2: fstp    st
0x8EB0F4: test    ah, 41h
0x8EB0F7: jnz     short loc_8EB120
0x8EB0F9: fld     [esp+40h+var_2C]
0x8EB0FD: fsqrt
0x8EB0FF: fdivr   dword ptr [esi+0A4h]
0x8EB105: fstp    [esp+40h+var_28]
0x8EB109: movss   xmm0, [esp+40h+var_28]
0x8EB10F: movaps  xmm2, xmm0
0x8EB112: shufps  xmm2, xmm0, 0
0x8EB116: mulps   xmm2, xmm1
0x8EB119: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8EB120: mov     eax, [edx+8]
0x8EB123: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EB12A: mov     [esp+40h+var_28], eax
0x8EB12E: movss   xmm0, [esp+40h+var_28]
0x8EB134: movaps  xmm2, xmm0
0x8EB137: shufps  xmm2, xmm0, 0
0x8EB13B: movaps  xmm0, xmmword ptr [esi+50h]
0x8EB13F: mulps   xmm2, xmm1
0x8EB142: addps   xmm0, xmm2
0x8EB145: movaps  xmmword ptr [esi+50h], xmm0
0x8EB149: mov     eax, [edx+0Ch]
0x8EB14C: mov     [esi+5Ch], eax
0x8EB14F: lea     edi, [esi+70h]
0x8EB152: mov     eax, edi
0x8EB154: mov     ebx, [eax]
0x8EB156: mov     dword ptr [esp+40h+var_20], ebx
0x8EB15A: mov     ebx, [eax+4]
0x8EB15D: mov     dword ptr [esp+40h+var_20+4], ebx
0x8EB161: mov     ebx, [eax+8]
0x8EB164: mov     eax, [eax+0Ch]
0x8EB167: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8EB16B: mov     dword ptr [esp+40h+var_20+8], ebx
0x8EB16F: movaps  xmm0, [esp+40h+var_20]
0x8EB174: movaps  xmmword ptr [esi+60h], xmm0
0x8EB178: fld     dword ptr [edx+8]
0x8EB17B: fmul    dword ptr ds:0A3D65Ch
0x8EB181: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x8EB188: lea     eax, [esp+40h+var_28]
0x8EB18C: fstp    [esp+40h+var_28]
0x8EB190: movss   xmm0, [esp+40h+var_28]
0x8EB196: movaps  xmm1, xmm0
0x8EB199: shufps  xmm1, xmm0, 0
0x8EB19D: mulps   xmm1, xmm2
0x8EB1A0: movaps  xmm0, xmm1
0x8EB1A3: mulps   xmm0, xmm1
0x8EB1A6: movaps  xmm3, xmm0
0x8EB1A9: shufps  xmm3, xmm0, 55h ; 'U'
0x8EB1AD: movaps  xmm4, xmm0
0x8EB1B0: addss   xmm3, xmm0
0x8EB1B4: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8EB1B8: addss   xmm4, xmm3
0x8EB1BC: movss   dword ptr [eax], xmm4
0x8EB1C0: fld     [esp+40h+var_28]
0x8EB1C4: fmul    dword ptr ds:0A96F74h
0x8EB1CA: movaps  [esp+40h+var_10], xmm1
0x8EB1CF: fstp    [esp+40h+var_2C]
0x8EB1D3: fld     dword ptr [esi+0A8h]
0x8EB1D9: fmul    dword ptr [edx+8]
0x8EB1DC: fld     dword ptr ds:0A37450h
0x8EB1E2: fcomp   st(1)
0x8EB1E4: fnstsw  ax
0x8EB1E6: test    ah, 5
0x8EB1E9: jp      short loc_8EB1F3
0x8EB1EB: fstp    st
0x8EB1ED: fld     dword ptr ds:0A37450h
0x8EB1F3: fld     st
0x8EB1F5: fmul    st, st(1)
0x8EB1F7: fstp    [esp+40h+var_28]
0x8EB1FB: fld     [esp+40h+var_2C]
0x8EB1FF: fcomp   [esp+40h+var_28]
0x8EB203: fnstsw  ax
0x8EB205: test    ah, 41h
0x8EB208: jp      short loc_8EB20E
0x8EB20A: fstp    st
0x8EB20C: jmp     short loc_8EB248
0x8EB20E: fld     [esp+40h+var_2C]
0x8EB212: fsqrt
0x8EB214: fdivp   st(1), st
0x8EB216: fstp    [esp+40h+var_24]
0x8EB21A: movss   xmm0, [esp+40h+var_24]
0x8EB220: movaps  xmm3, xmm0
0x8EB223: shufps  xmm3, xmm0, 0
0x8EB227: mulps   xmm3, xmm2
0x8EB22A: movaps  xmmword ptr [ecx+0E0h], xmm3
0x8EB231: mov     ecx, [esp+40h+var_28]
0x8EB235: movaps  xmm2, xmm0
0x8EB238: shufps  xmm2, xmm0, 0
0x8EB23C: mulps   xmm2, xmm1
0x8EB23F: movaps  [esp+40h+var_10], xmm2
0x8EB244: mov     [esp+40h+var_2C], ecx
0x8EB248: fld     [esp+40h+var_2C]
0x8EB24C: lea     edx, [esp+40h+var_20]
0x8EB250: fmul    [esp+40h+var_2C]
0x8EB254: push    edx
0x8EB255: fld     [esp+44h+var_2C]
0x8EB259: lea     eax, [esp+44h+var_10]
0x8EB25D: fmul    dword ptr ds:0A96F70h
0x8EB263: push    eax
0x8EB264: lea     ecx, [esp+48h+var_20]
0x8EB268: fsubr   dword ptr ds:0A2F948h
0x8EB26E: fld     st(1)
0x8EB270: fmul    dword ptr ds:0A96F6Ch
0x8EB276: fsubp   st(1), st
0x8EB278: fxch    st(1)
0x8EB27A: fmul    [esp+48h+var_2C]
0x8EB27E: fmul    dword ptr ds:0A96F68h
0x8EB284: fsubp   st(1), st
0x8EB286: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8EB28A: call    sub_889470
0x8EB28F: lea     ecx, [esp+40h+var_20]
0x8EB293: call    sub_4D6830
0x8EB298: fld     [esp+40h+var_2C]
0x8EB29C: fsqrt
0x8EB29E: movaps  xmm0, [esp+40h+var_10]
0x8EB2A3: movaps  xmm1, xmm0
0x8EB2A6: addps   xmm1, xmm0
0x8EB2A9: movaps  xmm0, [esp+40h+var_20]
0x8EB2AE: lea     ecx, [esi+70h]
0x8EB2B1: movaps  xmmword ptr [esi+90h], xmm1
0x8EB2B8: push    ecx
0x8EB2B9: mov     ecx, esi
0x8EB2BB: fmul    dword ptr ds:0A9AFC8h
0x8EB2C1: fstp    dword ptr [esi+9Ch]
0x8EB2C7: movaps  xmmword ptr [edi], xmm0
0x8EB2CA: call    sub_8B1DD0
0x8EB2CF: movaps  xmm0, xmmword ptr [esi+80h]
0x8EB2D6: movaps  xmm2, xmmword ptr [esi+20h]
0x8EB2DA: movaps  xmm3, xmmword ptr [esi+10h]
0x8EB2DE: movaps  xmm1, xmm0
0x8EB2E1: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EB2E5: mulps   xmm2, xmm1
0x8EB2E8: movaps  xmm1, xmm0
0x8EB2EB: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB2EF: mulps   xmm3, xmm1
0x8EB2F2: movaps  xmm1, xmm0
0x8EB2F5: shufps  xmm1, xmm0, 0
0x8EB2F9: movaps  xmm0, xmmword ptr [esi]
0x8EB2FC: mulps   xmm0, xmm1
0x8EB2FF: movaps  xmm1, xmmword ptr [esi+50h]
0x8EB303: addps   xmm0, xmm3
0x8EB306: addps   xmm0, xmm2
0x8EB309: pop     edi
0x8EB30A: subps   xmm1, xmm0
0x8EB30D: movaps  xmmword ptr [esi+30h], xmm1
0x8EB311: pop     esi
0x8EB312: pop     ebx
0x8EB313: mov     esp, ebp
0x8EB315: pop     ebp
0x8EB316: retn    8
