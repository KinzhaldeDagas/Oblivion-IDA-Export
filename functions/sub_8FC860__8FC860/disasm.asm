0x8FC860: push    ebp
0x8FC861: mov     ebp, esp
0x8FC863: and     esp, 0FFFFFFF0h
0x8FC866: sub     esp, 84h
0x8FC86C: mov     ecx, large fs:2Ch
0x8FC873: mov     edx, ds:0BA9DE4h
0x8FC879: mov     eax, [ecx+edx*4]
0x8FC87C: push    ebx
0x8FC87D: push    esi
0x8FC87E: mov     esi, [eax+1A4h]
0x8FC884: push    edi
0x8FC885: cmp     esi, [eax+1A8h]
0x8FC88B: jnb     short loc_8FC8B1
0x8FC88D: mov     esi, eax
0x8FC88F: mov     ecx, [esi+1A4h]
0x8FC895: mov     dword ptr [ecx], offset aTtspherecapsul; "TtSphereCapsule"
0x8FC89B: rdtsc
0x8FC89D: mov     [esp+90h+var_78], eax
0x8FC8A1: mov     eax, [esp+90h+var_78]
0x8FC8A5: mov     [ecx+4], eax
0x8FC8A8: add     ecx, 0Ch
0x8FC8AB: mov     [esi+1A4h], ecx
0x8FC8B1: mov     eax, [ebp+arg_0]
0x8FC8B4: mov     ecx, [ebp+arg_4]
0x8FC8B7: mov     esi, [eax+8]
0x8FC8BA: mov     edi, [eax]
0x8FC8BC: mov     ebx, [ecx]
0x8FC8BE: mov     [esp+90h+var_10], eax
0x8FC8C5: mov     eax, [ecx+8]
0x8FC8C8: mov     [esp+90h+var_C], ecx
0x8FC8CF: movaps  xmm1, xmmword ptr [eax]
0x8FC8D2: movaps  xmm2, xmmword ptr [eax+10h]
0x8FC8D6: movaps  xmm3, xmmword ptr [eax+20h]
0x8FC8DA: movaps  xmm4, xmmword ptr [eax+30h]
0x8FC8DE: lea     ecx, [ebx+10h]
0x8FC8E1: lea     eax, [esp+90h+var_50]
0x8FC8E5: add     esi, 30h ; '0'
0x8FC8E8: sub     eax, ecx
0x8FC8EA: mov     edx, 2
0x8FC8EF: nop
0x8FC8F0: movaps  xmm0, xmmword ptr [ecx]
0x8FC8F3: movaps  xmm5, xmm0
0x8FC8F6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FC8FA: movaps  xmm6, xmm3
0x8FC8FD: mulps   xmm6, xmm5
0x8FC900: movaps  xmm5, xmm0
0x8FC903: shufps  xmm5, xmm0, 55h ; 'U'
0x8FC907: movaps  xmm7, xmm2
0x8FC90A: mulps   xmm7, xmm5
0x8FC90D: movaps  xmm5, xmm0
0x8FC910: shufps  xmm5, xmm0, 0
0x8FC914: movaps  xmm0, xmm1
0x8FC917: mulps   xmm0, xmm5
0x8FC91A: addps   xmm6, xmm4
0x8FC91D: addps   xmm0, xmm7
0x8FC920: addps   xmm0, xmm6
0x8FC923: movaps  xmmword ptr [eax+ecx], xmm0
0x8FC927: add     ecx, 10h
0x8FC92A: dec     edx
0x8FC92B: jnz     short loc_8FC8F0
0x8FC92D: lea     ecx, [esp+90h+var_60]
0x8FC931: push    ecx
0x8FC932: lea     edx, [esp+94h+var_40]
0x8FC936: push    edx
0x8FC937: lea     eax, [esp+98h+var_50]
0x8FC93B: push    eax
0x8FC93C: push    esi
0x8FC93D: call    sub_8D1CD0
0x8FC942: fld     dword ptr [edi+0Ch]
0x8FC945: fadd    dword ptr [ebx+0Ch]
0x8FC948: movaps  xmm0, [esp+0A0h+var_60]
0x8FC94D: mov     ecx, [ebp+arg_8]
0x8FC950: movaps  xmm2, xmmword ptr [esi]
0x8FC953: fld     st
0x8FC955: subps   xmm2, xmm0
0x8FC958: fadd    dword ptr [ecx+8]
0x8FC95B: movaps  xmm0, xmm2
0x8FC95E: mulps   xmm0, xmm2
0x8FC961: movaps  xmm1, xmm0
0x8FC964: fld     st
0x8FC966: shufps  xmm1, xmm0, 55h ; 'U'
0x8FC96A: movaps  xmm3, xmm0
0x8FC96D: fmul    st, st(1)
0x8FC96F: addss   xmm1, xmm0
0x8FC973: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FC977: lea     edx, [esp+0A0h+var_78]
0x8FC97B: addss   xmm3, xmm1
0x8FC97F: movss   dword ptr [edx], xmm3
0x8FC983: fld     [esp+0A0h+var_78]
0x8FC987: fcompp
0x8FC989: add     esp, 10h
0x8FC98C: fnstsw  ax
0x8FC98E: fstp    st
0x8FC990: test    ah, 1
0x8FC993: jz      loc_8FCAF9
0x8FC999: fld     [esp+90h+var_78]
0x8FC99D: fcomp   dword ptr ds:0A2FAA8h
0x8FC9A3: fnstsw  ax
0x8FC9A5: test    ah, 41h
0x8FC9A8: jnz     short loc_8FC9B5
0x8FC9AA: fld     [esp+90h+var_78]
0x8FC9AE: fsqrt
0x8FC9B0: jmp     loc_8FCA46
0x8FC9B5: movaps  xmm0, [esp+90h+var_50]
0x8FC9BA: fld     dword ptr ds:0A2FAA8h
0x8FC9C0: movaps  xmm1, [esp+90h+var_40]
0x8FC9C5: subps   xmm1, xmm0
0x8FC9C8: movaps  [esp+90h+var_70], xmm1
0x8FC9CD: fld     dword ptr [esp+90h+var_70]
0x8FC9D1: fabs
0x8FC9D3: xor     ecx, ecx
0x8FC9D5: fld     dword ptr [esp+90h+var_70+4]
0x8FC9D9: fabs
0x8FC9DB: mov     edx, 1
0x8FC9E0: fst     [esp+90h+var_78]
0x8FC9E4: fld     dword ptr [esp+90h+var_70+8]
0x8FC9E8: mov     edi, 2
0x8FC9ED: fabs
0x8FC9EF: fstp    [esp+90h+var_74]
0x8FC9F3: fcomp   st(1)
0x8FC9F5: fnstsw  ax
0x8FC9F7: test    ah, 5
0x8FC9FA: jp      short loc_8FCA09
0x8FC9FC: fstp    st
0x8FC9FE: xor     edx, edx
0x8FCA00: fld     [esp+90h+var_78]
0x8FCA04: mov     ecx, 1
0x8FCA09: fld     [esp+90h+var_74]
0x8FCA0D: fcomp   st(1)
0x8FCA0F: fnstsw  ax
0x8FCA11: fstp    st
0x8FCA13: test    ah, 5
0x8FCA16: jp      short loc_8FCA1F
0x8FCA18: mov     edi, ecx
0x8FCA1A: mov     ecx, 2
0x8FCA1F: fld     dword ptr [esp+edx*4+90h+var_70]
0x8FCA23: mov     eax, dword ptr [esp+edi*4+90h+var_70]
0x8FCA27: mov     dword ptr [esp+ecx*4+90h+var_20], 0
0x8FCA2F: fchs
0x8FCA31: mov     dword ptr [esp+90h+var_20+0Ch], 0
0x8FCA39: mov     dword ptr [esp+edx*4+90h+var_20], eax
0x8FCA3D: fstp    dword ptr [esp+edi*4+90h+var_20]
0x8FCA41: movaps  xmm2, [esp+90h+var_20]
0x8FCA46: movaps  xmm0, xmm2
0x8FCA49: mulps   xmm0, xmm2
0x8FCA4C: movaps  xmm1, xmm0
0x8FCA4F: shufps  xmm1, xmm0, 55h ; 'U'
0x8FCA53: addss   xmm1, xmm0
0x8FCA57: movaps  xmm3, xmm0
0x8FCA5A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FCA5E: mov     ecx, [ebp+arg_C]
0x8FCA61: movaps  xmm0, xmm3
0x8FCA64: addss   xmm0, xmm1
0x8FCA68: movaps  [esp+90h+var_70], xmm0
0x8FCA6D: rsqrtss xmm1, xmm0
0x8FCA71: movss   dword ptr [esp+90h+var_70], xmm1
0x8FCA77: movaps  xmm1, [esp+90h+var_70]
0x8FCA7C: mulss   xmm0, xmm1
0x8FCA80: mulss   xmm0, xmm1
0x8FCA84: mov     edx, [ecx]
0x8FCA86: mov     [esp+90h+var_74], 40400000h
0x8FCA8E: movss   xmm3, [esp+90h+var_74]
0x8FCA94: subss   xmm3, xmm0
0x8FCA98: mov     [esp+90h+var_74], 3F000000h
0x8FCAA0: movss   xmm0, [esp+90h+var_74]
0x8FCAA6: mulss   xmm0, xmm1
0x8FCAAA: mulss   xmm0, xmm3
0x8FCAAE: movaps  xmm1, xmm0
0x8FCAB1: shufps  xmm1, xmm0, 0
0x8FCAB5: movaps  xmm0, xmm1
0x8FCAB8: mulps   xmm0, xmm2
0x8FCABB: movaps  [esp+90h+var_20], xmm0
0x8FCAC0: fld     dword ptr [ebx+0Ch]
0x8FCAC3: fsub    st, st(1)
0x8FCAC5: lea     eax, [esp+90h+var_30]
0x8FCAC9: push    eax
0x8FCACA: fstp    [esp+94h+var_74]
0x8FCACE: movss   xmm1, [esp+94h+var_74]
0x8FCAD4: movaps  xmm2, xmm1
0x8FCAD7: fsub    st, st(1)
0x8FCAD9: shufps  xmm2, xmm1, 0
0x8FCADD: mulps   xmm2, xmm0
0x8FCAE0: movaps  xmm0, xmmword ptr [esi]
0x8FCAE3: fstp    dword ptr [esp+94h+var_20+0Ch]
0x8FCAEA: addps   xmm0, xmm2
0x8FCAED: movaps  [esp+94h+var_30], xmm0
0x8FCAF2: fstp    st
0x8FCAF4: call    dword ptr [edx+4]
0x8FCAF7: jmp     short loc_8FCAFB
0x8FCAF9: fstp    st
0x8FCAFB: mov     ecx, large fs:2Ch
0x8FCB02: mov     edx, ds:0BA9DE4h
0x8FCB08: mov     eax, [ecx+edx*4]
0x8FCB0B: mov     esi, [eax+1A4h]
0x8FCB11: cmp     esi, [eax+1A8h]
0x8FCB17: jnb     short loc_8FCB3D
0x8FCB19: mov     esi, eax
0x8FCB1B: mov     ecx, [esi+1A4h]
0x8FCB21: mov     dword ptr [ecx], offset aEt; "Et"
0x8FCB27: rdtsc
0x8FCB29: mov     [esp+90h+var_74], eax
0x8FCB2D: mov     edx, [esp+90h+var_74]
0x8FCB31: mov     [ecx+4], edx
0x8FCB34: add     ecx, 0Ch
0x8FCB37: mov     [esi+1A4h], ecx
0x8FCB3D: pop     edi
0x8FCB3E: pop     esi
0x8FCB3F: pop     ebx
0x8FCB40: mov     esp, ebp
0x8FCB42: pop     ebp
0x8FCB43: retn
