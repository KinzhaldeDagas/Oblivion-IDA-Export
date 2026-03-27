0x609DF0: push    ebp
0x609DF1: mov     ebp, esp
0x609DF3: and     esp, 0FFFFFFF0h
0x609DF6: sub     esp, 174h
0x609DFC: mov     eax, ds:0B30AACh
0x609E01: xor     eax, esp
0x609E03: mov     [esp+174h+var_4], eax
0x609E0A: mov     eax, [ebp+arg_1C]
0x609E0D: push    ebx
0x609E0E: mov     ebx, [ebp+arg_0]
0x609E11: test    ebx, ebx
0x609E13: push    esi
0x609E14: push    edi
0x609E15: mov     [esp+180h+var_150], ecx
0x609E19: mov     [esp+180h+var_15C], ebx
0x609E1D: mov     [esp+180h+var_158], eax
0x609E21: mov     [esp+180h+var_165], 0
0x609E26: jz      loc_60A1F4
0x609E2C: push    ebx
0x609E2D: call    sub_47FAC0
0x609E32: mov     edi, eax
0x609E34: add     esp, 4
0x609E37: test    edi, edi
0x609E39: jz      loc_60A12C
0x609E3F: mov     esi, [edi+10h]
0x609E42: test    esi, esi
0x609E44: jz      loc_60A12C
0x609E4A: mov     eax, [esi+8]
0x609E4D: test    eax, eax
0x609E4F: jz      short loc_609E63
0x609E51: lea     ecx, [eax+14h]
0x609E54: test    ecx, ecx
0x609E56: jz      short loc_609E63
0x609E58: mov     ecx, [ecx]
0x609E5A: test    ecx, ecx
0x609E5C: jz      short loc_609E63
0x609E5E: mov     ebx, [ecx+8]
0x609E61: jmp     short loc_609E65
0x609E63: xor     ebx, ebx
0x609E65: test    ebx, ebx
0x609E67: jz      loc_60A128
0x609E6D: test    eax, eax
0x609E6F: jz      short loc_609E7B
0x609E71: add     eax, 14h
0x609E74: jz      short loc_609E7B
0x609E76: mov     eax, [eax+1Ch]
0x609E79: jmp     short loc_609E7D
0x609E7B: xor     eax, eax
0x609E7D: and     al, 3Fh
0x609E7F: cmp     al, 8
0x609E81: jnz     loc_60A128
0x609E87: lea     ecx, [esp+180h+var_164]
0x609E8B: push    ecx
0x609E8C: mov     ecx, esi
0x609E8E: call    sub_497340
0x609E93: mov     edx, [eax]
0x609E95: and     edx, 1F00h
0x609E9B: cmp     edx, 1600h
0x609EA1: jz      loc_60A128
0x609EA7: lea     eax, [esp+180h+var_164]
0x609EAB: push    eax
0x609EAC: mov     ecx, esi
0x609EAE: call    sub_497340
0x609EB3: mov     ecx, [eax]
0x609EB5: and     ecx, 1F00h
0x609EBB: cmp     ecx, 1200h
0x609EC1: jz      loc_60A128
0x609EC7: lea     edx, [esp+180h+var_164]
0x609ECB: push    edx
0x609ECC: mov     ecx, esi
0x609ECE: call    sub_497340
0x609ED3: mov     eax, [eax]
0x609ED5: and     eax, 1F00h
0x609EDA: cmp     eax, 1300h
0x609EDF: jz      loc_60A128
0x609EE5: lea     ecx, [esp+180h+var_164]
0x609EE9: push    ecx
0x609EEA: mov     ecx, esi
0x609EEC: call    sub_497340
0x609EF1: mov     edx, [eax]
0x609EF3: and     edx, 1F00h
0x609EF9: cmp     edx, 1400h
0x609EFF: jz      loc_60A128
0x609F05: lea     eax, [esp+180h+var_164]
0x609F09: push    eax
0x609F0A: mov     ecx, esi
0x609F0C: call    sub_497340
0x609F11: mov     ecx, [eax]
0x609F13: and     ecx, 1F00h
0x609F19: cmp     ecx, 1500h
0x609F1F: jz      loc_60A128
0x609F25: cmp     byte ptr [ebp+arg_20], 0
0x609F29: jz      short loc_609F49
0x609F2B: lea     edx, [esp+180h+var_164]
0x609F2F: push    edx
0x609F30: mov     ecx, esi
0x609F32: call    sub_497340
0x609F37: mov     eax, [eax]
0x609F39: and     eax, 1F00h
0x609F3E: cmp     eax, 100h
0x609F43: jz      loc_60A128
0x609F49: lea     ecx, [ebp+arg_4]
0x609F4C: push    ecx
0x609F4D: lea     edx, [esp+184h+var_D0]
0x609F54: push    edx
0x609F55: call    sub_4529E0
0x609F5A: mov     eax, [esp+188h+var_158]
0x609F5E: fld     dword ptr [eax]
0x609F60: lea     ecx, [esp+188h+var_14C]
0x609F64: fstp    [esp+188h+var_164]
0x609F68: push    ecx
0x609F69: fld     [ebp+arg_10]
0x609F6C: lea     edx, [esp+18Ch+var_140]
0x609F70: fld     [esp+18Ch+var_164]
0x609F74: push    edx
0x609F75: fld     st
0x609F77: fmulp   st(2), st
0x609F79: fxch    st(1)
0x609F7B: fstp    [esp+190h+var_140]
0x609F7F: fld     [ebp+arg_14]
0x609F82: fmul    st, st(1)
0x609F84: fstp    [esp+190h+var_13C]
0x609F88: fmul    [ebp+arg_18]
0x609F8B: fstp    [esp+190h+var_138]
0x609F8F: fld     [ebp+arg_4]
0x609F92: fadd    [esp+190h+var_140]
0x609F96: fstp    [esp+190h+var_14C]
0x609F9A: fld     [ebp+arg_8]
0x609F9D: fadd    [esp+190h+var_13C]
0x609FA1: fstp    [esp+190h+var_148]
0x609FA5: fld     [ebp+arg_C]
0x609FA8: fadd    [esp+190h+var_138]
0x609FAC: fstp    [esp+190h+var_144]
0x609FB0: call    sub_4529E0
0x609FB5: fld1
0x609FB7: xor     eax, eax
0x609FB9: push    edi
0x609FBA: fstp    [esp+194h+var_DC]
0x609FC1: push    offset dword_BA7A20
0x609FC6: mov     [esp+198h+var_A0], eax
0x609FCD: mov     [esp+198h+var_9C], eax
0x609FD4: call    NiRTTI__IsObjectOfRTTIType
0x609FD9: add     esp, 18h
0x609FDC: test    al, al
0x609FDE: mov     ecx, esi
0x609FE0: jz      loc_60A0A1
0x609FE6: call    sub_607840
0x609FEB: test    al, al
0x609FED: jz      short loc_60A00F
0x609FEF: fld1
0x609FF1: fcomp   dword ptr [edi+14h]
0x609FF4: fnstsw  ax
0x609FF6: test    ah, 44h
0x609FF9: jnp     short loc_60A00F
0x609FFB: mov     eax, [esi]
0x609FFD: mov     edx, [eax+0ACh]
0x60A003: lea     ecx, [esp+180h+var_130]
0x60A007: push    ecx
0x60A008: mov     ecx, esi
0x60A00A: jmp     loc_60A0AE
0x60A00F: mov     eax, [esp+180h+var_15C]
0x60A013: add     eax, 64h ; 'd'
0x60A016: push    eax
0x60A017: lea     ecx, [esp+184h+var_130]
0x60A01B: push    ecx
0x60A01C: call    sub_5398E0
0x60A021: push    esi
0x60A022: push    offset dword_BA8018
0x60A027: call    NiRTTI__IsObjectOfRTTIType
0x60A02C: add     esp, 10h
0x60A02F: test    al, al
0x60A031: jz      short loc_60A0B0
0x60A033: movaps  xmm0, [esp+180h+var_130]
0x60A038: movaps  [esp+180h+var_90], xmm0
0x60A040: movaps  xmm0, [esp+180h+var_120]
0x60A045: movaps  [esp+180h+var_80], xmm0
0x60A04D: movaps  xmm0, [esp+180h+var_110]
0x60A052: lea     edx, [esi+20h]
0x60A055: movaps  [esp+180h+var_70], xmm0
0x60A05D: movaps  xmm0, [esp+180h+var_100]
0x60A065: push    edx
0x60A066: lea     ecx, [esp+184h+var_50]
0x60A06D: movaps  [esp+184h+var_60], xmm0
0x60A075: call    sub_8B1DD0
0x60A07A: movaps  xmm0, xmmword ptr [esi+30h]
0x60A07E: lea     eax, [esp+180h+var_50]
0x60A085: push    eax
0x60A086: lea     ecx, [esp+184h+var_90]
0x60A08D: push    ecx
0x60A08E: lea     ecx, [esp+188h+var_130]
0x60A092: movaps  [esp+188h+var_20], xmm0
0x60A09A: call    sub_8B1F70
0x60A09F: jmp     short loc_60A0B0
0x60A0A1: mov     edx, [esi]
0x60A0A3: mov     edx, [edx+0ACh]
0x60A0A9: lea     eax, [esp+180h+var_130]
0x60A0AD: push    eax
0x60A0AE: call    edx
0x60A0B0: lea     eax, [esp+180h+var_D0]
0x60A0B7: push    eax
0x60A0B8: lea     ecx, [esp+184h+var_130]
0x60A0BC: push    ecx
0x60A0BD: lea     ecx, [esp+188h+var_C0]
0x60A0C4: call    sub_88FD10
0x60A0C9: lea     edx, [esp+180h+var_140]
0x60A0CD: push    edx
0x60A0CE: lea     eax, [esp+184h+var_130]
0x60A0D2: push    eax
0x60A0D3: lea     ecx, [esp+188h+var_B0]
0x60A0DA: call    sub_88FD10
0x60A0DF: mov     ecx, [ebx+8]
0x60A0E2: mov     edx, [ecx]
0x60A0E4: mov     edx, [edx+14h]
0x60A0E7: lea     eax, [esp+180h+var_F0]
0x60A0EE: push    eax
0x60A0EF: lea     eax, [esp+184h+var_C0]
0x60A0F6: push    eax
0x60A0F7: lea     eax, [esp+188h+var_160+3]
0x60A0FB: push    eax
0x60A0FC: call    edx
0x60A0FE: lea     eax, [esp+180h+var_160+3]
0x60A102: push    eax
0x60A103: lea     ecx, [esp+184h+var_F0]
0x60A10A: call    sub_538A70
0x60A10F: cmp     byte ptr [eax], 0
0x60A112: jz      short loc_60A128
0x60A114: mov     eax, [esp+180h+var_158]
0x60A118: fld     [esp+180h+var_DC]
0x60A11F: fmul    dword ptr [eax]
0x60A121: mov     [esp+180h+var_165], 1
0x60A126: fstp    dword ptr [eax]
0x60A128: mov     ebx, [esp+180h+var_15C]
0x60A12C: mov     edx, [ebx]
0x60A12E: mov     eax, [edx+8]
0x60A131: mov     ecx, ebx
0x60A133: call    eax
0x60A135: mov     edx, eax
0x60A137: test    edx, edx
0x60A139: mov     [esp+180h+var_164], edx
0x60A13D: jz      loc_60A1D4
0x60A143: movzx   eax, word ptr [edx+0B6h]
0x60A14A: xor     ecx, ecx
0x60A14C: test    eax, eax
0x60A14E: mov     [esp+180h+var_154], ecx
0x60A152: jbe     loc_60A1D4
0x60A158: mov     esi, [ebp+arg_18]
0x60A15B: mov     edi, [ebp+arg_14]
0x60A15E: mov     ebx, [ebp+arg_10]
0x60A161: jmp     short loc_60A16B
0x60A163: mov     ecx, [esp+180h+var_154]
0x60A167: mov     edx, [esp+180h+var_164]
0x60A16B: cmp     eax, ecx
0x60A16D: ja      short loc_60A173
0x60A16F: xor     ecx, ecx
0x60A171: jmp     short loc_60A17C
0x60A173: mov     edx, [edx+0B0h]
0x60A179: mov     ecx, [edx+ecx*4]
0x60A17C: mov     eax, [ebp+arg_20]
0x60A17F: mov     edx, [esp+180h+var_158]
0x60A183: push    eax; int
0x60A184: push    edx; int
0x60A185: mov     edx, [ebp+arg_4]
0x60A188: sub     esp, 0Ch
0x60A18B: mov     eax, esp
0x60A18D: mov     [eax], ebx
0x60A18F: mov     [eax+4], edi
0x60A192: mov     [eax+8], esi
0x60A195: sub     esp, 0Ch
0x60A198: mov     eax, esp
0x60A19A: mov     [eax], edx
0x60A19C: mov     edx, [ebp+arg_8]
0x60A19F: mov     [eax+4], edx
0x60A1A2: mov     edx, [ebp+arg_C]
0x60A1A5: push    ecx; int
0x60A1A6: mov     ecx, [esp+1A4h+var_150]
0x60A1AA: mov     [eax+8], edx
0x60A1AD: call    sub_609DF0
0x60A1B2: test    eax, eax
0x60A1B4: jnz     short loc_60A1F6
0x60A1B6: mov     eax, [esp+180h+var_164]
0x60A1BA: mov     ecx, [esp+180h+var_154]
0x60A1BE: movzx   eax, word ptr [eax+0B6h]
0x60A1C5: add     ecx, 1
0x60A1C8: cmp     ecx, eax
0x60A1CA: mov     [esp+180h+var_154], ecx
0x60A1CE: jb      short loc_60A163
0x60A1D0: mov     ebx, [esp+180h+var_15C]
0x60A1D4: cmp     [esp+180h+var_165], 0
0x60A1D9: jz      short loc_60A1F4
0x60A1DB: mov     eax, ebx
0x60A1DD: pop     edi
0x60A1DE: pop     esi
0x60A1DF: pop     ebx
0x60A1E0: mov     ecx, [esp+174h+var_4]
0x60A1E7: xor     ecx, esp
0x60A1E9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60A1EE: mov     esp, ebp
0x60A1F0: pop     ebp
0x60A1F1: retn    24h ; '$'
0x60A1F4: xor     eax, eax
0x60A1F6: mov     ecx, [esp+180h+var_4]
0x60A1FD: pop     edi
0x60A1FE: pop     esi
0x60A1FF: pop     ebx
0x60A200: xor     ecx, esp
0x60A202: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60A207: mov     esp, ebp
0x60A209: pop     ebp
0x60A20A: retn    24h ; '$'
