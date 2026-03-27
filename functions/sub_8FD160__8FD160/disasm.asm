0x8FD160: push    ebp
0x8FD161: mov     ebp, esp
0x8FD163: and     esp, 0FFFFFFF0h
0x8FD166: sub     esp, 44h
0x8FD169: push    ebx
0x8FD16A: mov     ebx, ds:0BA9DE4h
0x8FD170: push    esi
0x8FD171: push    edi
0x8FD172: mov     edi, large fs:2Ch
0x8FD179: mov     eax, [edi+ebx*4]
0x8FD17C: mov     ecx, [eax+1A4h]
0x8FD182: cmp     ecx, [eax+1A8h]
0x8FD188: jnb     short loc_8FD1AE
0x8FD18A: mov     esi, eax
0x8FD18C: mov     ecx, [esi+1A4h]
0x8FD192: mov     dword ptr [ecx], offset aTtspheresphere; "TtSphereSphere"
0x8FD198: rdtsc
0x8FD19A: mov     [esp+50h+var_38], eax
0x8FD19E: mov     edx, [esp+50h+var_38]
0x8FD1A2: mov     [ecx+4], edx
0x8FD1A5: add     ecx, 0Ch
0x8FD1A8: mov     [esi+1A4h], ecx
0x8FD1AE: mov     ecx, [ebp+arg_4]
0x8FD1B1: mov     eax, [ebp+arg_0]
0x8FD1B4: mov     esi, [eax]
0x8FD1B6: mov     edx, [ecx]
0x8FD1B8: mov     [esp+50h+var_10], eax
0x8FD1BC: mov     eax, [eax+8]
0x8FD1BF: mov     [esp+50h+var_C], ecx
0x8FD1C3: mov     ecx, [ecx+8]
0x8FD1C6: movaps  xmm1, xmmword ptr [eax+30h]
0x8FD1CA: movaps  xmm0, xmmword ptr [ecx+30h]
0x8FD1CE: add     ecx, 30h ; '0'
0x8FD1D1: subps   xmm1, xmm0
0x8FD1D4: movaps  xmm0, xmm1
0x8FD1D7: mulps   xmm0, xmm1
0x8FD1DA: movaps  xmm2, xmm0
0x8FD1DD: shufps  xmm2, xmm0, 55h ; 'U'
0x8FD1E1: movaps  xmm3, xmm0
0x8FD1E4: lea     eax, [esp+50h+var_38]
0x8FD1E8: addss   xmm2, xmm0
0x8FD1EC: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FD1F0: addss   xmm3, xmm2
0x8FD1F4: movss   dword ptr [eax], xmm3
0x8FD1F8: mov     eax, [ebp+arg_8]
0x8FD1FB: fld     dword ptr [eax+8]
0x8FD1FE: fadd    dword ptr [edx+0Ch]
0x8FD201: fadd    dword ptr [esi+0Ch]
0x8FD204: fld     st
0x8FD206: fmul    st, st(1)
0x8FD208: fld     [esp+50h+var_38]
0x8FD20C: fcompp
0x8FD20E: fnstsw  ax
0x8FD210: fstp    st
0x8FD212: test    ah, 5
0x8FD215: jp      loc_8FD2BA
0x8FD21B: fld     [esp+50h+var_38]
0x8FD21F: fcomp   dword ptr ds:0A2FAA8h
0x8FD225: fnstsw  ax
0x8FD227: test    ah, 41h
0x8FD22A: jnz     short loc_8FD25A
0x8FD22C: fld     [esp+50h+var_38]
0x8FD230: fsqrt
0x8FD232: fdivr   dword ptr ds:0A2F948h
0x8FD238: fst     [esp+50h+var_34]
0x8FD23C: fmul    [esp+50h+var_38]
0x8FD240: movss   xmm0, [esp+50h+var_34]
0x8FD246: movaps  xmm2, xmm0
0x8FD249: shufps  xmm2, xmm0, 0
0x8FD24D: movaps  xmm0, xmm2
0x8FD250: mulps   xmm0, xmm1
0x8FD253: movaps  [esp+50h+var_20], xmm0
0x8FD258: jmp     short loc_8FD279
0x8FD25A: fld     dword ptr ds:0A2FAA8h
0x8FD260: movaps  xmm0, xmmword ptr ds:0B2F090h
0x8FD267: fld     dword ptr [esp+50h+var_20+0Ch]
0x8FD26B: movaps  [esp+50h+var_20], xmm0
0x8FD270: fstp    dword ptr [esp+50h+var_20+0Ch]
0x8FD274: movaps  xmm0, [esp+50h+var_20]
0x8FD279: fld     dword ptr [esi+0Ch]
0x8FD27C: fld     dword ptr [edx+0Ch]
0x8FD27F: mov     edx, [edx+0Ch]
0x8FD282: fadd    st, st(1)
0x8FD284: mov     [esp+50h+var_34], edx
0x8FD288: movss   xmm1, [esp+50h+var_34]
0x8FD28E: movaps  xmm2, xmm1
0x8FD291: fsubr   st, st(2)
0x8FD293: shufps  xmm2, xmm1, 0
0x8FD297: mulps   xmm2, xmm0
0x8FD29A: movaps  xmm0, xmmword ptr [ecx]
0x8FD29D: mov     ecx, [ebp+arg_C]
0x8FD2A0: fstp    dword ptr [esp+50h+var_20+0Ch]
0x8FD2A4: mov     eax, [ecx]
0x8FD2A6: lea     edx, [esp+50h+var_30]
0x8FD2AA: fstp    st
0x8FD2AC: addps   xmm0, xmm2
0x8FD2AF: fstp    st
0x8FD2B1: push    edx
0x8FD2B2: movaps  [esp+54h+var_30], xmm0
0x8FD2B7: call    dword ptr [eax+4]
0x8FD2BA: mov     eax, [edi+ebx*4]
0x8FD2BD: mov     ecx, [eax+1A4h]
0x8FD2C3: cmp     ecx, [eax+1A8h]
0x8FD2C9: jnb     short loc_8FD2EF
0x8FD2CB: mov     esi, eax
0x8FD2CD: mov     ecx, [esi+1A4h]
0x8FD2D3: mov     dword ptr [ecx], offset aEt; "Et"
0x8FD2D9: rdtsc
0x8FD2DB: mov     [esp+50h+var_34], eax
0x8FD2DF: mov     edx, [esp+50h+var_34]
0x8FD2E3: mov     [ecx+4], edx
0x8FD2E6: add     ecx, 0Ch
0x8FD2E9: mov     [esi+1A4h], ecx
0x8FD2EF: pop     edi
0x8FD2F0: pop     esi
0x8FD2F1: pop     ebx
0x8FD2F2: mov     esp, ebp
0x8FD2F4: pop     ebp
0x8FD2F5: retn    10h
