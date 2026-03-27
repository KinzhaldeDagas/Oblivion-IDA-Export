0x91D530: push    ebp
0x91D531: mov     ebp, esp
0x91D533: and     esp, 0FFFFFFF0h
0x91D536: sub     esp, 60h
0x91D539: movaps  xmm2, xmmword ptr [ecx]
0x91D53C: movaps  xmm1, xmm2
0x91D53F: mulps   xmm1, xmm2
0x91D542: movaps  xmm0, xmm1
0x91D545: shufps  xmm0, xmm1, 55h ; 'U'
0x91D549: movaps  xmm3, xmm1
0x91D54C: lea     eax, [esp+60h+var_5C]
0x91D550: addss   xmm0, xmm1
0x91D554: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x91D558: addss   xmm3, xmm0
0x91D55C: movss   dword ptr [eax], xmm3
0x91D560: fld     [esp+60h+var_5C]
0x91D564: fcomp   dword ptr ds:0A9D760h
0x91D56A: fnstsw  ax
0x91D56C: test    ah, 5
0x91D56F: jnp     loc_91D7D8
0x91D575: fld     dword ptr [ecx]
0x91D577: mov     edx, [ebp+arg_0]
0x91D57A: movaps  xmm6, xmmword ptr [edx]
0x91D57D: fabs
0x91D57F: fld     dword ptr [ecx+4]
0x91D582: fabs
0x91D584: movaps  xmm5, xmm6
0x91D587: fst     [esp+60h+var_58]
0x91D58B: fld     dword ptr [ecx+8]
0x91D58E: addps   xmm5, xmm2
0x91D591: fabs
0x91D593: movaps  [esp+60h+var_50], xmm5
0x91D598: fstp    [esp+60h+var_54]
0x91D59C: mov     [esp+60h+var_60], 0
0x91D5A3: fcomp   st(1)
0x91D5A5: mov     edx, 1
0x91D5AA: mov     [esp+60h+var_5C], 2
0x91D5B2: fnstsw  ax
0x91D5B4: test    ah, 5
0x91D5B7: jp      short loc_91D5C8
0x91D5B9: fstp    st
0x91D5BB: xor     edx, edx
0x91D5BD: fld     [esp+60h+var_58]
0x91D5C1: mov     [esp+60h+var_60], 1
0x91D5C8: fld     [esp+60h+var_54]
0x91D5CC: fcomp   st(1)
0x91D5CE: fnstsw  ax
0x91D5D0: fstp    st
0x91D5D2: test    ah, 5
0x91D5D5: mov     eax, [esp+60h+var_60]
0x91D5D8: jp      short loc_91D5E3
0x91D5DA: mov     [esp+60h+var_5C], eax
0x91D5DE: mov     eax, 2
0x91D5E3: mov     dword ptr [esp+eax*4+60h+var_40], 0
0x91D5EB: mov     eax, [esp+60h+var_5C]
0x91D5EF: mov     dword ptr [esp+60h+var_40+0Ch], 0
0x91D5F7: mov     eax, [ecx+eax*4]
0x91D5FA: mov     dword ptr [esp+edx*4+60h+var_40], eax
0x91D5FE: fld     dword ptr [ecx+edx*4]
0x91D601: mov     ecx, [esp+60h+var_5C]
0x91D605: fchs
0x91D607: fstp    dword ptr [esp+ecx*4+60h+var_40]
0x91D60B: movaps  xmm4, [esp+60h+var_40]
0x91D610: movaps  xmm0, xmm4
0x91D613: mulps   xmm0, xmm4
0x91D616: movaps  xmm3, xmm0
0x91D619: shufps  xmm3, xmm0, 55h ; 'U'
0x91D61D: addss   xmm3, xmm0
0x91D621: movaps  xmm7, xmm0
0x91D624: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x91D628: movaps  xmm0, xmm7
0x91D62B: addss   xmm0, xmm3
0x91D62F: movaps  [esp+60h+var_40], xmm0
0x91D634: rsqrtss xmm3, xmm0
0x91D638: movss   dword ptr [esp+60h+var_40], xmm3
0x91D63E: movaps  xmm3, [esp+60h+var_40]
0x91D643: mulss   xmm0, xmm3
0x91D647: mulss   xmm0, xmm3
0x91D64B: mov     [esp+60h+var_54], 40400000h
0x91D653: movss   xmm7, [esp+60h+var_54]
0x91D659: subss   xmm7, xmm0
0x91D65D: mov     [esp+60h+var_54], 3F000000h
0x91D665: movss   xmm0, [esp+60h+var_54]
0x91D66B: mulss   xmm0, xmm3
0x91D66F: mulss   xmm0, xmm7
0x91D673: movaps  xmm3, xmm0
0x91D676: shufps  xmm3, xmm0, 0
0x91D67A: movaps  xmm0, xmm3
0x91D67D: mulps   xmm0, xmm4
0x91D680: movaps  xmm3, xmm0
0x91D683: shufps  xmm3, xmm0, 0C9h ; 'É'
0x91D687: movaps  xmm4, xmm2
0x91D68A: shufps  xmm4, xmm2, 0D2h ; 'Ò'
0x91D68E: mulps   xmm4, xmm3
0x91D691: movaps  xmm3, xmm0
0x91D694: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x91D698: movaps  xmm7, xmm2
0x91D69B: shufps  xmm7, xmm2, 0C9h ; 'É'
0x91D69F: movaps  xmm2, xmm7
0x91D6A2: mulps   xmm2, xmm3
0x91D6A5: subps   xmm2, xmm4
0x91D6A8: movaps  xmm3, xmm1
0x91D6AB: shufps  xmm3, xmm1, 55h ; 'U'
0x91D6AF: addss   xmm3, xmm1
0x91D6B3: movaps  xmm4, xmm1
0x91D6B6: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x91D6BA: movaps  xmm1, xmm4
0x91D6BD: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x91D6C4: addss   xmm1, xmm3
0x91D6C8: movaps  [esp+60h+var_40], xmm1
0x91D6CD: sqrtss  xmm1, xmm1
0x91D6D1: movss   dword ptr [esp+60h+var_40], xmm1
0x91D6D7: movaps  xmm1, [esp+60h+var_40]
0x91D6DC: movaps  xmm3, xmm1
0x91D6DF: shufps  xmm3, xmm1, 0
0x91D6E3: movaps  xmm1, xmm3
0x91D6E6: mulps   xmm1, xmm0
0x91D6E9: mov     [esp+60h+var_54], 3F59999Ah
0x91D6F1: movss   xmm0, [esp+60h+var_54]
0x91D6F7: shufps  xmm0, xmm0, 0
0x91D6FB: subps   xmm4, xmm0
0x91D6FE: movaps  xmm3, xmm0
0x91D701: movaps  xmm0, xmm4
0x91D704: mulps   xmm3, xmm5
0x91D707: mulps   xmm0, xmm6
0x91D70A: addps   xmm0, xmm3
0x91D70D: mov     [esp+60h+var_54], 3E199998h
0x91D715: movss   xmm3, [esp+60h+var_54]
0x91D71B: movaps  xmm4, xmm3
0x91D71E: shufps  xmm4, xmm3, 0
0x91D722: mulps   xmm4, xmm1
0x91D725: movaps  xmm5, xmm0
0x91D728: addps   xmm5, xmm4
0x91D72B: movaps  [esp+60h+var_40], xmm5
0x91D730: mov     ecx, [ebp+arg_0]
0x91D733: mov     edx, [esi]
0x91D735: mov     [esp+60h+var_54], 0BE199998h
0x91D73D: movss   xmm4, [esp+60h+var_54]
0x91D743: movaps  xmm5, xmm4
0x91D746: shufps  xmm5, xmm4, 0
0x91D74A: mulps   xmm5, xmm1
0x91D74D: movaps  xmm1, xmm0
0x91D750: addps   xmm1, xmm5
0x91D753: movaps  [esp+60h+var_30], xmm1
0x91D758: movaps  xmm1, xmm3
0x91D75B: shufps  xmm1, xmm3, 0
0x91D75F: push    edi
0x91D760: mulps   xmm1, xmm2
0x91D763: movaps  xmm3, xmm0
0x91D766: addps   xmm3, xmm1
0x91D769: push    ebx
0x91D76A: lea     eax, [esp+68h+var_50]
0x91D76E: movaps  xmm1, xmm4
0x91D771: push    eax
0x91D772: shufps  xmm1, xmm4, 0
0x91D776: mulps   xmm1, xmm2
0x91D779: push    ecx
0x91D77A: addps   xmm0, xmm1
0x91D77D: mov     ecx, esi
0x91D77F: movaps  [esp+70h+var_20], xmm3
0x91D784: movaps  [esp+70h+var_10], xmm0
0x91D789: call    dword ptr [edx+1Ch]
0x91D78C: mov     edx, [esi]
0x91D78E: push    edi
0x91D78F: push    ebx
0x91D790: lea     eax, [esp+68h+var_40]
0x91D794: push    eax
0x91D795: lea     ecx, [esp+6Ch+var_50]
0x91D799: push    ecx
0x91D79A: mov     ecx, esi
0x91D79C: call    dword ptr [edx+1Ch]
0x91D79F: mov     edx, [esi]
0x91D7A1: push    edi
0x91D7A2: push    ebx
0x91D7A3: lea     eax, [esp+68h+var_30]
0x91D7A7: push    eax
0x91D7A8: lea     ecx, [esp+6Ch+var_50]
0x91D7AC: push    ecx
0x91D7AD: mov     ecx, esi
0x91D7AF: call    dword ptr [edx+1Ch]
0x91D7B2: mov     edx, [esi]
0x91D7B4: push    edi
0x91D7B5: push    ebx
0x91D7B6: lea     eax, [esp+68h+var_20]
0x91D7BA: push    eax
0x91D7BB: lea     ecx, [esp+6Ch+var_50]
0x91D7BF: push    ecx
0x91D7C0: mov     ecx, esi
0x91D7C2: call    dword ptr [edx+1Ch]
0x91D7C5: mov     edx, [esi]
0x91D7C7: push    edi
0x91D7C8: push    ebx
0x91D7C9: lea     eax, [esp+68h+var_10]
0x91D7CD: push    eax
0x91D7CE: lea     ecx, [esp+6Ch+var_50]
0x91D7D2: push    ecx
0x91D7D3: mov     ecx, esi
0x91D7D5: call    dword ptr [edx+1Ch]
0x91D7D8: mov     esp, ebp
0x91D7DA: pop     ebp
0x91D7DB: retn
