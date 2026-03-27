0x8EC790: push    ebp
0x8EC791: mov     ebp, esp
0x8EC793: and     esp, 0FFFFFFF0h
0x8EC796: sub     esp, 64h
0x8EC799: push    ebx
0x8EC79A: push    esi
0x8EC79B: mov     esi, [ebp+arg_4]
0x8EC79E: push    edi
0x8EC79F: mov     edi, [ebp+arg_0]
0x8EC7A2: mov     eax, [edi+40h]
0x8EC7A5: movaps  xmm0, xmmword ptr [edi+10h]
0x8EC7A9: movaps  xmmword ptr [esi+10h], xmm0
0x8EC7AD: movaps  xmm0, xmmword ptr [edi]
0x8EC7B0: xor     ebx, ebx
0x8EC7B2: mov     [esp+70h+var_60], eax
0x8EC7B6: movaps  xmmword ptr [esi], xmm0
0x8EC7B9: mov     eax, [edi+4Ch]
0x8EC7BC: xor     ecx, ecx
0x8EC7BE: test    eax, eax
0x8EC7C0: mov     [esp+70h+var_10], ebx
0x8EC7C4: mov     [esp+70h+var_C], ebx
0x8EC7C8: mov     [esp+70h+var_8], edi
0x8EC7CC: mov     [esp+70h+var_4], esi
0x8EC7D0: jle     short loc_8EC800
0x8EC7D2: xor     edx, edx
0x8EC7D4: mov     eax, [esi+24h]
0x8EC7D7: add     eax, edx
0x8EC7D9: mov     byte ptr [eax+1], 0
0x8EC7DD: mov     byte ptr [eax], 0
0x8EC7E0: mov     dword ptr [eax+4], 0
0x8EC7E7: mov     dword ptr [eax+8], 0
0x8EC7EE: mov     dword ptr [eax+0Ch], 0
0x8EC7F5: mov     eax, [edi+4Ch]
0x8EC7F8: inc     ecx
0x8EC7F9: add     edx, 10h
0x8EC7FC: cmp     ecx, eax
0x8EC7FE: jl      short loc_8EC7D4
0x8EC800: fld     [esp+70h+var_60]
0x8EC804: fcomp   dword ptr ds:0A2FAA8h
0x8EC80A: fnstsw  ax
0x8EC80C: test    ah, 1
0x8EC80F: jnz     loc_8ECA80
0x8EC815: jmp     short loc_8EC820
0x8EC817: mov     ebx, [esp+70h+var_10]
0x8EC81B: jmp     short loc_8EC820
0x8EC81D: align 10h
0x8EC820: mov     ecx, [esp+70h+var_60]
0x8EC824: mov     eax, [edi+4Ch]
0x8EC827: or      edx, 0FFFFFFFFh
0x8EC82A: mov     [esp+70h+var_64], ecx
0x8EC82E: xor     ecx, ecx
0x8EC830: test    eax, eax
0x8EC832: mov     [esp+70h+var_54], edx
0x8EC836: jle     loc_8EC990
0x8EC83C: xor     edx, edx
0x8EC83E: mov     [esp+70h+var_58], edx
0x8EC842: cmp     ebx, 1
0x8EC845: jl      short loc_8EC851
0x8EC847: cmp     [esp+70h+var_40], ecx
0x8EC84B: jz      loc_8EC978
0x8EC851: cmp     ebx, 2
0x8EC854: jl      short loc_8EC860
0x8EC856: cmp     [esp+70h+var_34], ecx
0x8EC85A: jz      loc_8EC978
0x8EC860: cmp     ebx, 3
0x8EC863: jl      short loc_8EC86F
0x8EC865: cmp     [esp+70h+var_28], ecx
0x8EC869: jz      loc_8EC978
0x8EC86F: mov     eax, [esi+24h]
0x8EC872: cmp     dword ptr [eax+edx+0Ch], 0
0x8EC877: jnz     loc_8EC978
0x8EC87D: mov     eax, [edi+48h]
0x8EC880: mov     ebx, [esp+70h+var_58]
0x8EC884: movaps  xmm2, xmmword ptr [eax+ebx+10h]
0x8EC889: movaps  xmm1, xmmword ptr [eax+ebx]
0x8EC88D: movaps  xmm0, xmmword ptr [esi+10h]
0x8EC891: add     eax, ebx
0x8EC893: subps   xmm0, xmm2
0x8EC896: mulps   xmm0, xmm1
0x8EC899: movaps  xmm3, xmm0
0x8EC89C: shufps  xmm3, xmm0, 55h ; 'U'
0x8EC8A0: movaps  xmm4, xmm0
0x8EC8A3: lea     eax, [esp+70h+var_4C]
0x8EC8A7: addss   xmm3, xmm0
0x8EC8AB: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8EC8AF: addss   xmm4, xmm3
0x8EC8B3: movss   dword ptr [eax], xmm4
0x8EC8B7: fld     [esp+70h+var_4C]
0x8EC8BB: fchs
0x8EC8BD: fst     [esp+70h+var_5C]
0x8EC8C1: fcomp   dword ptr ds:0A2FAA8h
0x8EC8C7: fnstsw  ax
0x8EC8C9: test    ah, 41h
0x8EC8CC: jnp     loc_8EC974
0x8EC8D2: fld     [esp+70h+var_C]
0x8EC8D6: lea     eax, [esp+70h+var_50]
0x8EC8DA: fchs
0x8EC8DC: fstp    [esp+70h+var_48]
0x8EC8E0: movss   xmm0, [esp+70h+var_48]
0x8EC8E6: movaps  xmm3, xmm0
0x8EC8E9: shufps  xmm3, xmm0, 0
0x8EC8ED: movaps  xmm0, xmmword ptr [esi]
0x8EC8F0: mulps   xmm3, xmm2
0x8EC8F3: addps   xmm0, xmm3
0x8EC8F6: movaps  xmm2, xmm0
0x8EC8F9: movaps  xmm0, xmm1
0x8EC8FC: mulps   xmm0, xmm2
0x8EC8FF: movaps  xmm2, xmm1
0x8EC902: shufps  xmm2, xmm1, 0FFh
0x8EC906: movaps  xmm1, xmm0
0x8EC909: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EC90D: addss   xmm1, xmm2
0x8EC911: movaps  xmm2, xmm0
0x8EC914: shufps  xmm2, xmm0, 55h ; 'U'
0x8EC918: addss   xmm2, xmm0
0x8EC91C: addps   xmm2, xmm1
0x8EC91F: movss   dword ptr [eax], xmm2
0x8EC923: fld     [esp+70h+var_50]
0x8EC927: fld     [esp+70h+var_50]
0x8EC92B: fcomp   dword ptr ds:0A9AFD8h
0x8EC931: fnstsw  ax
0x8EC933: test    ah, 41h
0x8EC936: jp      short loc_8EC940
0x8EC938: fstp    st
0x8EC93A: fld     dword ptr ds:0A2FAA8h
0x8EC940: mov     eax, [esp+70h+var_4]
0x8EC944: mov     eax, [eax+24h]
0x8EC947: fadd    dword ptr [eax+edx+8]
0x8EC94B: mov     ebx, [esp+70h+var_10]
0x8EC94F: fld     [esp+70h+var_5C]
0x8EC953: fmul    [esp+70h+var_64]
0x8EC957: fld     st(1)
0x8EC959: fcompp
0x8EC95B: fnstsw  ax
0x8EC95D: test    ah, 5
0x8EC960: jp      short loc_8EC970
0x8EC962: fdiv    [esp+70h+var_5C]
0x8EC966: mov     [esp+70h+var_54], ecx
0x8EC96A: fstp    [esp+70h+var_64]
0x8EC96E: jmp     short loc_8EC978
0x8EC970: fstp    st
0x8EC972: jmp     short loc_8EC978
0x8EC974: mov     ebx, [esp+70h+var_10]
0x8EC978: add     [esp+70h+var_58], 40h ; '@'
0x8EC97D: mov     eax, [edi+4Ch]
0x8EC980: inc     ecx
0x8EC981: add     edx, 10h
0x8EC984: cmp     ecx, eax
0x8EC986: jl      loc_8EC842
0x8EC98C: mov     edx, [esp+70h+var_54]
0x8EC990: fld     [esp+70h+var_64]
0x8EC994: fcomp   dword ptr ds:0A79DB4h
0x8EC99A: fnstsw  ax
0x8EC99C: test    ah, 41h
0x8EC99F: jnz     short loc_8ECA1A
0x8EC9A1: test    ebx, ebx
0x8EC9A3: fld     [esp+70h+var_64]
0x8EC9A7: fadd    [esp+70h+var_C]
0x8EC9AB: mov     ecx, [esp+70h+var_64]
0x8EC9AF: movaps  xmm1, xmmword ptr [esi+10h]
0x8EC9B3: mov     [esp+70h+var_44], ecx
0x8EC9B7: movss   xmm0, [esp+70h+var_44]
0x8EC9BD: fst     [esp+70h+var_C]
0x8EC9C1: fld     [esp+70h+var_60]
0x8EC9C5: movaps  xmm2, xmm0
0x8EC9C8: fsub    [esp+70h+var_64]
0x8EC9CC: shufps  xmm2, xmm0, 0
0x8EC9D0: movaps  xmm0, xmmword ptr [esi]
0x8EC9D3: mulps   xmm2, xmm1
0x8EC9D6: addps   xmm0, xmm2
0x8EC9D9: fstp    [esp+70h+var_60]
0x8EC9DD: movaps  xmmword ptr [esi], xmm0
0x8EC9E0: jle     short loc_8ECA09
0x8EC9E2: lea     ecx, [esp+70h+var_38]
0x8EC9E6: mov     edx, ebx
0x8EC9E8: jmp     short loc_8EC9F0
0x8EC9EA: align 10h
0x8EC9F0: mov     eax, [ecx]
0x8EC9F2: fld     [esp+70h+var_64]
0x8EC9F6: fadd    dword ptr [eax+4]
0x8EC9F9: add     ecx, 0Ch
0x8EC9FC: dec     edx
0x8EC9FD: fstp    dword ptr [eax+4]
0x8ECA00: mov     byte ptr [eax], 1
0x8ECA03: jnz     short loc_8EC9F0
0x8ECA05: mov     edx, [esp+70h+var_54]
0x8ECA09: mov     eax, [esp+70h+var_8]
0x8ECA0D: fst     dword ptr [esi+20h]
0x8ECA10: fcomp   dword ptr [eax+44h]
0x8ECA13: fnstsw  ax
0x8ECA15: test    ah, 41h
0x8ECA18: jz      short loc_8ECA80
0x8ECA1A: test    edx, edx
0x8ECA1C: jl      short loc_8ECA7A
0x8ECA1E: lea     eax, [ebx+ebx*2]
0x8ECA21: inc     ebx
0x8ECA22: mov     [esp+70h+var_10], ebx
0x8ECA26: mov     ebx, [edi+48h]
0x8ECA29: mov     ecx, edx
0x8ECA2B: shl     ecx, 6
0x8ECA2E: add     ecx, ebx
0x8ECA30: mov     ebx, [esi+24h]
0x8ECA33: lea     eax, [esp+eax*4+70h+var_40]
0x8ECA37: mov     [eax+4], ecx
0x8ECA3A: mov     ecx, edx
0x8ECA3C: shl     ecx, 4
0x8ECA3F: fld     dword ptr [ecx+ebx+8]
0x8ECA43: add     ecx, ebx
0x8ECA45: fadd    dword ptr ds:0A9AFD8h
0x8ECA4B: mov     [eax+8], ecx
0x8ECA4E: mov     [eax], edx
0x8ECA50: lea     eax, [esp+70h+var_40]
0x8ECA54: fadd    st, st
0x8ECA56: fstp    dword ptr [ecx+8]
0x8ECA59: call    sub_8EC340
0x8ECA5E: fld     [esp+70h+var_60]
0x8ECA62: fcomp   dword ptr ds:0A2FAA8h
0x8ECA68: fnstsw  ax
0x8ECA6A: test    ah, 1
0x8ECA6D: jz      loc_8EC817
0x8ECA73: pop     edi
0x8ECA74: pop     esi
0x8ECA75: pop     ebx
0x8ECA76: mov     esp, ebp
0x8ECA78: pop     ebp
0x8ECA79: retn
0x8ECA7A: mov     edx, [edi+40h]
0x8ECA7D: mov     [esi+20h], edx
0x8ECA80: pop     edi
0x8ECA81: pop     esi
0x8ECA82: pop     ebx
0x8ECA83: mov     esp, ebp
0x8ECA85: pop     ebp
0x8ECA86: retn
