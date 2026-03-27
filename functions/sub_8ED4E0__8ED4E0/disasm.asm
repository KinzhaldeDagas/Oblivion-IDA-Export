0x8ED4E0: push    ebp
0x8ED4E1: mov     ebp, esp
0x8ED4E3: and     esp, 0FFFFFFF0h
0x8ED4E6: sub     esp, 14h
0x8ED4E9: push    ebx
0x8ED4EA: push    esi
0x8ED4EB: mov     esi, large fs:2Ch
0x8ED4F2: push    edi
0x8ED4F3: mov     edi, ds:0BA9DE4h
0x8ED4F9: mov     eax, [esi+edi*4]
0x8ED4FC: mov     edx, [eax+1A4h]
0x8ED502: cmp     edx, [eax+1A8h]
0x8ED508: mov     [esp+20h+var_C], ecx
0x8ED50C: jnb     short loc_8ED536
0x8ED50E: mov     ecx, eax
0x8ED510: mov     ebx, [ecx+1A4h]
0x8ED516: mov     dword ptr [ebx], offset aTtrcsphere; "TtrcSphere"
0x8ED51C: rdtsc
0x8ED51E: mov     [esp+20h+var_8], eax
0x8ED522: mov     eax, [esp+20h+var_8]
0x8ED526: mov     [ebx+4], eax
0x8ED529: add     ebx, 0Ch
0x8ED52C: mov     [ecx+1A4h], ebx
0x8ED532: mov     ecx, [esp+20h+var_C]
0x8ED536: mov     ebx, [ebp+arg_4]
0x8ED539: fld     dword ptr [ecx+0Ch]
0x8ED53C: movaps  xmm2, xmmword ptr [ebx]
0x8ED53F: fld     st
0x8ED541: movaps  xmm3, xmmword ptr [ebx+10h]
0x8ED545: fmul    st, st(1)
0x8ED547: movaps  xmm1, xmm3
0x8ED54A: subps   xmm1, xmm2
0x8ED54D: fstp    [esp+20h+var_8]
0x8ED551: movaps  xmm0, xmm1
0x8ED554: mulps   xmm0, xmm2
0x8ED557: movaps  xmm4, xmm0
0x8ED55A: fstp    st
0x8ED55C: shufps  xmm4, xmm0, 55h ; 'U'
0x8ED560: movaps  xmm5, xmm0
0x8ED563: addss   xmm4, xmm0
0x8ED567: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8ED56B: lea     edx, [esp+20h+var_C]
0x8ED56F: addss   xmm5, xmm4
0x8ED573: movss   dword ptr [edx], xmm5
0x8ED577: fld     [esp+20h+var_C]
0x8ED57B: fld     [esp+20h+var_C]
0x8ED57F: fcomp   dword ptr ds:0A2FAA8h
0x8ED585: fnstsw  ax
0x8ED587: test    ah, 1
0x8ED58A: jz      loc_8ED75D
0x8ED590: fld     [esp+20h+var_C]
0x8ED594: movaps  xmm0, xmm1
0x8ED597: fmul    [esp+20h+var_C]
0x8ED59B: mulps   xmm0, xmm1
0x8ED59E: movaps  xmm1, xmm0
0x8ED5A1: shufps  xmm1, xmm0, 55h ; 'U'
0x8ED5A5: movaps  xmm4, xmm0
0x8ED5A8: lea     eax, [esp+20h+var_10]
0x8ED5AC: addss   xmm1, xmm0
0x8ED5B0: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8ED5B4: addss   xmm4, xmm1
0x8ED5B8: movss   dword ptr [eax], xmm4
0x8ED5BC: fld     [esp+20h+var_10]
0x8ED5C0: fmul    [esp+20h+var_8]
0x8ED5C4: fmul    dword ptr ds:0A2FE7Ch
0x8ED5CA: fcompp
0x8ED5CC: fnstsw  ax
0x8ED5CE: test    ah, 5
0x8ED5D1: jp      short loc_8ED625
0x8ED5D3: fstp    st
0x8ED5D5: fld     [esp+20h+var_10]
0x8ED5D9: fcomp   [esp+20h+var_8]
0x8ED5DD: fnstsw  ax
0x8ED5DF: test    ah, 5
0x8ED5E2: jnp     loc_8ED75F
0x8ED5E8: fld     [esp+20h+var_C]
0x8ED5EC: fchs
0x8ED5EE: fst     [esp+20h+var_C]
0x8ED5F2: fdiv    [esp+20h+var_10]
0x8ED5F6: fstp    [esp+20h+var_4]
0x8ED5FA: fld     dword ptr ds:0A2FAA8h
0x8ED600: movss   xmm0, [esp+20h+var_4]
0x8ED606: shufps  xmm0, xmm0, 0
0x8ED60A: movaps  xmm1, xmm0
0x8ED60D: mulps   xmm1, xmm3
0x8ED610: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8ED617: subps   xmm3, xmm0
0x8ED61A: movaps  xmm0, xmm3
0x8ED61D: mulps   xmm0, xmm2
0x8ED620: addps   xmm0, xmm1
0x8ED623: jmp     short loc_8ED630
0x8ED625: mov     [esp+20h+var_C], 0
0x8ED62D: movaps  xmm0, xmm2
0x8ED630: mulps   xmm0, xmm0
0x8ED633: fld     st
0x8ED635: movaps  xmm1, xmm0
0x8ED638: fmul    st, st(1)
0x8ED63A: shufps  xmm1, xmm0, 55h ; 'U'
0x8ED63E: movaps  xmm2, xmm0
0x8ED641: addss   xmm1, xmm0
0x8ED645: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8ED649: lea     edx, [esp+20h+var_4]
0x8ED64D: addss   xmm2, xmm1
0x8ED651: movss   dword ptr [edx], xmm2
0x8ED655: fld     [esp+20h+var_4]
0x8ED659: fsub    [esp+20h+var_8]
0x8ED65D: fmul    [esp+20h+var_10]
0x8ED661: fsubp   st(1), st
0x8ED663: fcom    dword ptr ds:0A2FAA8h
0x8ED669: fnstsw  ax
0x8ED66B: test    ah, 41h
0x8ED66E: jnp     loc_8ED75B
0x8ED674: fxch    st(1)
0x8ED676: mov     edx, [ebp+arg_8]
0x8ED679: fchs
0x8ED67B: fxch    st(1)
0x8ED67D: fsqrt
0x8ED67F: fsubp   st(1), st
0x8ED681: fadd    [esp+20h+var_C]
0x8ED685: fstp    [esp+20h+var_8]
0x8ED689: fld     [esp+20h+var_10]
0x8ED68D: fmul    dword ptr [edx+14h]
0x8ED690: fcomp   [esp+20h+var_8]
0x8ED694: fnstsw  ax
0x8ED696: test    ah, 41h
0x8ED699: jnp     loc_8ED75F
0x8ED69F: fld     [esp+20h+var_8]
0x8ED6A3: fcomp   dword ptr ds:0A2FAA8h
0x8ED6A9: fnstsw  ax
0x8ED6AB: test    ah, 5
0x8ED6AE: jnp     loc_8ED75F
0x8ED6B4: fld     [esp+20h+var_8]
0x8ED6B8: mov     eax, [esi+edi*4]
0x8ED6BB: fdiv    [esp+20h+var_10]
0x8ED6BF: fst     dword ptr [edx+14h]
0x8ED6C2: fstp    [esp+20h+var_4]
0x8ED6C6: movaps  xmm1, xmmword ptr [ebx+10h]
0x8ED6CA: fld     dword ptr ds:0A2F948h
0x8ED6D0: movss   xmm0, [esp+20h+var_4]
0x8ED6D6: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8ED6DD: shufps  xmm0, xmm0, 0
0x8ED6E1: movaps  xmm2, xmm0
0x8ED6E4: mulps   xmm2, xmm1
0x8ED6E7: movaps  xmm1, xmmword ptr [ebx]
0x8ED6EA: subps   xmm3, xmm0
0x8ED6ED: movaps  xmm0, xmm3
0x8ED6F0: mulps   xmm0, xmm1
0x8ED6F3: addps   xmm0, xmm2
0x8ED6F6: movaps  xmmword ptr [edx], xmm0
0x8ED6F9: fdiv    dword ptr [ecx+0Ch]
0x8ED6FC: mov     dword ptr [edx+10h], 0FFFFFFFFh
0x8ED703: fstp    [esp+20h+var_4]
0x8ED707: movss   xmm1, [esp+20h+var_4]
0x8ED70D: movaps  xmm2, xmm1
0x8ED710: shufps  xmm2, xmm1, 0
0x8ED714: mulps   xmm2, xmm0
0x8ED717: movaps  xmmword ptr [edx], xmm2
0x8ED71A: mov     ecx, [eax+1A4h]
0x8ED720: cmp     ecx, [eax+1A8h]
0x8ED726: jnb     short loc_8ED74C
0x8ED728: mov     esi, eax
0x8ED72A: mov     ecx, [esi+1A4h]
0x8ED730: mov     dword ptr [ecx], offset aEt; "Et"
0x8ED736: rdtsc
0x8ED738: mov     [esp+20h+var_4], eax
0x8ED73C: mov     edx, [esp+20h+var_4]
0x8ED740: mov     [ecx+4], edx
0x8ED743: add     ecx, 0Ch
0x8ED746: mov     [esi+1A4h], ecx
0x8ED74C: mov     eax, [ebp+arg_0]
0x8ED74F: mov     byte ptr [eax], 1
0x8ED752: pop     edi
0x8ED753: pop     esi
0x8ED754: pop     ebx
0x8ED755: mov     esp, ebp
0x8ED757: pop     ebp
0x8ED758: retn    0Ch
0x8ED75B: fstp    st
0x8ED75D: fstp    st
0x8ED75F: mov     eax, [esi+edi*4]
0x8ED762: mov     ecx, [eax+1A4h]
0x8ED768: cmp     ecx, [eax+1A8h]
0x8ED76E: jnb     short loc_8ED794
0x8ED770: mov     esi, eax
0x8ED772: mov     ecx, [esi+1A4h]
0x8ED778: mov     dword ptr [ecx], offset aEt; "Et"
0x8ED77E: rdtsc
0x8ED780: mov     [esp+20h+var_4], eax
0x8ED784: mov     edx, [esp+20h+var_4]
0x8ED788: mov     [ecx+4], edx
0x8ED78B: add     ecx, 0Ch
0x8ED78E: mov     [esi+1A4h], ecx
0x8ED794: mov     eax, [ebp+arg_0]
0x8ED797: pop     edi
0x8ED798: pop     esi
0x8ED799: mov     byte ptr [eax], 0
0x8ED79C: pop     ebx
0x8ED79D: mov     esp, ebp
0x8ED79F: pop     ebp
0x8ED7A0: retn    0Ch
