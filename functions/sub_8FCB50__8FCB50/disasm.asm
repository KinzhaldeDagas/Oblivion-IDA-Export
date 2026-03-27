0x8FCB50: push    ebp
0x8FCB51: mov     ebp, esp
0x8FCB53: and     esp, 0FFFFFFF0h
0x8FCB56: sub     esp, 34h
0x8FCB59: mov     ecx, large fs:2Ch
0x8FCB60: mov     edx, ds:0BA9DE4h
0x8FCB66: mov     eax, [ecx+edx*4]
0x8FCB69: push    ebx
0x8FCB6A: push    esi
0x8FCB6B: mov     esi, [eax+1A4h]
0x8FCB71: push    edi
0x8FCB72: cmp     esi, [eax+1A8h]
0x8FCB78: jnb     short loc_8FCB9E
0x8FCB7A: mov     esi, eax
0x8FCB7C: mov     ecx, [esi+1A4h]
0x8FCB82: mov     dword ptr [ecx], offset aTtspherecapsul; "TtSphereCapsule"
0x8FCB88: rdtsc
0x8FCB8A: mov     [esp+40h+var_34], eax
0x8FCB8E: mov     eax, [esp+40h+var_34]
0x8FCB92: mov     [ecx+4], eax
0x8FCB95: add     ecx, 0Ch
0x8FCB98: mov     [esi+1A4h], ecx
0x8FCB9E: mov     eax, [ebp+arg_4]
0x8FCBA1: mov     edi, [eax]
0x8FCBA3: mov     eax, [eax+8]
0x8FCBA6: mov     ebx, [ebp+arg_0]
0x8FCBA9: mov     ecx, [ebx]
0x8FCBAB: movaps  xmm1, xmmword ptr [eax]
0x8FCBAE: movaps  xmm2, xmmword ptr [eax+10h]
0x8FCBB2: movaps  xmm3, xmmword ptr [eax+20h]
0x8FCBB6: movaps  xmm4, xmmword ptr [eax+30h]
0x8FCBBA: mov     esi, [ebx+8]
0x8FCBBD: mov     [esp+40h+var_34], ecx
0x8FCBC1: lea     ecx, [edi+10h]
0x8FCBC4: lea     eax, [esp+40h+var_20]
0x8FCBC8: add     esi, 30h ; '0'
0x8FCBCB: sub     eax, ecx
0x8FCBCD: mov     edx, 2
0x8FCBD2: movaps  xmm0, xmmword ptr [ecx]
0x8FCBD5: movaps  xmm5, xmm0
0x8FCBD8: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FCBDC: movaps  xmm6, xmm3
0x8FCBDF: mulps   xmm6, xmm5
0x8FCBE2: movaps  xmm5, xmm0
0x8FCBE5: shufps  xmm5, xmm0, 55h ; 'U'
0x8FCBE9: movaps  xmm7, xmm2
0x8FCBEC: mulps   xmm7, xmm5
0x8FCBEF: movaps  xmm5, xmm0
0x8FCBF2: shufps  xmm5, xmm0, 0
0x8FCBF6: movaps  xmm0, xmm1
0x8FCBF9: mulps   xmm0, xmm5
0x8FCBFC: addps   xmm6, xmm4
0x8FCBFF: addps   xmm0, xmm7
0x8FCC02: addps   xmm0, xmm6
0x8FCC05: movaps  xmmword ptr [eax+ecx], xmm0
0x8FCC09: add     ecx, 10h
0x8FCC0C: dec     edx
0x8FCC0D: jnz     short loc_8FCBD2
0x8FCC0F: lea     edx, [esp+40h+var_30]
0x8FCC13: push    edx
0x8FCC14: lea     eax, [esp+44h+var_10]
0x8FCC18: push    eax
0x8FCC19: lea     ecx, [esp+48h+var_20]
0x8FCC1D: push    ecx
0x8FCC1E: push    esi
0x8FCC1F: call    sub_8D1CD0
0x8FCC24: fld     dword ptr [edi+0Ch]
0x8FCC27: mov     edx, [esp+50h+var_34]
0x8FCC2B: fadd    dword ptr [edx+0Ch]
0x8FCC2E: movaps  xmm1, xmmword ptr [esi]
0x8FCC31: movaps  xmm0, [esp+50h+var_30]
0x8FCC36: subps   xmm0, xmm1
0x8FCC39: mulps   xmm0, xmm0
0x8FCC3C: fld     st
0x8FCC3E: movaps  xmm1, xmm0
0x8FCC41: fmul    st, st(1)
0x8FCC43: shufps  xmm1, xmm0, 55h ; 'U'
0x8FCC47: movaps  xmm2, xmm0
0x8FCC4A: lea     eax, [esp+50h+var_34]
0x8FCC4E: addss   xmm1, xmm0
0x8FCC52: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8FCC56: addss   xmm2, xmm1
0x8FCC5A: movss   dword ptr [eax], xmm2
0x8FCC5E: fld     [esp+50h+var_34]
0x8FCC62: fcompp
0x8FCC64: add     esp, 10h
0x8FCC67: fnstsw  ax
0x8FCC69: fstp    st
0x8FCC6B: test    ah, 5
0x8FCC6E: jp      short loc_8FCC7D
0x8FCC70: mov     eax, [ebp+arg_4]
0x8FCC73: mov     ecx, [ebp+arg_C]
0x8FCC76: mov     edx, [ecx]
0x8FCC78: push    eax
0x8FCC79: push    ebx
0x8FCC7A: call    dword ptr [edx+4]
0x8FCC7D: mov     ecx, large fs:2Ch
0x8FCC84: mov     edx, ds:0BA9DE4h
0x8FCC8A: mov     eax, [ecx+edx*4]
0x8FCC8D: mov     esi, [eax+1A4h]
0x8FCC93: cmp     esi, [eax+1A8h]
0x8FCC99: jnb     short loc_8FCCBF
0x8FCC9B: mov     esi, eax
0x8FCC9D: mov     ecx, [esi+1A4h]
0x8FCCA3: mov     dword ptr [ecx], offset aEt; "Et"
0x8FCCA9: rdtsc
0x8FCCAB: mov     [esp+40h+var_34], eax
0x8FCCAF: mov     edx, [esp+40h+var_34]
0x8FCCB3: mov     [ecx+4], edx
0x8FCCB6: add     ecx, 0Ch
0x8FCCB9: mov     [esi+1A4h], ecx
0x8FCCBF: pop     edi
0x8FCCC0: pop     esi
0x8FCCC1: pop     ebx
0x8FCCC2: mov     esp, ebp
0x8FCCC4: pop     ebp
0x8FCCC5: retn
