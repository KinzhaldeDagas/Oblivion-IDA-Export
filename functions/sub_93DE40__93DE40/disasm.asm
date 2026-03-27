0x93DE40: push    ebp
0x93DE41: mov     ebp, esp
0x93DE43: and     esp, 0FFFFFFF0h
0x93DE46: sub     esp, 3A4h
0x93DE4C: mov     ecx, large fs:2Ch
0x93DE53: mov     edx, ds:0BA9DE4h
0x93DE59: mov     eax, [ecx+edx*4]
0x93DE5C: push    ebx
0x93DE5D: push    esi
0x93DE5E: mov     esi, [eax+1A4h]
0x93DE64: push    edi
0x93DE65: cmp     esi, [eax+1A8h]
0x93DE6B: jnb     short loc_93DE98
0x93DE6D: mov     esi, eax
0x93DE6F: mov     ecx, [esi+1A4h]
0x93DE75: mov     dword ptr [ecx], offset aLttoi_0; "LtToi"
0x93DE7B: mov     dword ptr [ecx+0Ch], offset aSetup; "setup"
0x93DE82: rdtsc
0x93DE84: mov     [esp+3B0h+var_398], eax
0x93DE88: mov     eax, [esp+3B0h+var_398]
0x93DE8C: mov     [ecx+4], eax
0x93DE8F: add     ecx, 10h
0x93DE92: mov     [esi+1A4h], ecx
0x93DE98: mov     esi, [ebp+arg_0]
0x93DE9B: fld     [ebp+arg_4]
0x93DE9E: mov     ebx, [esi+8]
0x93DEA1: mov     ecx, [ebx+28h]
0x93DEA4: fmul    dword ptr [ecx+2Ch]
0x93DEA7: mov     eax, [ebp+arg_C]
0x93DEAA: mov     edx, [ebp+arg_8]
0x93DEAD: mov     dword ptr [esp+3B0h+var_358+8], eax
0x93DEB1: fstp    [esp+3B0h+var_340]
0x93DEB5: mov     dword ptr [esp+3B0h+var_358+0Ch], edx
0x93DEB9: fld     dword ptr [ecx+20h]
0x93DEBC: fld     [ebp+arg_4]
0x93DEBF: fmul    dword ptr [ecx+1Ch]
0x93DEC2: fst     [esp+3B0h+var_398]
0x93DEC6: fcomp   st(1)
0x93DEC8: fnstsw  ax
0x93DECA: test    ah, 41h
0x93DECD: jnz     short loc_93DED5
0x93DECF: fstp    st
0x93DED1: fld     [esp+3B0h+var_398]
0x93DED5: fmul    dword ptr [ebx+1Ch]
0x93DED8: mov     ecx, [ecx+34h]
0x93DEDB: mov     edx, [esi+4]
0x93DEDE: mov     edi, [edx]
0x93DEE0: mov     edx, [edx+8]
0x93DEE3: fstp    [esp+3B0h+var_348]
0x93DEE7: mov     eax, [esi]
0x93DEE9: mov     [esp+3B0h+var_344], ecx
0x93DEED: mov     ecx, [eax]
0x93DEEF: mov     dword ptr [esp+3B0h+var_384+8], edi
0x93DEF3: mov     edi, [eax+8]
0x93DEF6: xor     eax, eax
0x93DEF8: mov     dword ptr [esp+3B0h+var_2D8], eax
0x93DEFF: fld     dword ptr [ebx+18h]
0x93DF02: fld     dword ptr [edx+5Ch]
0x93DF05: movaps  xmm1, xmmword ptr [edi+90h]
0x93DF0C: mov     ebx, [ebp+arg_10]
0x93DF0F: fld     st(1)
0x93DF11: fmul    dword ptr [edi+5Ch]
0x93DF14: mov     [esp+3B0h+var_374], edx
0x93DF18: mov     [esp+3B0h+var_364], al
0x93DF1C: mov     byte ptr [esp+3B0h+var_324], al
0x93DF23: fstp    [esp+3B0h+var_398]
0x93DF27: movss   xmm0, [esp+3B0h+var_398]
0x93DF2D: movaps  xmm2, xmm0
0x93DF30: shufps  xmm2, xmm0, 0
0x93DF34: fmul    st, st(1)
0x93DF36: mulps   xmm2, xmm1
0x93DF39: movaps  [esp+3B0h+anonymous_1], xmm2
0x93DF41: movaps  xmm1, xmmword ptr [edx+90h]
0x93DF48: fstp    [esp+3B0h+var_398]
0x93DF4C: movsx   edx, byte ptr [ebx+8]
0x93DF50: movss   xmm0, [esp+3B0h+var_398]
0x93DF56: fstp    st
0x93DF58: mov     [esp+3B0h+var_180], edx
0x93DF5F: movsx   edx, byte ptr [ebx+9]
0x93DF63: mov     [esp+3B0h+var_17C], edx
0x93DF6A: movsx   edx, byte ptr [ebx+0Ah]
0x93DF6E: mov     dword ptr [esp+3B0h+var_178], edx
0x93DF75: movsx   edx, byte ptr [ebx+0Bh]
0x93DF79: mov     dword ptr [esp+3B0h+var_178+4], edx
0x93DF80: lea     edx, [esp+3B0h+var_160]
0x93DF87: push    edx
0x93DF88: mov     edx, [esp+3B4h+var_180]
0x93DF8F: movaps  xmm2, xmm0
0x93DF92: shufps  xmm2, xmm0, 0
0x93DF96: mulps   xmm2, xmm1
0x93DF99: push    edx
0x93DF9A: movaps  [esp+3B8h+var_270], xmm2
0x93DFA2: mov     [esp+3B8h+var_35C], eax
0x93DFA6: mov     byte ptr [esp+3B8h+var_178+8], al
0x93DFAD: mov     dword ptr [esp+3B8h+var_178+0Ch], eax
0x93DFB4: mov     eax, [ecx]
0x93DFB6: push    ebx
0x93DFB7: mov     [esp+3BCh+var_394], ecx
0x93DFBB: mov     [esp+3BCh+var_374+4], edi
0x93DFBF: call    dword ptr [eax+28h]
0x93DFC2: mov     ecx, dword ptr [esp+3B0h+var_384+8]
0x93DFC6: mov     eax, [ecx]
0x93DFC8: lea     edx, [esp+3B0h+var_A0]
0x93DFCF: push    edx
0x93DFD0: mov     edx, [esp+3B4h+var_17C]
0x93DFD7: push    edx
0x93DFD8: mov     edx, [esp+3B8h+var_180]
0x93DFDF: lea     edx, [ebx+edx*2]
0x93DFE2: push    edx
0x93DFE3: call    dword ptr [eax+28h]
0x93DFE6: fld     [esp+3B0h+var_340]
0x93DFEA: mov     ebx, [ebp+arg_14]
0x93DFED: fadd    [ebp+arg_C]
0x93DFF0: mov     eax, [ebx+0Ch]
0x93DFF3: mov     edx, eax
0x93DFF5: fstp    [esp+3B0h+var_398]
0x93DFF9: mov     [esp+3B0h+var_38C], edx
0x93DFFD: fld     [esp+3B0h+var_38C]
0x93E001: mov     [esp+3B0h+var_360], eax
0x93E005: fcomp   [esp+3B0h+var_398]
0x93E009: mov     ecx, 1
0x93E00E: mov     [esp+3B0h+var_390], 0
0x93E016: mov     dword ptr [esp+3B0h+var_384+0Ch], 0
0x93E01E: fnstsw  ax
0x93E020: test    ah, 41h
0x93E023: jnp     loc_93E6C8
0x93E029: jmp     short loc_93E030
0x93E02B: mov     edi, [esp+3B0h+var_374+4]
0x93E02F: nop
0x93E030: fld     dword ptr ds:0A2F948h
0x93E036: fsub    [esp+3B0h+var_390]
0x93E03A: fcom    dword ptr ds:0A2FAA8h
0x93E040: fnstsw  ax
0x93E042: test    ah, 41h
0x93E045: jnp     loc_93ED7E
0x93E04B: movaps  xmm1, xmmword ptr [ebx]
0x93E04E: movaps  xmm0, [esp+3B0h+anonymous_1]
0x93E056: movaps  xmm4, xmm0
0x93E059: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93E05D: movaps  xmm5, xmm0
0x93E060: shufps  xmm5, xmm0, 0C9h ; 'É'
0x93E064: movaps  xmm2, xmm1
0x93E067: shufps  xmm2, xmm1, 0C9h ; 'É'
0x93E06B: mulps   xmm4, xmm2
0x93E06E: movaps  xmm3, xmm1
0x93E071: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x93E075: movaps  xmm0, xmm5
0x93E078: mulps   xmm0, xmm3
0x93E07B: subps   xmm0, xmm4
0x93E07E: movaps  xmm4, [esp+3B0h+var_270]
0x93E086: mulps   xmm0, xmm0
0x93E089: mov     edx, [esp+3B0h+var_374]
0x93E08D: movaps  xmm5, xmm4
0x93E090: shufps  xmm5, xmm4, 0D2h ; 'Ò'
0x93E094: mulps   xmm5, xmm2
0x93E097: movaps  xmm2, xmm4
0x93E09A: shufps  xmm2, xmm4, 0C9h ; 'É'
0x93E09E: mulps   xmm2, xmm3
0x93E0A1: movaps  xmm3, xmm0
0x93E0A4: shufps  xmm3, xmm0, 55h ; 'U'
0x93E0A8: addss   xmm3, xmm0
0x93E0AC: movaps  xmm4, xmm0
0x93E0AF: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93E0B3: movaps  xmm0, xmm4
0x93E0B6: addss   xmm0, xmm3
0x93E0BA: movaps  [esp+3B0h+var_320], xmm0
0x93E0C2: sqrtss  xmm0, xmm0
0x93E0C6: movss   dword ptr [esp+3B0h+var_320], xmm0
0x93E0CF: movaps  xmm0, [esp+3B0h+var_320]
0x93E0D7: subps   xmm2, xmm5
0x93E0DA: lea     eax, [esp+3B0h+var_308+4]
0x93E0E1: movss   dword ptr [eax], xmm0
0x93E0E5: movaps  xmm0, xmm2
0x93E0E8: mulps   xmm0, xmm2
0x93E0EB: movaps  xmm2, xmm0
0x93E0EE: shufps  xmm2, xmm0, 55h ; 'U'
0x93E0F2: movaps  xmm3, xmm0
0x93E0F5: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93E0F9: addss   xmm2, xmm0
0x93E0FD: movaps  xmm0, xmm3
0x93E100: addss   xmm0, xmm2
0x93E104: movaps  xmm2, xmmword ptr [esi+60h]
0x93E108: movaps  [esp+3B0h+var_320], xmm0
0x93E110: sqrtss  xmm0, xmm0
0x93E114: movss   dword ptr [esp+3B0h+var_320], xmm0
0x93E11D: movaps  xmm0, [esp+3B0h+var_320]
0x93E125: lea     ecx, [esp+3B0h+anonymous_0]
0x93E12C: movss   dword ptr [ecx], xmm0
0x93E130: fld     [esp+3B0h+anonymous_0]
0x93E137: fmul    dword ptr [edx+0A0h]
0x93E13D: movaps  xmm0, xmm2
0x93E140: fld     dword ptr [esp+3B0h+var_308+4]
0x93E147: mulps   xmm0, xmm1
0x93E14A: fmul    dword ptr [edi+0A0h]
0x93E150: movaps  xmm1, xmm0
0x93E153: shufps  xmm1, xmm0, 55h ; 'U'
0x93E157: faddp   st(1), st
0x93E159: movaps  xmm3, xmm0
0x93E15C: lea     eax, [esp+3B0h+var_384]
0x93E160: fstp    [esp+3B0h+var_388]
0x93E164: addss   xmm1, xmm0
0x93E168: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93E16C: addss   xmm3, xmm1
0x93E170: movss   dword ptr [eax], xmm3
0x93E174: fld     dword ptr [esp+3B0h+var_384]
0x93E178: fadd    [esp+3B0h+var_388]
0x93E17C: fst     dword ptr [esp+3B0h+var_384+4]
0x93E180: fcomp   dword ptr ds:0A2FAA8h
0x93E186: fnstsw  ax
0x93E188: test    ah, 41h
0x93E18B: jnp     loc_93ED7E
0x93E191: fld     dword ptr [esp+3B0h+var_384+4]
0x93E195: fmul    st, st(1)
0x93E197: fsubr   dword ptr [ebx+0Ch]
0x93E19A: fcomp   [ebp+arg_8]
0x93E19D: fnstsw  ax
0x93E19F: fstp    st
0x93E1A1: test    ah, 41h
0x93E1A4: jz      loc_93ED80
0x93E1AA: fld     dword ptr [ebx+0Ch]
0x93E1AD: fsub    [ebp+arg_8]
0x93E1B0: fdiv    dword ptr [esp+3B0h+var_384+4]
0x93E1B4: fst     [esp+3B0h+var_39C]
0x93E1B8: fcomp   dword ptr ds:0A3D9A4h
0x93E1BE: fnstsw  ax
0x93E1C0: test    ah, 5
0x93E1C3: jp      loc_93E3BD
0x93E1C9: mov     al, byte ptr [esp+3B0h+var_324]
0x93E1D0: test    al, al
0x93E1D2: jnz     loc_93E3BD
0x93E1D8: mov     al, [esp+3B0h+var_364]
0x93E1DC: test    al, al
0x93E1DE: jz      loc_93E3BD
0x93E1E4: fld     dword ptr [esp+3B0h+var_384]
0x93E1E8: fmul    dword ptr ds:0A31C80h
0x93E1EE: fcomp   [esp+3B0h+var_388]
0x93E1F2: fnstsw  ax
0x93E1F4: test    ah, 5
0x93E1F7: jp      loc_93E3BD
0x93E1FD: mov     eax, dword ptr [esp+3B0h+var_2D8]
0x93E204: test    eax, eax
0x93E206: jnz     loc_93E312
0x93E20C: mov     eax, [esi]
0x93E20E: mov     edi, [eax]
0x93E210: mov     eax, [eax+8]
0x93E213: mov     ecx, [esi+4]
0x93E216: mov     edx, [ecx]
0x93E218: mov     ecx, [ecx+8]
0x93E21B: mov     [esp+3B0h+var_2DC], ecx
0x93E222: mov     [esp+3B0h+var_2E0], eax
0x93E229: fld     dword ptr [edx+0Ch]
0x93E22C: fadd    dword ptr [edi+0Ch]
0x93E22F: mov     dword ptr [esp+3B0h+var_308], ecx
0x93E236: mov     ecx, [esi+8]
0x93E239: add     ecx, 10h
0x93E23C: mov     dword ptr [esp+3B0h+var_358], eax
0x93E240: fstp    dword ptr [esp+3B0h+var_2D8+0Ch]
0x93E247: mov     [esp+3B0h+anonymous_5], ecx
0x93E24E: lea     eax, [esp+3B0h+var_308+8]
0x93E255: movaps  xmmword ptr [esp+3B0h+var_298+8], xmm2
0x93E25D: mov     edx, [edi]
0x93E25F: push    eax
0x93E260: mov     ecx, edi
0x93E262: call    dword ptr [edx+1Ch]
0x93E265: mov     eax, dword ptr [esp+3B0h+var_308+8]
0x93E26C: mov     edx, ds:0BA9DE4h
0x93E272: mov     ecx, large fs:2Ch
0x93E279: mov     ecx, [ecx+edx*4]
0x93E27C: mov     ecx, [ecx+19Ch]
0x93E282: mov     dword ptr [esp+3B0h+var_2D8+8], eax
0x93E289: mov     dword ptr [esp+3B0h+var_2D8+4], eax
0x93E290: mov     edx, [ecx+20h]
0x93E293: inc     eax
0x93E294: shl     eax, 4
0x93E297: and     eax, 0FFFFFFF0h
0x93E29A: mov     [esp+3B0h+var_388], edx
0x93E29E: add     edx, eax
0x93E2A0: cmp     edx, [ecx+2Ch]
0x93E2A3: ja      short loc_93E2AE
0x93E2A5: mov     eax, [esp+3B0h+var_388]
0x93E2A9: mov     [ecx+20h], edx
0x93E2AC: jmp     short loc_93E2B4
0x93E2AE: mov     edx, [ecx]
0x93E2B0: push    eax
0x93E2B1: call    dword ptr [edx+0Ch]
0x93E2B4: mov     dword ptr [esp+3B0h+var_2D8], eax
0x93E2BB: mov     edx, [edi]
0x93E2BD: push    eax
0x93E2BE: mov     ecx, edi
0x93E2C0: call    dword ptr [edx+20h]
0x93E2C3: fld     dword ptr [esp+3B0h+var_270+0Ch]
0x93E2CA: mov     eax, dword ptr [esp+3B0h+var_308]
0x93E2D1: fmul    dword ptr [eax+0A0h]
0x93E2D7: mov     ecx, dword ptr [esp+3B0h+var_358]
0x93E2DB: fmul    dword ptr [esp+3B0h+var_270+0Ch]
0x93E2E2: fld     dword ptr [esp+3B0h+anonymous_1+0Ch]
0x93E2E9: fmul    dword ptr [ecx+0A0h]
0x93E2EF: fmul    dword ptr [esp+3B0h+anonymous_1+0Ch]
0x93E2F6: faddp   st(1), st
0x93E2F8: fst     [esp+3B0h+var_2C8]
0x93E2FF: fadd    dword ptr ds:0AA1DC8h
0x93E305: fdivr   dword ptr ds:0A2F948h
0x93E30B: fstp    [esp+3B0h+var_2C4]
0x93E312: mov     eax, dword ptr [esp+3B0h+var_384+4]
0x93E316: mov     edx, [esp+3B0h+var_390]
0x93E31A: mov     edi, large fs:2Ch
0x93E321: mov     ecx, ds:0BA9DE4h
0x93E327: mov     [esp+3B0h+anonymous_6], eax
0x93E32E: mov     eax, [edi+ecx*4]
0x93E331: mov     [esp+3B0h+var_260], edx
0x93E338: mov     edx, [eax+1A4h]
0x93E33E: cmp     edx, [eax+1A8h]
0x93E344: jnb     short loc_93E370
0x93E346: mov     ecx, [eax+1A4h]
0x93E34C: mov     dword ptr [esp+3B0h+var_358], eax
0x93E350: mov     dword ptr [ecx], offset aStplane; "Stplane"
0x93E356: rdtsc
0x93E358: mov     [esp+3B0h+var_374+0Ch], eax
0x93E35C: mov     eax, [esp+3B0h+var_374+0Ch]
0x93E360: mov     edx, dword ptr [esp+3B0h+var_358]
0x93E364: mov     [ecx+4], eax
0x93E367: add     ecx, 0Ch
0x93E36A: mov     [edx+1A4h], ecx
0x93E370: lea     eax, [esp+3B0h+var_388]
0x93E374: push    eax
0x93E375: lea     ecx, [esp+3B4h+var_358+8]
0x93E379: push    ecx
0x93E37A: lea     edx, [esp+3B8h+var_2E0]
0x93E381: push    edx
0x93E382: mov     [esp+3BCh+var_388], 3F800000h
0x93E38A: call    sub_93DB40
0x93E38F: fld     [esp+3BCh+var_388]
0x93E393: fsub    [esp+3BCh+var_390]
0x93E397: add     esp, 0Ch
0x93E39A: fld     [esp+3B0h+var_39C]
0x93E39E: fadd    st, st
0x93E3A0: fld     st(1)
0x93E3A2: fcompp
0x93E3A4: fnstsw  ax
0x93E3A6: test    ah, 5
0x93E3A9: jp      short loc_93E3B7
0x93E3AB: fstp    st
0x93E3AD: mov     byte ptr [esp+3B0h+var_324], 1
0x93E3B5: jmp     short loc_93E3C4
0x93E3B7: fstp    [esp+3B0h+var_39C]
0x93E3BB: jmp     short loc_93E3C4
0x93E3BD: mov     edi, large fs:2Ch
0x93E3C4: fld     [esp+3B0h+var_39C]
0x93E3C8: fadd    [esp+3B0h+var_390]
0x93E3CC: fcomp   dword ptr ds:0A2F948h
0x93E3D2: fnstsw  ax
0x93E3D4: test    ah, 1
0x93E3D7: jz      loc_93ED87
0x93E3DD: fld     [esp+3B0h+var_348]
0x93E3E1: mov     eax, [esp+3B0h+var_390]
0x93E3E5: fcomp   [esp+3B0h+var_39C]
0x93E3E9: mov     dword ptr [esp+3B0h+var_384+0Ch], eax
0x93E3ED: fnstsw  ax
0x93E3EF: test    ah, 41h
0x93E3F2: jnz     short loc_93E3FC
0x93E3F4: mov     ecx, [esp+3B0h+var_348]
0x93E3F8: mov     [esp+3B0h+var_39C], ecx
0x93E3FC: fld     [esp+3B0h+var_39C]
0x93E400: fadd    [esp+3B0h+var_390]
0x93E404: fst     [esp+3B0h+var_390]
0x93E408: fcomp   dword ptr ds:0A2F948h
0x93E40E: fnstsw  ax
0x93E410: test    ah, 5
0x93E413: jnp     short loc_93E41D
0x93E415: mov     [esp+3B0h+var_390], 3F800000h
0x93E41D: mov     edx, [ebx+0Ch]
0x93E420: mov     ecx, ds:0BA9DE4h
0x93E426: mov     eax, [edi+ecx*4]
0x93E429: movaps  xmm0, xmmword ptr [ebx]
0x93E42C: mov     [esp+3B0h+var_360], edx
0x93E430: mov     edx, [eax+1A4h]
0x93E436: cmp     edx, [eax+1A8h]
0x93E43C: movaps  xmmword ptr [esp+3B0h+var_258+8], xmm0
0x93E444: jnb     short loc_93E46A
0x93E446: mov     edi, eax
0x93E448: mov     ecx, [edi+1A4h]
0x93E44E: mov     dword ptr [ecx], offset aStsepnormal; "StsepNormal"
0x93E454: rdtsc
0x93E456: mov     [esp+3B0h+var_374+8], eax
0x93E45A: mov     eax, [esp+3B0h+var_374+8]
0x93E45E: mov     [ecx+4], eax
0x93E461: add     ecx, 0Ch
0x93E464: mov     [edi+1A4h], ecx
0x93E46A: mov     edi, [esi+8]
0x93E46D: fld     [esp+3B0h+var_390]
0x93E471: fmul    dword ptr [edi+18h]
0x93E474: mov     eax, [edi+10h]
0x93E477: add     edi, 10h
0x93E47A: lea     ecx, [esp+3B0h+var_1C0]
0x93E481: push    ecx; int
0x93E482: fstp    [esp+3B4h+var_388]
0x93E486: mov     edx, [esp+3B4h+var_388]
0x93E48A: mov     ecx, [esp+3B4h+var_374+4]
0x93E48E: push    edx; float
0x93E48F: push    eax; float
0x93E490: add     ecx, 40h ; '@'
0x93E493: push    ecx; int
0x93E494: call    sub_8DD340
0x93E499: mov     eax, [esp+3C0h+var_388]
0x93E49D: mov     ecx, [edi]
0x93E49F: lea     edx, [esp+3C0h+var_240]
0x93E4A6: push    edx; int
0x93E4A7: mov     edx, [esp+3C4h+var_374]
0x93E4AB: push    eax; float
0x93E4AC: push    ecx; float
0x93E4AD: add     edx, 40h ; '@'
0x93E4B0: push    edx; int
0x93E4B1: call    sub_8DD340
0x93E4B6: mov     edx, [esp+3D0h+var_35C]
0x93E4BA: add     esp, 20h
0x93E4BD: lea     eax, [esp+3B0h+var_240]
0x93E4C4: push    eax
0x93E4C5: lea     ecx, [esp+3B4h+var_1C0]
0x93E4CC: inc     edx
0x93E4CD: push    ecx
0x93E4CE: lea     ecx, [esp+3B8h+var_208+8]
0x93E4D5: mov     [esp+3B8h+var_35C], edx
0x93E4D9: call    sub_8B1FF0
0x93E4DE: mov     ecx, dword ptr [esp+3B0h+var_384+8]
0x93E4E2: mov     edi, [esp+3B0h+var_394]
0x93E4E6: lea     edx, [esp+3B0h+var_2F0]
0x93E4ED: push    edx
0x93E4EE: lea     eax, [esp+3B4h+var_208+8]
0x93E4F5: push    eax
0x93E4F6: push    ecx
0x93E4F7: push    edi
0x93E4F8: lea     ecx, [esp+3C0h+var_180]
0x93E4FF: call    sub_93C690
0x93E504: movaps  xmm2, xmmword ptr [esp+3B0h+var_2F0]
0x93E50C: movaps  xmm1, [esp+3B0h+var_1A0]
0x93E514: movaps  xmm3, xmmword ptr [esp+3B0h+var_1B8+8]
0x93E51C: movaps  xmm4, xmmword ptr [esp+3B0h+var_1C0]
0x93E524: mov     ecx, [esp+3B0h+var_180]
0x93E52B: movaps  xmm0, xmm2
0x93E52E: shufps  xmm0, xmm2, 0AAh ; 'ª'
0x93E532: mulps   xmm1, xmm0
0x93E535: movaps  xmm0, xmm2
0x93E538: shufps  xmm0, xmm2, 55h ; 'U'
0x93E53C: mulps   xmm3, xmm0
0x93E53F: movaps  xmm0, xmm2
0x93E542: shufps  xmm0, xmm2, 0
0x93E546: mulps   xmm4, xmm0
0x93E549: mov     eax, 1
0x93E54E: cmp     ecx, eax
0x93E550: addps   xmm4, xmm3
0x93E553: addps   xmm4, xmm1
0x93E556: movaps  xmmword ptr [ebx], xmm4
0x93E559: jnz     short loc_93E565
0x93E55B: movaps  xmm0, [esp+3B0h+var_160]
0x93E563: jmp     short loc_93E594
0x93E565: cmp     [esp+3B0h+var_17C], eax
0x93E56C: jnz     short loc_93E58C
0x93E56E: movaps  xmm0, xmm2
0x93E571: shufps  xmm0, xmm2, 0FFh
0x93E575: movaps  xmm1, xmm0
0x93E578: shufps  xmm1, xmm0, 0
0x93E57C: movaps  xmm0, [esp+3B0h+var_E0]
0x93E584: mulps   xmm1, xmm2
0x93E587: addps   xmm0, xmm1
0x93E58A: jmp     short loc_93E594
0x93E58C: movaps  xmm0, [esp+3B0h+var_50]
0x93E594: movaps  xmm3, [esp+3B0h+anonymous_2]
0x93E59C: fld     [esp+3B0h+var_2E4]
0x93E5A3: movaps  xmm5, xmmword ptr [esp+3B0h+var_1F8+8]
0x93E5AB: mov     edx, dword ptr [esp+3B0h+var_384+8]
0x93E5AF: movaps  xmm1, xmm2
0x93E5B2: shufps  xmm1, xmm2, 0FFh
0x93E5B6: movaps  xmm4, xmm1
0x93E5B9: shufps  xmm4, xmm1, 0
0x93E5BD: mulps   xmm4, xmm2
0x93E5C0: subps   xmm0, xmm4
0x93E5C3: movaps  xmm4, [esp+3B0h+anonymous_3]
0x93E5CB: subps   xmm0, xmm3
0x93E5CE: movaps  xmm3, [esp+3B0h+var_208+8]
0x93E5D6: movaps  xmm2, xmm4
0x93E5D9: shufps  xmm2, xmm4, 44h ; 'D'
0x93E5DD: movaps  xmm7, xmm4
0x93E5E0: shufps  xmm7, xmm4, 0EEh ; 'î'
0x93E5E4: movaps  xmm1, xmm3
0x93E5E7: shufps  xmm3, xmm5, 0EEh ; 'î'
0x93E5EB: shufps  xmm1, xmm5, 44h ; 'D'
0x93E5EF: movaps  xmm4, xmm0
0x93E5F2: shufps  xmm4, xmm0, 55h ; 'U'
0x93E5F6: movaps  xmm5, xmm1
0x93E5F9: shufps  xmm5, xmm2, 0DDh ; 'Ý'
0x93E5FD: mulps   xmm5, xmm4
0x93E600: movaps  xmm4, xmm0
0x93E603: shufps  xmm4, xmm0, 0
0x93E607: movaps  xmm6, xmm0
0x93E60A: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x93E60E: shufps  xmm3, xmm7, 88h ; 'ˆ'
0x93E612: shufps  xmm1, xmm2, 88h ; 'ˆ'
0x93E616: mulps   xmm1, xmm4
0x93E619: movaps  xmm4, [esp+3B0h+var_220]
0x93E621: mulps   xmm3, xmm6
0x93E624: addps   xmm1, xmm5
0x93E627: movaps  xmm5, xmmword ptr [esp+3B0h+var_238+8]
0x93E62F: mov     ecx, dword ptr [esp+3B0h+var_178+0Ch]
0x93E636: addps   xmm1, xmm3
0x93E639: movaps  xmm3, xmmword ptr [esp+3B0h+var_240]
0x93E641: movaps  [esp+3B0h+anonymous_4], xmm1
0x93E649: fsub    dword ptr [edi+0Ch]
0x93E64C: movaps  xmm2, xmm4
0x93E64F: shufps  xmm2, xmm4, 44h ; 'D'
0x93E653: fsub    dword ptr [edx+0Ch]
0x93E656: movaps  xmm7, xmm4
0x93E659: movaps  xmm0, xmm3
0x93E65C: shufps  xmm0, xmm5, 44h ; 'D'
0x93E660: fstp    dword ptr [ebx+0Ch]
0x93E663: mov     eax, [ebx+0Ch]
0x93E666: movaps  xmm1, xmmword ptr [ebx]
0x93E669: mov     [esp+3B0h+var_38C], eax
0x93E66D: fld     [esp+3B0h+var_38C]
0x93E671: shufps  xmm7, xmm4, 0EEh ; 'î'
0x93E675: fcomp   [esp+3B0h+var_398]
0x93E679: shufps  xmm3, xmm5, 0EEh ; 'î'
0x93E67D: movaps  xmm5, xmm0
0x93E680: movaps  xmm4, xmm1
0x93E683: shufps  xmm4, xmm1, 55h ; 'U'
0x93E687: shufps  xmm5, xmm2, 0DDh ; 'Ý'
0x93E68B: fnstsw  ax
0x93E68D: mulps   xmm5, xmm4
0x93E690: test    ah, 41h
0x93E693: shufps  xmm0, xmm2, 88h ; 'ˆ'
0x93E697: movaps  xmm4, xmm1
0x93E69A: movaps  xmm6, xmm1
0x93E69D: shufps  xmm4, xmm1, 0
0x93E6A1: mulps   xmm0, xmm4
0x93E6A4: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x93E6A8: shufps  xmm3, xmm7, 88h ; 'ˆ'
0x93E6AC: mulps   xmm3, xmm6
0x93E6AF: addps   xmm0, xmm5
0x93E6B2: addps   xmm0, xmm3
0x93E6B5: mov     [esp+3B0h+var_364], 1
0x93E6BA: movaps  [esp+3B0h+var_2C0], xmm0
0x93E6C2: jp      loc_93E02B
0x93E6C8: mov     edx, large fs:2Ch
0x93E6CF: mov     edi, ds:0BA9DE4h
0x93E6D5: mov     eax, [edx+edi*4]
0x93E6D8: mov     ebx, [eax+1A4h]
0x93E6DE: cmp     ebx, [eax+1A8h]
0x93E6E4: jnb     short loc_93E70A
0x93E6E6: mov     ebx, eax
0x93E6E8: mov     edi, [ebx+1A4h]
0x93E6EE: mov     dword ptr [edi], offset aStfinal; "Stfinal"
0x93E6F4: rdtsc
0x93E6F6: mov     [esp+3B0h+var_394], eax
0x93E6FA: mov     edx, [esp+3B0h+var_394]
0x93E6FE: mov     [edi+4], edx
0x93E701: add     edi, 0Ch
0x93E704: mov     [ebx+1A4h], edi
0x93E70A: mov     eax, [esp+3B0h+var_38C]
0x93E70E: mov     edx, [esp+3B0h+var_360]
0x93E712: mov     dword ptr [esp+3B0h+var_384+8], eax
0x93E716: mov     eax, [esp+3B0h+var_390]
0x93E71A: mov     dword ptr [esp+3B0h+var_384], edx
0x93E71E: mov     edx, dword ptr [esp+3B0h+var_384+0Ch]
0x93E722: mov     [esp+3B0h+var_39C], eax
0x93E726: mov     eax, [esi]
0x93E728: mov     dword ptr [esp+3B0h+var_384+4], edx
0x93E72C: mov     edx, [esi+4]
0x93E72F: mov     [esp+3B0h+var_398], ecx
0x93E733: mov     ecx, [eax]
0x93E735: mov     eax, [edx]
0x93E737: fld     dword ptr [ecx+0Ch]
0x93E73A: fadd    dword ptr [eax+0Ch]
0x93E73D: mov     [esp+3B0h+var_374], 0
0x93E745: fstp    [esp+3B0h+var_374+0Ch]
0x93E749: fld     [esp+3B0h+var_38C]
0x93E74D: fsub    [esp+3B0h+var_360]
0x93E751: fld     [esp+3B0h+var_390]
0x93E755: fsub    dword ptr [esp+3B0h+var_384+0Ch]
0x93E759: fdivp   st(1), st
0x93E75B: fstp    dword ptr [esp+3B0h+var_384+0Ch]
0x93E75F: fld     [esp+3B0h+var_340]
0x93E763: fchs
0x93E765: fstp    [esp+3B0h+var_394]
0x93E769: lea     esp, [esp+0]
0x93E770: fld     dword ptr [esp+3B0h+var_384+8]
0x93E774: fsub    dword ptr [esp+3B0h+var_384]
0x93E778: fcom    [esp+3B0h+var_394]
0x93E77C: fnstsw  ax
0x93E77E: test    ah, 41h
0x93E781: jnz     short loc_93E793
0x93E783: mov     ecx, dword ptr [esp+3B0h+var_384+4]
0x93E787: fstp    st
0x93E789: fld     dword ptr ds:0A3D65Ch
0x93E78F: mov     [esp+3B0h+var_39C], ecx
0x93E793: fld     dword ptr [esp+3B0h+var_384+8]
0x93E797: fsub    [ebp+arg_C]
0x93E79A: fabs
0x93E79C: fcomp   [esp+3B0h+var_340]
0x93E7A0: fnstsw  ax
0x93E7A2: test    ah, 5
0x93E7A5: jp      short loc_93E7C0
0x93E7A7: mov     edx, [esp+3B0h+var_39C]
0x93E7AB: fstp    st
0x93E7AD: mov     [esp+3B0h+var_364], 1
0x93E7B2: mov     [esp+3B0h+var_398], 0
0x93E7BA: mov     [esp+3B0h+var_38C], edx
0x93E7BE: jmp     short loc_93E812
0x93E7C0: fld     [ebp+arg_C]
0x93E7C3: mov     [esp+3B0h+var_364], 0
0x93E7C8: fsub    dword ptr [esp+3B0h+var_384]
0x93E7CC: fdivrp  st(1), st
0x93E7CE: fcom    dword ptr ds:0A2FAACh
0x93E7D4: fnstsw  ax
0x93E7D6: test    ah, 41h
0x93E7D9: jz      short loc_93E7E5
0x93E7DB: fstp    st
0x93E7DD: fld     dword ptr ds:0A2FAACh
0x93E7E3: jmp     short loc_93E7FA
0x93E7E5: fcom    dword ptr ds:0A37450h
0x93E7EB: fnstsw  ax
0x93E7ED: test    ah, 5
0x93E7F0: jnp     short loc_93E7FA
0x93E7F2: fstp    st
0x93E7F4: fld     dword ptr ds:0A37450h
0x93E7FA: fld     dword ptr ds:0A2F948h
0x93E800: fsub    st, st(1)
0x93E802: fmul    dword ptr [esp+3B0h+var_384+4]
0x93E806: fxch    st(1)
0x93E808: fmul    [esp+3B0h+var_39C]
0x93E80C: faddp   st(1), st
0x93E80E: fstp    [esp+3B0h+var_38C]
0x93E812: mov     edi, [esi+8]
0x93E815: fld     [esp+3B0h+var_38C]
0x93E819: fmul    dword ptr [edi+18h]
0x93E81C: mov     edx, [esi]
0x93E81E: mov     ecx, [edi+10h]
0x93E821: add     edi, 10h
0x93E824: lea     eax, [esp+3B0h+var_240]
0x93E82B: fstp    [esp+3B0h+var_374+8]
0x93E82F: mov     ebx, [esp+3B0h+var_374+8]
0x93E833: push    eax; int
0x93E834: mov     eax, [edx+8]
0x93E837: push    ebx; float
0x93E838: push    ecx; float
0x93E839: add     eax, 40h ; '@'
0x93E83C: push    eax; int
0x93E83D: call    sub_8DD340
0x93E842: mov     eax, [esi+4]
0x93E845: mov     edx, [edi]
0x93E847: lea     ecx, [esp+3C0h+var_1C0]
0x93E84E: push    ecx; int
0x93E84F: mov     ecx, [eax+8]
0x93E852: push    ebx; float
0x93E853: push    edx; float
0x93E854: add     ecx, 40h ; '@'
0x93E857: push    ecx; int
0x93E858: call    sub_8DD340
0x93E85D: add     esp, 20h
0x93E860: lea     edx, [esp+3B0h+var_1C0]
0x93E867: push    edx
0x93E868: lea     eax, [esp+3B4h+var_240]
0x93E86F: push    eax
0x93E870: lea     ecx, [esp+3B8h+var_208+8]
0x93E877: call    sub_8B1FF0
0x93E87C: mov     eax, [esp+3B0h+var_398]
0x93E880: test    eax, eax
0x93E882: jz      loc_93E923
0x93E888: mov     eax, [esi+4]
0x93E88B: lea     ecx, [esp+3B0h+var_320]
0x93E892: push    ecx
0x93E893: mov     ecx, [eax]
0x93E895: lea     edx, [esp+3B4h+var_208+8]
0x93E89C: push    edx
0x93E89D: mov     edx, [esi]
0x93E89F: mov     eax, [edx]
0x93E8A1: push    ecx
0x93E8A2: push    eax
0x93E8A3: lea     ecx, [esp+3C0h+var_180]
0x93E8AA: call    sub_93C690
0x93E8AF: mov     ecx, [esp+3B0h+var_180]
0x93E8B6: mov     eax, 1
0x93E8BB: cmp     ecx, eax
0x93E8BD: jnz     short loc_93E8D4
0x93E8BF: movaps  xmm0, [esp+3B0h+var_160]
0x93E8C7: movaps  [esp+3B0h+var_308+8], xmm0
0x93E8CF: jmp     loc_93EA44
0x93E8D4: cmp     [esp+3B0h+var_17C], eax
0x93E8DB: jnz     short loc_93E90E
0x93E8DD: movaps  xmm1, [esp+3B0h+var_320]
0x93E8E5: movaps  xmm0, xmm1
0x93E8E8: shufps  xmm0, xmm1, 0FFh
0x93E8EC: movaps  xmm2, xmm0
0x93E8EF: shufps  xmm2, xmm0, 0
0x93E8F3: movaps  xmm0, [esp+3B0h+var_E0]
0x93E8FB: mulps   xmm2, xmm1
0x93E8FE: addps   xmm0, xmm2
0x93E901: movaps  [esp+3B0h+var_308+8], xmm0
0x93E909: jmp     loc_93EA44
0x93E90E: movaps  xmm0, [esp+3B0h+var_50]
0x93E916: movaps  [esp+3B0h+var_308+8], xmm0
0x93E91E: jmp     loc_93EA44
0x93E923: mov     ecx, [esp+3B0h+var_17C]
0x93E92A: movaps  xmm1, [esp+3B0h+anonymous_2]
0x93E932: movaps  xmm2, [esp+3B0h+anonymous_3]
0x93E93A: movaps  xmm3, xmmword ptr [esp+3B0h+var_1F8+8]
0x93E942: movaps  xmm4, [esp+3B0h+var_208+8]
0x93E94A: lea     eax, [esp+3B0h+var_A0]
0x93E951: movaps  xmm0, xmmword ptr [eax]
0x93E954: movaps  xmm5, xmm0
0x93E957: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93E95B: movaps  xmm6, xmm2
0x93E95E: mulps   xmm6, xmm5
0x93E961: movaps  xmm5, xmm0
0x93E964: shufps  xmm5, xmm0, 55h ; 'U'
0x93E968: movaps  xmm7, xmm3
0x93E96B: mulps   xmm7, xmm5
0x93E96E: movaps  xmm5, xmm0
0x93E971: shufps  xmm5, xmm0, 0
0x93E975: movaps  xmm0, xmm4
0x93E978: mulps   xmm0, xmm5
0x93E97B: addps   xmm6, xmm1
0x93E97E: addps   xmm0, xmm7
0x93E981: addps   xmm0, xmm6
0x93E984: movaps  xmmword ptr [eax-40h], xmm0
0x93E988: add     eax, 10h
0x93E98B: dec     ecx
0x93E98C: test    ecx, ecx
0x93E98E: jg      short loc_93E951
0x93E990: movaps  xmm4, [esp+3B0h+var_220]
0x93E998: movaps  xmm1, xmmword ptr [esp+3B0h+var_258+8]
0x93E9A0: movaps  xmm5, xmmword ptr [esp+3B0h+var_238+8]
0x93E9A8: movaps  xmm3, xmmword ptr [esp+3B0h+var_240]
0x93E9B0: lea     ecx, [esp+3B0h+var_320]
0x93E9B7: push    ecx
0x93E9B8: mov     ecx, [esp+3B4h+var_17C]
0x93E9BF: movaps  xmm2, xmm4
0x93E9C2: shufps  xmm2, xmm4, 44h ; 'D'
0x93E9C6: movaps  xmm7, xmm4
0x93E9C9: movaps  xmm0, xmm3
0x93E9CC: shufps  xmm0, xmm5, 44h ; 'D'
0x93E9D0: shufps  xmm7, xmm4, 0EEh ; 'î'
0x93E9D4: shufps  xmm3, xmm5, 0EEh ; 'î'
0x93E9D8: lea     edx, [esp+3B4h+var_308+8]
0x93E9DF: push    edx
0x93E9E0: mov     edx, [esp+3B8h+var_180]
0x93E9E7: movaps  xmm5, xmm0
0x93E9EA: lea     eax, [esp+3B8h+var_2F0]
0x93E9F1: push    eax
0x93E9F2: push    ecx
0x93E9F3: movaps  xmm4, xmm1
0x93E9F6: shufps  xmm4, xmm1, 55h ; 'U'
0x93E9FA: shufps  xmm5, xmm2, 0DDh ; 'Ý'
0x93E9FE: mulps   xmm5, xmm4
0x93EA01: shufps  xmm0, xmm2, 88h ; 'ˆ'
0x93EA05: push    edx
0x93EA06: movaps  xmm4, xmm1
0x93EA09: lea     eax, [esp+3C4h+var_E0]
0x93EA10: movaps  xmm6, xmm1
0x93EA13: shufps  xmm4, xmm1, 0
0x93EA17: mulps   xmm0, xmm4
0x93EA1A: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x93EA1E: shufps  xmm3, xmm7, 88h ; 'ˆ'
0x93EA22: push    eax
0x93EA23: lea     ecx, [esp+3C8h+var_160]
0x93EA2A: mulps   xmm3, xmm6
0x93EA2D: addps   xmm0, xmm5
0x93EA30: addps   xmm0, xmm3
0x93EA33: push    ecx
0x93EA34: movaps  xmmword ptr [esp+3CCh+var_2F0], xmm0
0x93EA3C: call    sub_93BA20
0x93EA41: add     esp, 1Ch
0x93EA44: fld     dword ptr [esp+3B0h+var_320+0Ch]
0x93EA4B: fsub    [esp+3B0h+var_374+0Ch]
0x93EA4F: fst     [esp+3B0h+var_374+4]
0x93EA53: fld     [ebp+arg_C]
0x93EA56: fsubr   st, st(1)
0x93EA58: fabs
0x93EA5A: fcomp   [esp+3B0h+var_340]
0x93EA5E: fnstsw  ax
0x93EA60: test    ah, 5
0x93EA63: jnp     short loc_93EAB6
0x93EA65: mov     al, [esp+3B0h+var_364]
0x93EA69: test    al, al
0x93EA6B: jnz     short loc_93EAB6
0x93EA6D: fld     [esp+3B0h+var_39C]
0x93EA71: fld     dword ptr [esp+3B0h+var_384+4]
0x93EA75: fucompp
0x93EA77: fnstsw  ax
0x93EA79: test    ah, 44h
0x93EA7C: jnp     short loc_93EAB6
0x93EA7E: fcom    [ebp+arg_C]
0x93EA81: fnstsw  ax
0x93EA83: test    ah, 5
0x93EA86: jp      short loc_93EA96
0x93EA88: mov     edx, [esp+3B0h+var_38C]
0x93EA8C: fstp    dword ptr [esp+3B0h+var_384+8]
0x93EA90: mov     [esp+3B0h+var_39C], edx
0x93EA94: jmp     short loc_93EAA2
0x93EA96: mov     eax, [esp+3B0h+var_38C]
0x93EA9A: fstp    dword ptr [esp+3B0h+var_384]
0x93EA9E: mov     dword ptr [esp+3B0h+var_384+4], eax
0x93EAA2: mov     eax, [esp+3B0h+var_374]
0x93EAA6: inc     eax
0x93EAA7: cmp     eax, 0Ah
0x93EAAA: mov     [esp+3B0h+var_374], eax
0x93EAAE: jl      loc_93E770
0x93EAB4: jmp     short loc_93EAB8
0x93EAB6: fstp    st
0x93EAB8: mov     ecx, [esi+8]
0x93EABB: fld     [esp+3B0h+var_38C]
0x93EABF: fmul    dword ptr [ecx+18h]
0x93EAC2: add     ecx, 10h
0x93EAC5: mov     [esp+3B0h+var_374+8], ecx
0x93EAC9: fcom    [esp+3B0h+var_344]
0x93EACD: fnstsw  ax
0x93EACF: test    ah, 41h
0x93EAD2: jz      short loc_93EADA
0x93EAD4: fstp    st
0x93EAD6: fld     [esp+3B0h+var_344]
0x93EADA: fadd    dword ptr [ecx]
0x93EADC: mov     edx, [ebp+arg_18]
0x93EADF: fst     [esp+3B0h+var_39C]
0x93EAE3: fcomp   dword ptr [edx+3034h]
0x93EAE9: fnstsw  ax
0x93EAEB: test    ah, 5
0x93EAEE: jp      loc_93ED80
0x93EAF4: fld     dword ptr [ecx+4]
0x93EAF7: fsub    [esp+3B0h+var_344]
0x93EAFB: fcomp   [esp+3B0h+var_39C]
0x93EAFF: fnstsw  ax
0x93EB01: test    ah, 41h
0x93EB04: jnz     loc_93ED80
0x93EB0A: mov     eax, [esi]
0x93EB0C: mov     edi, [eax]
0x93EB0E: lea     ecx, [esp+3B0h+var_308+8]
0x93EB15: push    ecx
0x93EB16: lea     edx, [esp+3B4h+var_240]
0x93EB1D: push    edx
0x93EB1E: lea     ecx, [esp+3B8h+var_258+8]
0x93EB25: call    sub_88FCC0
0x93EB2A: lea     eax, [esp+3B0h+var_320]
0x93EB31: push    eax
0x93EB32: lea     ecx, [esp+3B4h+var_240]
0x93EB39: push    ecx
0x93EB3A: lea     ecx, [esp+3B8h+var_340]
0x93EB3E: call    sub_88FE00
0x93EB43: fld     dword ptr [edi+0Ch]
0x93EB46: movaps  xmm1, xmmword ptr [esp+3B0h+var_340]
0x93EB4B: fchs
0x93EB4D: fsub    [esp+3B0h+var_374+4]
0x93EB51: mov     edx, [esp+3B0h+var_374+4]
0x93EB55: mov     eax, [esi]
0x93EB57: mov     ebx, [esi+4]
0x93EB5A: fstp    [esp+3B0h+var_394]
0x93EB5E: movss   xmm0, [esp+3B0h+var_394]
0x93EB64: fld     [esp+3B0h+var_39C]
0x93EB68: movaps  xmm2, xmm0
0x93EB6B: shufps  xmm2, xmm0, 0
0x93EB6F: movaps  xmm0, xmmword ptr [esp+3B0h+var_258+8]
0x93EB77: mulps   xmm2, xmm1
0x93EB7A: addps   xmm0, xmm2
0x93EB7D: movaps  [esp+3B0h+var_358+8], xmm0
0x93EB82: mov     [esp+3B0h+var_338+4], edx
0x93EB86: mov     edi, [eax+8]
0x93EB89: fsub    dword ptr [edi+4Ch]
0x93EB8C: mov     edx, [ebx+8]
0x93EB8F: movaps  xmm2, xmmword ptr [edi+50h]
0x93EB93: movaps  xmm4, xmmword ptr [edi+40h]
0x93EB97: fmul    dword ptr [edi+5Ch]
0x93EB9A: mov     [esp+3B0h+var_374+0Ch], eax
0x93EB9E: lea     ecx, [esi+60h]
0x93EBA1: fstp    [esp+3B0h+var_394]
0x93EBA5: movss   xmm1, [esp+3B0h+var_394]
0x93EBAB: fld     [esp+3B0h+var_39C]
0x93EBAF: shufps  xmm1, xmm1, 0
0x93EBB3: fsub    dword ptr [edx+4Ch]
0x93EBB6: movaps  xmm3, xmm1
0x93EBB9: mulps   xmm3, xmm2
0x93EBBC: movaps  xmm2, xmm3
0x93EBBF: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x93EBC6: movaps  xmm5, xmm3
0x93EBC9: subps   xmm5, xmm1
0x93EBCC: mulps   xmm5, xmm4
0x93EBCF: movaps  xmm4, xmmword ptr [edx+50h]
0x93EBD3: addps   xmm5, xmm2
0x93EBD6: fmul    dword ptr [edx+5Ch]
0x93EBD9: movaps  xmm1, xmm0
0x93EBDC: subps   xmm1, xmm5
0x93EBDF: fstp    [esp+3B0h+var_394]
0x93EBE3: movss   xmm2, [esp+3B0h+var_394]
0x93EBE9: shufps  xmm2, xmm2, 0
0x93EBED: movaps  xmm5, xmm2
0x93EBF0: mulps   xmm5, xmm4
0x93EBF3: movaps  xmm4, xmmword ptr [edx+40h]
0x93EBF7: subps   xmm3, xmm2
0x93EBFA: mulps   xmm3, xmm4
0x93EBFD: addps   xmm3, xmm5
0x93EC00: subps   xmm0, xmm3
0x93EC03: movaps  xmm3, xmmword ptr [esp+3B0h+var_340]
0x93EC08: movaps  xmm2, xmm0
0x93EC0B: shufps  xmm2, xmm0, 0C9h ; 'É'
0x93EC0F: movaps  xmm4, xmm2
0x93EC12: movaps  xmm2, [esp+3B0h+var_270]
0x93EC1A: movaps  xmm5, xmm2
0x93EC1D: shufps  xmm5, xmm2, 0D2h ; 'Ò'
0x93EC21: mulps   xmm5, xmm4
0x93EC24: movaps  xmm4, xmm0
0x93EC27: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93EC2B: movaps  xmm0, xmm2
0x93EC2E: shufps  xmm0, xmm2, 0C9h ; 'É'
0x93EC32: mulps   xmm0, xmm4
0x93EC35: subps   xmm0, xmm5
0x93EC38: movaps  xmm2, xmm0
0x93EC3B: movaps  xmm0, xmm1
0x93EC3E: shufps  xmm0, xmm1, 0C9h ; 'É'
0x93EC42: movaps  xmm4, xmm0
0x93EC45: movaps  xmm0, [esp+3B0h+anonymous_1]
0x93EC4D: movaps  xmm5, xmm0
0x93EC50: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x93EC54: mulps   xmm5, xmm4
0x93EC57: movaps  xmm4, xmm1
0x93EC5A: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x93EC5E: movaps  xmm1, xmm0
0x93EC61: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93EC65: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93EC6C: mulps   xmm1, xmm4
0x93EC6F: movaps  xmm4, xmmword ptr [ecx]
0x93EC72: subps   xmm1, xmm5
0x93EC75: xorps   xmm4, xmm0
0x93EC78: addps   xmm4, xmm1
0x93EC7B: movaps  xmm0, xmm4
0x93EC7E: subps   xmm0, xmm2
0x93EC81: mulps   xmm0, xmm3
0x93EC84: movaps  xmm1, xmm0
0x93EC87: shufps  xmm1, xmm0, 55h ; 'U'
0x93EC8B: movaps  xmm2, xmm0
0x93EC8E: lea     eax, [esp+3B0h+var_384]
0x93EC92: addss   xmm1, xmm0
0x93EC96: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93EC9A: addss   xmm2, xmm1
0x93EC9E: movss   dword ptr [eax], xmm2
0x93ECA2: fld     dword ptr [esp+3B0h+var_384]
0x93ECA6: fld     dword ptr [esp+3B0h+var_384+0Ch]
0x93ECAA: fcomp   dword ptr [esp+3B0h+var_384]
0x93ECAE: fnstsw  ax
0x93ECB0: test    ah, 5
0x93ECB3: jp      short loc_93ED0A
0x93ECB5: fstp    st
0x93ECB7: fld     dword ptr [esp+3B0h+var_384]
0x93ECBB: fmul    dword ptr ds:0A57414h
0x93ECC1: fcomp   dword ptr [esp+3B0h+var_384+0Ch]
0x93ECC5: fnstsw  ax
0x93ECC7: test    ah, 5
0x93ECCA: jp      short loc_93ECD2
0x93ECCC: fld     dword ptr [esp+3B0h+var_384+0Ch]
0x93ECD0: jmp     short loc_93ED0A
0x93ECD2: mov     eax, [esp+3B0h+var_39C]
0x93ECD6: push    eax; float
0x93ECD7: push    ecx; int
0x93ECD8: lea     ecx, [esp+3B8h+var_340]
0x93ECDC: push    ecx; int
0x93ECDD: lea     eax, [esp+3BCh+var_358+8]
0x93ECE1: push    eax; int
0x93ECE2: lea     ecx, [esp+3C0h+anonymous_1]
0x93ECE9: mov     eax, edi
0x93ECEB: call    sub_93D820
0x93ECF0: fld     dword ptr ds:0A2FAA8h
0x93ECF6: fcomp   st(1)
0x93ECF8: add     esp, 10h
0x93ECFB: fnstsw  ax
0x93ECFD: test    ah, 5
0x93ED00: jp      short loc_93ED0A
0x93ED02: fstp    st
0x93ED04: fld     dword ptr ds:0A2FAA8h
0x93ED0A: mov     ecx, [esp+3B0h+var_374+8]
0x93ED0E: fmul    dword ptr [ecx+0Ch]
0x93ED11: mov     ecx, [esi+0Ch]
0x93ED14: mov     edx, [ecx]
0x93ED16: lea     eax, [esp+3B0h+var_358]
0x93ED1A: push    eax
0x93ED1B: fstp    [esp+3B4h+var_398]
0x93ED1F: mov     eax, [esp+3B4h+var_398]
0x93ED23: push    eax
0x93ED24: mov     eax, [esp+3B8h+var_39C]
0x93ED28: push    eax
0x93ED29: lea     eax, [esp+3BCh+var_358+8]
0x93ED2D: push    eax
0x93ED2E: mov     eax, [esi+8]
0x93ED31: push    eax
0x93ED32: mov     eax, [esp+3C4h+var_374+0Ch]
0x93ED36: push    ebx
0x93ED37: push    eax
0x93ED38: call    dword ptr [edx+1Ch]
0x93ED3B: test    eax, eax
0x93ED3D: jnz     short loc_93ED80
0x93ED3F: mov     eax, [ebp+arg_18]
0x93ED42: mov     ecx, [esp+3B0h+var_398]
0x93ED46: movaps  xmm0, [esp+3B0h+var_358+8]
0x93ED4B: mov     edx, [esp+3B0h+var_39C]
0x93ED4F: mov     [eax+3030h], ecx
0x93ED55: mov     ecx, dword ptr [esp+3B0h+var_358]
0x93ED59: movaps  xmmword ptr [eax+10h], xmm0
0x93ED5D: movaps  xmm0, xmmword ptr [esp+3B0h+var_340]
0x93ED62: movaps  xmmword ptr [eax+20h], xmm0
0x93ED66: mov     [eax+3034h], edx
0x93ED6C: mov     edx, dword ptr [esp+3B0h+var_358+4]
0x93ED70: mov     [eax+3038h], ecx
0x93ED76: mov     [eax+303Ch], edx
0x93ED7C: jmp     short loc_93ED80
0x93ED7E: fstp    st
0x93ED80: mov     edi, large fs:2Ch
0x93ED87: mov     eax, dword ptr [esp+3B0h+var_2D8]
0x93ED8E: test    eax, eax
0x93ED90: mov     esi, ds:0BA9DE4h
0x93ED96: jz      short loc_93EDAF
0x93ED98: mov     ecx, [edi+esi*4]
0x93ED9B: mov     ecx, [ecx+19Ch]
0x93EDA1: cmp     eax, [ecx+28h]
0x93EDA4: mov     [ecx+20h], eax
0x93EDA7: jnz     short loc_93EDAF
0x93EDA9: mov     edx, [ecx]
0x93EDAB: push    eax
0x93EDAC: call    dword ptr [edx+10h]
0x93EDAF: mov     eax, [edi+esi*4]
0x93EDB2: mov     ecx, [eax+1A4h]
0x93EDB8: cmp     ecx, [eax+1A8h]
0x93EDBE: jnb     short loc_93EDDE
0x93EDC0: fild    [esp+3B0h+var_35C]
0x93EDC4: mov     ecx, eax
0x93EDC6: mov     eax, [ecx+1A4h]
0x93EDCC: mov     dword ptr [eax], offset aMinumiter; "MinumIter"
0x93EDD2: fstp    dword ptr [eax+4]
0x93EDD5: add     eax, 8
0x93EDD8: mov     [ecx+1A4h], eax
0x93EDDE: mov     eax, dword ptr [esp+3B0h+var_178+0Ch]
0x93EDE5: test    eax, eax
0x93EDE7: jz      short loc_93EDF9
0x93EDE9: mov     edx, [ebp+arg_10]
0x93EDEC: push    edx
0x93EDED: lea     ecx, [esp+3B4h+var_180]
0x93EDF4: call    sub_93B660
0x93EDF9: mov     eax, [edi+esi*4]
0x93EDFC: mov     ecx, [eax+1A4h]
0x93EE02: cmp     ecx, [eax+1A8h]
0x93EE08: jnb     short loc_93EE2E
0x93EE0A: mov     edi, eax
0x93EE0C: mov     ecx, [edi+1A4h]
0x93EE12: mov     dword ptr [ecx], offset aLt_0; "lt"
0x93EE18: rdtsc
0x93EE1A: mov     [esp+3B0h+var_394], eax
0x93EE1E: mov     edx, [esp+3B0h+var_394]
0x93EE22: mov     [ecx+4], edx
0x93EE25: add     ecx, 0Ch
0x93EE28: mov     [edi+1A4h], ecx
0x93EE2E: pop     edi
0x93EE2F: pop     esi
0x93EE30: pop     ebx
0x93EE31: mov     esp, ebp
0x93EE33: pop     ebp
0x93EE34: retn
