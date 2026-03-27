0x8F02A0: push    ebp
0x8F02A1: mov     ebp, esp
0x8F02A3: and     esp, 0FFFFFFF0h
0x8F02A6: sub     esp, 34h
0x8F02A9: push    ebx
0x8F02AA: push    esi
0x8F02AB: push    edi
0x8F02AC: mov     esi, ecx
0x8F02AE: mov     eax, [esi]
0x8F02B0: push    0
0x8F02B2: push    0
0x8F02B4: call    dword ptr [eax+24h]
0x8F02B7: fstp    dword ptr [esp+40h+var_30+8]
0x8F02BB: fld     dword ptr [esi+54h]
0x8F02BE: mov     ecx, dword ptr [esp+40h+var_30+8]
0x8F02C2: fcomp   dword ptr ds:0A2FAA8h
0x8F02C8: mov     dword ptr [esp+40h+var_30+0Ch], ecx
0x8F02CC: fnstsw  ax
0x8F02CE: test    ah, 5
0x8F02D1: jp      loc_8F0381
0x8F02D7: mov     eax, [esi+0Ch]
0x8F02DA: xor     ebx, ebx
0x8F02DC: test    eax, eax
0x8F02DE: jle     short loc_8F032F
0x8F02E0: mov     eax, [esi+10h]
0x8F02E3: xor     edi, edi
0x8F02E5: test    eax, eax
0x8F02E7: jle     short loc_8F0327
0x8F02E9: lea     esp, [esp+0]
0x8F02F0: mov     edx, [esi]
0x8F02F2: push    edi
0x8F02F3: push    ebx
0x8F02F4: mov     ecx, esi
0x8F02F6: call    dword ptr [edx+24h]
0x8F02F9: fld     dword ptr [esp+40h+var_30+8]
0x8F02FD: fcomp   st(1)
0x8F02FF: fnstsw  ax
0x8F0301: test    ah, 5
0x8F0304: jnp     short loc_8F030A
0x8F0306: fst     dword ptr [esp+40h+var_30+8]
0x8F030A: fld     dword ptr [esp+40h+var_30+0Ch]
0x8F030E: fcomp   st(1)
0x8F0310: fnstsw  ax
0x8F0312: test    ah, 41h
0x8F0315: jz      short loc_8F031D
0x8F0317: fstp    dword ptr [esp+40h+var_30+0Ch]
0x8F031B: jmp     short loc_8F031F
0x8F031D: fstp    st
0x8F031F: mov     eax, [esi+10h]
0x8F0322: inc     edi
0x8F0323: cmp     edi, eax
0x8F0325: jl      short loc_8F02F0
0x8F0327: mov     eax, [esi+0Ch]
0x8F032A: inc     ebx
0x8F032B: cmp     ebx, eax
0x8F032D: jl      short loc_8F02E0
0x8F032F: fld     dword ptr [esp+40h+var_30+8]
0x8F0333: fmul    dword ptr [esi+24h]
0x8F0336: fstp    dword ptr [esp+40h+var_30+8]
0x8F033A: fld     dword ptr [esp+40h+var_30+0Ch]
0x8F033E: fmul    dword ptr [esi+24h]
0x8F0341: fld     dword ptr [esp+40h+var_30+8]
0x8F0345: fst     dword ptr [esp+40h+var_30+0Ch]
0x8F0349: fld     dword ptr [esp+40h+var_30+8]
0x8F034D: fcomp   st(2)
0x8F034F: fnstsw  ax
0x8F0351: test    ah, 5
0x8F0354: jnp     short loc_8F035C
0x8F0356: fld     st(1)
0x8F0358: fstp    dword ptr [esp+40h+var_30+8]
0x8F035C: fcomp   st(1)
0x8F035E: fnstsw  ax
0x8F0360: test    ah, 41h
0x8F0363: jnz     short loc_8F036B
0x8F0365: fstp    st
0x8F0367: fld     dword ptr [esp+40h+var_30+0Ch]
0x8F036B: fld     dword ptr [esp+40h+var_30+8]
0x8F036F: fadd    st, st(1)
0x8F0371: fmul    dword ptr ds:0A3D65Ch
0x8F0377: fstp    dword ptr [esi+14h]
0x8F037A: fsub    dword ptr [esp+40h+var_30+8]
0x8F037E: fstp    dword ptr [esi+54h]
0x8F0381: movaps  xmm1, xmmword ptr [esi+50h]
0x8F0385: mov     dword ptr [esp+40h+var_30+0Ch], 3F000000h
0x8F038D: movss   xmm0, dword ptr [esp+40h+var_30+0Ch]
0x8F0393: movaps  xmm2, xmm0
0x8F0396: shufps  xmm2, xmm0, 0
0x8F039A: mulps   xmm2, xmm1
0x8F039D: movaps  [esp+40h+var_20], xmm2
0x8F03A2: mov     eax, dword ptr [esp+40h+var_20]
0x8F03A6: mov     ecx, dword ptr [esp+40h+var_20+4]
0x8F03AA: mov     edx, dword ptr [esp+40h+var_20+8]
0x8F03AE: mov     dword ptr [esp+40h+var_10], eax
0x8F03B2: mov     eax, dword ptr [esp+40h+var_20+0Ch]
0x8F03B6: mov     dword ptr [esp+40h+var_8], edx
0x8F03BA: mov     edx, [ebp+arg_8]
0x8F03BD: push    edx
0x8F03BE: mov     dword ptr [esp+44h+var_10+4], ecx
0x8F03C2: mov     ecx, [esi+14h]
0x8F03C5: mov     dword ptr [esp+44h+var_8+4], eax
0x8F03C9: mov     eax, [ebp+arg_4]
0x8F03CC: push    eax
0x8F03CD: mov     eax, [ebp+arg_0]
0x8F03D0: mov     dword ptr [esp+48h+var_20+4], ecx
0x8F03D4: lea     ecx, [esp+48h+var_20]
0x8F03D8: push    ecx
0x8F03D9: lea     edx, [esp+4Ch+var_10]
0x8F03DD: push    edx
0x8F03DE: push    eax
0x8F03DF: call    sub_8F00E0
0x8F03E4: add     esp, 14h
0x8F03E7: pop     edi
0x8F03E8: pop     esi
0x8F03E9: pop     ebx
0x8F03EA: mov     esp, ebp
0x8F03EC: pop     ebp
0x8F03ED: retn    0Ch
