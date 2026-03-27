0x8F5350: push    ebp
0x8F5351: mov     ebp, esp
0x8F5353: and     esp, 0FFFFFFF0h
0x8F5356: sub     esp, 34h
0x8F5359: mov     edx, ds:0BA9DE4h
0x8F535F: push    ebx
0x8F5360: mov     [esp+38h+var_2C], ecx
0x8F5364: mov     ecx, large fs:2Ch
0x8F536B: mov     eax, [ecx+edx*4]
0x8F536E: push    esi
0x8F536F: mov     esi, [eax+1A4h]
0x8F5375: push    edi
0x8F5376: cmp     esi, [eax+1A8h]
0x8F537C: jnb     short loc_8F53A2
0x8F537E: mov     edi, eax
0x8F5380: mov     esi, [edi+1A4h]
0x8F5386: mov     dword ptr [esi], offset aTtrcmultispher; "TtrcMultiSpher"
0x8F538C: rdtsc
0x8F538E: mov     [esp+40h+var_30], eax
0x8F5392: mov     eax, [esp+40h+var_30]
0x8F5396: mov     [esi+4], eax
0x8F5399: add     esi, 0Ch
0x8F539C: mov     [edi+1A4h], esi
0x8F53A2: mov     esi, [esp+40h+var_2C]
0x8F53A6: mov     eax, [esi+0Ch]
0x8F53A9: xor     bl, bl
0x8F53AB: xor     edi, edi
0x8F53AD: test    eax, eax
0x8F53AF: jle     loc_8F5592
0x8F53B5: mov     edx, [ebp+arg_8]
0x8F53B8: add     esi, 1Ch
0x8F53BB: jmp     short loc_8F53C0
0x8F53BD: align 10h
0x8F53C0: mov     eax, [ebp+arg_4]
0x8F53C3: movaps  xmm0, xmmword ptr [esi-0Ch]
0x8F53C7: add     eax, 10h
0x8F53CA: mov     ecx, [eax]
0x8F53CC: mov     dword ptr [esp+40h+var_20], ecx
0x8F53D0: mov     ecx, [eax+4]
0x8F53D3: mov     dword ptr [esp+40h+var_20+4], ecx
0x8F53D7: mov     ecx, [eax+8]
0x8F53DA: mov     eax, [eax+0Ch]
0x8F53DD: mov     dword ptr [esp+40h+var_20+8], ecx
0x8F53E1: mov     ecx, [ebp+arg_4]
0x8F53E4: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8F53E8: mov     eax, [ecx]
0x8F53EA: movaps  xmm2, [esp+40h+var_20]
0x8F53EF: mov     dword ptr [esp+40h+var_10], eax
0x8F53F3: mov     eax, [ecx+4]
0x8F53F6: mov     dword ptr [esp+40h+var_10+4], eax
0x8F53FA: mov     eax, [ecx+8]
0x8F53FD: mov     ecx, [ecx+0Ch]
0x8F5400: subps   xmm2, xmm0
0x8F5403: mov     dword ptr [esp+40h+var_10+8], eax
0x8F5407: mov     dword ptr [esp+40h+var_10+0Ch], ecx
0x8F540B: movaps  xmm1, [esp+40h+var_10]
0x8F5410: subps   xmm1, xmm0
0x8F5413: movaps  xmm0, xmm1
0x8F5416: mulps   xmm0, xmm1
0x8F5419: movaps  xmm4, xmm0
0x8F541C: shufps  xmm4, xmm0, 55h ; 'U'
0x8F5420: addss   xmm4, xmm0
0x8F5424: movaps  xmm5, xmm0
0x8F5427: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F542B: addss   xmm5, xmm4
0x8F542F: movaps  xmm3, xmm2
0x8F5432: subps   xmm3, xmm1
0x8F5435: lea     eax, [esp+40h+var_24]
0x8F5439: movss   dword ptr [eax], xmm5
0x8F543D: movaps  xmm0, xmm3
0x8F5440: mulps   xmm0, xmm1
0x8F5443: movaps  xmm4, xmm0
0x8F5446: shufps  xmm4, xmm0, 55h ; 'U'
0x8F544A: movaps  xmm5, xmm0
0x8F544D: addss   xmm4, xmm0
0x8F5451: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F5455: lea     ecx, [esp+40h+var_28]
0x8F5459: addss   xmm5, xmm4
0x8F545D: movss   dword ptr [ecx], xmm5
0x8F5461: fld     [esp+40h+var_28]
0x8F5465: fadd    st, st
0x8F5467: movaps  [esp+40h+var_20], xmm2
0x8F546C: movaps  [esp+40h+var_10], xmm1
0x8F5471: fst     [esp+40h+var_34]
0x8F5475: fcomp   dword ptr ds:0A2FAA8h
0x8F547B: fnstsw  ax
0x8F547D: test    ah, 1
0x8F5480: jz      loc_8F5578
0x8F5486: fld     dword ptr [esi]
0x8F5488: movaps  xmm0, xmm3
0x8F548B: fld     [esp+40h+var_34]
0x8F548F: mulps   xmm0, xmm3
0x8F5492: fmul    [esp+40h+var_34]
0x8F5496: movaps  xmm3, xmm0
0x8F5499: fld     st(1)
0x8F549B: shufps  xmm3, xmm0, 55h ; 'U'
0x8F549F: fmul    st, st(2)
0x8F54A1: movaps  xmm4, xmm0
0x8F54A4: lea     eax, [esp+40h+var_30]
0x8F54A8: addss   xmm3, xmm0
0x8F54AC: fsubr   [esp+40h+var_24]
0x8F54B0: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F54B4: addss   xmm4, xmm3
0x8F54B8: movss   dword ptr [eax], xmm4
0x8F54BC: fmul    [esp+40h+var_30]
0x8F54C0: fmul    dword ptr ds:0A46B10h
0x8F54C6: fsubp   st(1), st
0x8F54C8: fstp    st(1)
0x8F54CA: fcom    dword ptr ds:0A2FAA8h
0x8F54D0: fnstsw  ax
0x8F54D2: test    ah, 41h
0x8F54D5: jnp     loc_8F5576
0x8F54DB: fld     [esp+40h+var_34]
0x8F54DF: fchs
0x8F54E1: fxch    st(1)
0x8F54E3: fsqrt
0x8F54E5: fxch    st(1)
0x8F54E7: fxch    st(1)
0x8F54E9: fsubp   st(1), st
0x8F54EB: fmul    dword ptr ds:0A3D65Ch
0x8F54F1: fst     [esp+40h+var_34]
0x8F54F5: fcomp   [esp+40h+var_30]
0x8F54F9: fnstsw  ax
0x8F54FB: test    ah, 1
0x8F54FE: jz      short loc_8F5578
0x8F5500: fld     [esp+40h+var_34]
0x8F5504: fcomp   dword ptr ds:0A2FAA8h
0x8F550A: fnstsw  ax
0x8F550C: test    ah, 5
0x8F550F: jnp     short loc_8F5578
0x8F5511: fld     [esp+40h+var_34]
0x8F5515: fdiv    [esp+40h+var_30]
0x8F5519: fcom    dword ptr [edx+14h]
0x8F551C: fnstsw  ax
0x8F551E: test    ah, 5
0x8F5521: jp      short loc_8F5576
0x8F5523: fst     dword ptr [edx+14h]
0x8F5526: mov     bl, 1
0x8F5528: fstp    [esp+40h+var_34]
0x8F552C: movss   xmm0, [esp+40h+var_34]
0x8F5532: fld     dword ptr ds:0A2F948h
0x8F5538: shufps  xmm0, xmm0, 0
0x8F553C: movaps  xmm3, xmm0
0x8F553F: mulps   xmm3, xmm2
0x8F5542: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8F5549: subps   xmm2, xmm0
0x8F554C: movaps  xmm0, xmm2
0x8F554F: mulps   xmm0, xmm1
0x8F5552: addps   xmm0, xmm3
0x8F5555: movaps  xmmword ptr [edx], xmm0
0x8F5558: fdiv    dword ptr [esi]
0x8F555A: mov     [edx+10h], edi
0x8F555D: fstp    [esp+40h+var_34]
0x8F5561: movss   xmm1, [esp+40h+var_34]
0x8F5567: movaps  xmm2, xmm1
0x8F556A: shufps  xmm2, xmm1, 0
0x8F556E: mulps   xmm2, xmm0
0x8F5571: movaps  xmmword ptr [edx], xmm2
0x8F5574: jmp     short loc_8F5578
0x8F5576: fstp    st
0x8F5578: mov     ecx, [esp+40h+var_2C]
0x8F557C: mov     eax, [ecx+0Ch]
0x8F557F: inc     edi
0x8F5580: add     esi, 10h
0x8F5583: cmp     edi, eax
0x8F5585: jl      loc_8F53C0
0x8F558B: mov     ecx, large fs:2Ch
0x8F5592: mov     edx, ds:0BA9DE4h
0x8F5598: mov     eax, [ecx+edx*4]
0x8F559B: mov     esi, [eax+1A4h]
0x8F55A1: cmp     esi, [eax+1A8h]
0x8F55A7: jnb     short loc_8F55CD
0x8F55A9: mov     esi, eax
0x8F55AB: mov     ecx, [esi+1A4h]
0x8F55B1: mov     dword ptr [ecx], offset aEt; "Et"
0x8F55B7: rdtsc
0x8F55B9: mov     [esp+40h+var_24], eax
0x8F55BD: mov     edx, [esp+40h+var_24]
0x8F55C1: mov     [ecx+4], edx
0x8F55C4: add     ecx, 0Ch
0x8F55C7: mov     [esi+1A4h], ecx
0x8F55CD: mov     eax, [ebp+arg_0]
0x8F55D0: pop     edi
0x8F55D1: pop     esi
0x8F55D2: mov     [eax], bl
0x8F55D4: pop     ebx
0x8F55D5: mov     esp, ebp
0x8F55D7: pop     ebp
0x8F55D8: retn    0Ch
