0x93A7A0: push    ebp
0x93A7A1: mov     ebp, esp
0x93A7A3: and     esp, 0FFFFFFF0h
0x93A7A6: sub     esp, 24h
0x93A7A9: fld     dword ptr ds:0A2FAA8h
0x93A7AF: movaps  xmm1, xmmword ptr [ecx+0C0h]
0x93A7B6: push    ebx
0x93A7B7: push    esi
0x93A7B8: push    edi
0x93A7B9: xor     esi, esi
0x93A7BB: xor     edi, edi
0x93A7BD: mov     [esp+30h+var_18], 0
0x93A7C2: mov     [esp+30h+var_17], 0
0x93A7C7: mov     [esp+30h+var_16], 0
0x93A7CC: mov     [esp+30h+var_15], 0
0x93A7D1: mov     [esp+30h+var_14], 0
0x93A7D6: mov     [esp+30h+var_1C], 7F7FFFFFh
0x93A7DE: xor     edx, edx
0x93A7E0: mov     ebx, ecx
0x93A7E2: movaps  xmm2, xmmword ptr [ebx]
0x93A7E5: movaps  xmm0, xmm1
0x93A7E8: subps   xmm0, xmm2
0x93A7EB: mulps   xmm0, xmm0
0x93A7EE: movaps  xmm2, xmm0
0x93A7F1: shufps  xmm2, xmm0, 55h ; 'U'
0x93A7F5: movaps  xmm3, xmm0
0x93A7F8: lea     eax, [esp+30h+var_24]
0x93A7FC: addss   xmm2, xmm0
0x93A800: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93A804: addss   xmm3, xmm2
0x93A808: movss   dword ptr [eax], xmm3
0x93A80C: fld     [esp+30h+var_24]
0x93A810: fstp    [esp+edx*4+30h+var_10]
0x93A814: fld     [esp+30h+var_24]
0x93A818: fcomp   st(1)
0x93A81A: fnstsw  ax
0x93A81C: test    ah, 41h
0x93A81F: jnz     short loc_93A829
0x93A821: fstp    st
0x93A823: mov     esi, edx
0x93A825: fld     [esp+30h+var_24]
0x93A829: fld     [esp+30h+var_24]
0x93A82D: fcomp   [esp+30h+var_1C]
0x93A831: fnstsw  ax
0x93A833: test    ah, 5
0x93A836: jp      short loc_93A842
0x93A838: mov     eax, [esp+30h+var_24]
0x93A83C: mov     [esp+30h+var_1C], eax
0x93A840: mov     edi, edx
0x93A842: inc     edx
0x93A843: add     ebx, 30h ; '0'
0x93A846: cmp     edx, 4
0x93A849: jl      short loc_93A7E2
0x93A84B: fld     dword ptr [ecx+0DCh]
0x93A851: lea     edx, [edi+edi*2]
0x93A854: shl     edx, 4
0x93A857: fsub    dword ptr [edx+ecx+1Ch]
0x93A85B: lea     eax, [esi+esi*2]
0x93A85E: shl     eax, 4
0x93A861: mov     [esp+esi+30h+var_18], 1
0x93A866: fstp    [esp+30h+var_20]
0x93A86A: mov     edi, 4
0x93A86F: lea     ebx, [eax+ecx]
0x93A872: fmul    dword ptr ds:0AA1DB8h
0x93A878: xor     edx, edx
0x93A87A: mov     esi, ecx
0x93A87C: lea     esp, [esp+0]
0x93A880: mov     al, [esp+edx+30h+var_18]
0x93A884: test    al, al
0x93A886: jnz     short loc_93A8C7
0x93A888: movaps  xmm1, xmmword ptr [esi]
0x93A88B: movaps  xmm0, xmmword ptr [ebx]
0x93A88E: subps   xmm0, xmm1
0x93A891: mulps   xmm0, xmm0
0x93A894: movaps  xmm1, xmm0
0x93A897: shufps  xmm1, xmm0, 55h ; 'U'
0x93A89B: movaps  xmm2, xmm0
0x93A89E: lea     eax, [esp+30h+var_24]
0x93A8A2: addss   xmm1, xmm0
0x93A8A6: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93A8AA: addss   xmm2, xmm1
0x93A8AE: movss   dword ptr [eax], xmm2
0x93A8B2: fld     [esp+30h+var_24]
0x93A8B6: fcomp   st(1)
0x93A8B8: fnstsw  ax
0x93A8BA: test    ah, 41h
0x93A8BD: jnz     short loc_93A8C7
0x93A8BF: fstp    st
0x93A8C1: mov     edi, edx
0x93A8C3: fld     [esp+30h+var_24]
0x93A8C7: inc     edx
0x93A8C8: add     esi, 30h ; '0'
0x93A8CB: cmp     edx, 5
0x93A8CE: jl      short loc_93A880
0x93A8D0: movaps  xmm2, xmmword ptr [ebx]
0x93A8D3: fstp    st
0x93A8D5: fld     dword ptr ds:0A2FAA8h
0x93A8DB: lea     edx, [edi+edi*2]
0x93A8DE: shl     edx, 4
0x93A8E1: movaps  xmm0, xmmword ptr [edx+ecx]
0x93A8E5: mov     [esp+edi+30h+var_18], 1
0x93A8EA: xor     esi, esi
0x93A8EC: movaps  xmm1, xmm2
0x93A8EF: subps   xmm1, xmm0
0x93A8F2: xor     edx, edx
0x93A8F4: mov     edi, ecx
0x93A8F6: mov     al, [esp+edx+30h+var_18]
0x93A8FA: test    al, al
0x93A8FC: jnz     short loc_93A962
0x93A8FE: movaps  xmm0, xmmword ptr [edi]
0x93A901: subps   xmm0, xmm2
0x93A904: movaps  xmm4, xmm0
0x93A907: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93A90B: movaps  xmm5, xmm0
0x93A90E: movaps  xmm3, xmm1
0x93A911: shufps  xmm3, xmm1, 0C9h ; 'É'
0x93A915: mulps   xmm4, xmm3
0x93A918: shufps  xmm5, xmm0, 0C9h ; 'É'
0x93A91C: movaps  xmm3, xmm1
0x93A91F: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x93A923: movaps  xmm0, xmm5
0x93A926: mulps   xmm0, xmm3
0x93A929: subps   xmm0, xmm4
0x93A92C: mulps   xmm0, xmm0
0x93A92F: movaps  xmm3, xmm0
0x93A932: shufps  xmm3, xmm0, 55h ; 'U'
0x93A936: movaps  xmm4, xmm0
0x93A939: lea     eax, [esp+30h+var_24]
0x93A93D: addss   xmm3, xmm0
0x93A941: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93A945: addss   xmm4, xmm3
0x93A949: movss   dword ptr [eax], xmm4
0x93A94D: fld     [esp+30h+var_24]
0x93A951: fcomp   st(1)
0x93A953: fnstsw  ax
0x93A955: test    ah, 41h
0x93A958: jnz     short loc_93A962
0x93A95A: fstp    st
0x93A95C: mov     esi, edx
0x93A95E: fld     [esp+30h+var_24]
0x93A962: inc     edx
0x93A963: add     edi, 30h ; '0'
0x93A966: cmp     edx, 5
0x93A969: jl      short loc_93A8F6
0x93A96B: mov     [esp+esi+30h+var_18], 1
0x93A970: fstp    st
0x93A972: fld     dword ptr ds:0A2FAA8h
0x93A978: lea     esi, [esi+esi*2]
0x93A97B: shl     esi, 4
0x93A97E: xor     ebx, ebx
0x93A980: add     esi, ecx
0x93A982: xor     edx, edx
0x93A984: mov     edi, ecx
0x93A986: mov     al, [esp+edx+30h+var_18]
0x93A98A: test    al, al
0x93A98C: jnz     short loc_93A9CD
0x93A98E: movaps  xmm1, xmmword ptr [edi]
0x93A991: movaps  xmm0, xmmword ptr [esi]
0x93A994: subps   xmm0, xmm1
0x93A997: mulps   xmm0, xmm0
0x93A99A: movaps  xmm1, xmm0
0x93A99D: shufps  xmm1, xmm0, 55h ; 'U'
0x93A9A1: movaps  xmm2, xmm0
0x93A9A4: lea     eax, [esp+30h+var_24]
0x93A9A8: addss   xmm1, xmm0
0x93A9AC: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93A9B0: addss   xmm2, xmm1
0x93A9B4: movss   dword ptr [eax], xmm2
0x93A9B8: fld     [esp+30h+var_24]
0x93A9BC: fcomp   st(1)
0x93A9BE: fnstsw  ax
0x93A9C0: test    ah, 41h
0x93A9C3: jnz     short loc_93A9CD
0x93A9C5: fstp    st
0x93A9C7: mov     ebx, edx
0x93A9C9: fld     [esp+30h+var_24]
0x93A9CD: inc     edx
0x93A9CE: add     edi, 30h ; '0'
0x93A9D1: cmp     edx, 5
0x93A9D4: jl      short loc_93A986
0x93A9D6: mov     [esp+ebx+30h+var_18], 1
0x93A9DB: fstp    st
0x93A9DD: mov     al, [esp+30h+var_14]
0x93A9E1: test    al, al
0x93A9E3: jnz     loc_93AB17
0x93A9E9: fld     [esp+30h+var_20]
0x93A9ED: fcomp   dword ptr ds:0A2FAA8h
0x93A9F3: fnstsw  ax
0x93A9F5: test    ah, 5
0x93A9F8: jp      loc_93AB17
0x93A9FE: fld     [esp+30h+var_20]
0x93AA02: fmul    [esp+30h+var_20]
0x93AA06: fmul    dword ptr ds:0AA1DB4h
0x93AA0C: fcomp   [esp+30h+var_1C]
0x93AA10: fnstsw  ax
0x93AA12: test    ah, 41h
0x93AA15: jnz     loc_93AB17
0x93AA1B: mov     edx, [ecx+0DCh]
0x93AA21: fld     dword ptr ds:0AA1DB0h
0x93AA27: fld     dword ptr [ecx+1Ch]
0x93AA2A: mov     [esp+30h+var_20], edx
0x93AA2E: fsub    [esp+30h+var_20]
0x93AA32: mov     edx, 4
0x93AA37: fld     st
0x93AA39: fmulp   st(1), st
0x93AA3B: fadd    dword ptr ds:0AA1DACh
0x93AA41: fst     [esp+30h+var_24]
0x93AA45: fld     [esp+30h+var_10]
0x93AA49: fmul    dword ptr ds:0AA1DB0h
0x93AA4F: fxch    st(1)
0x93AA51: fcompp
0x93AA53: fnstsw  ax
0x93AA55: test    ah, 41h
0x93AA58: jnz     short loc_93AA6C
0x93AA5A: fstp    st
0x93AA5C: xor     edx, edx
0x93AA5E: fld     [esp+30h+var_10]
0x93AA62: fadd    dword ptr ds:0AA1DACh
0x93AA68: fdivr   [esp+30h+var_24]
0x93AA6C: fld     dword ptr [ecx+4Ch]
0x93AA6F: fsub    [esp+30h+var_20]
0x93AA73: fld     st
0x93AA75: fmulp   st(1), st
0x93AA77: fadd    dword ptr ds:0AA1DACh
0x93AA7D: fst     [esp+30h+var_24]
0x93AA81: fld     [esp+30h+var_C]
0x93AA85: fmul    st, st(2)
0x93AA87: fxch    st(1)
0x93AA89: fcompp
0x93AA8B: fnstsw  ax
0x93AA8D: test    ah, 41h
0x93AA90: jnz     short loc_93AAA7
0x93AA92: fstp    st
0x93AA94: mov     edx, 1
0x93AA99: fld     [esp+30h+var_C]
0x93AA9D: fadd    dword ptr ds:0AA1DACh
0x93AAA3: fdivr   [esp+30h+var_24]
0x93AAA7: fld     dword ptr [ecx+7Ch]
0x93AAAA: fsub    [esp+30h+var_20]
0x93AAAE: fld     st
0x93AAB0: fmulp   st(1), st
0x93AAB2: fadd    dword ptr ds:0AA1DACh
0x93AAB8: fst     [esp+30h+var_24]
0x93AABC: fld     [esp+30h+var_8]
0x93AAC0: fmul    st, st(2)
0x93AAC2: fxch    st(1)
0x93AAC4: fcompp
0x93AAC6: fnstsw  ax
0x93AAC8: test    ah, 41h
0x93AACB: jnz     short loc_93AAE2
0x93AACD: fstp    st
0x93AACF: mov     edx, 2
0x93AAD4: fld     [esp+30h+var_8]
0x93AAD8: fadd    dword ptr ds:0AA1DACh
0x93AADE: fdivr   [esp+30h+var_24]
0x93AAE2: fld     dword ptr [ecx+0ACh]
0x93AAE8: fsub    [esp+30h+var_20]
0x93AAEC: fld     st
0x93AAEE: fmul    st, st(1)
0x93AAF0: fadd    dword ptr ds:0AA1DACh
0x93AAF6: fld     [esp+30h+var_4]
0x93AAFA: fmul    st, st(3)
0x93AAFC: fcompp
0x93AAFE: fnstsw  ax
0x93AB00: fstp    st
0x93AB02: test    ah, 5
0x93AB05: fstp    st
0x93AB07: jp      short loc_93AB0E
0x93AB09: mov     edx, 3
0x93AB0E: mov     eax, edx
0x93AB10: pop     edi
0x93AB11: pop     esi
0x93AB12: pop     ebx
0x93AB13: mov     esp, ebp
0x93AB15: pop     ebp
0x93AB16: retn
0x93AB17: xor     eax, eax
0x93AB19: lea     esp, [esp+0]
0x93AB20: mov     cl, [esp+eax+30h+var_18]
0x93AB24: test    cl, cl
0x93AB26: jz      short loc_93AB30
0x93AB28: inc     eax
0x93AB29: cmp     eax, 5
0x93AB2C: jl      short loc_93AB20
0x93AB2E: xor     eax, eax
0x93AB30: pop     edi
0x93AB31: pop     esi
0x93AB32: pop     ebx
0x93AB33: mov     esp, ebp
0x93AB35: pop     ebp
0x93AB36: retn
