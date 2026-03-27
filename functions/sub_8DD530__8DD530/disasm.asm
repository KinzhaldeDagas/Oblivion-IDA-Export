0x8DD530: push    ebp
0x8DD531: mov     ebp, esp
0x8DD533: and     esp, 0FFFFFFF0h
0x8DD536: sub     esp, 1Ch
0x8DD539: fld     [ebp+arg_0]
0x8DD53C: push    esi
0x8DD53D: mov     esi, [ebp+arg_4]
0x8DD540: fsub    dword ptr [esi+4Ch]
0x8DD543: fmul    dword ptr [esi+5Ch]
0x8DD546: fcom    dword ptr ds:0A9A468h
0x8DD54C: fnstsw  ax
0x8DD54E: test    ah, 41h
0x8DD551: jz      short loc_8DD55B
0x8DD553: fstp    st
0x8DD555: fld     dword ptr ds:0A9A468h
0x8DD55B: movaps  xmm3, xmmword ptr [esi+60h]
0x8DD55F: movaps  xmm4, xmmword ptr [esi+70h]
0x8DD563: lea     ecx, [esi+70h]
0x8DD566: movaps  xmm1, xmm3
0x8DD569: addps   xmm1, xmm4
0x8DD56C: movaps  xmm2, xmm1
0x8DD56F: mulps   xmm2, xmm1
0x8DD572: movaps  xmm0, xmm2
0x8DD575: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8DD579: addps   xmm0, xmm2
0x8DD57C: movaps  xmm2, xmm0
0x8DD57F: shufps  xmm2, xmm0, 0B1h ; '±'
0x8DD583: addps   xmm0, xmm2
0x8DD586: lea     eax, [esp+20h+var_14]
0x8DD58A: movss   dword ptr [eax], xmm0
0x8DD58E: fld     [esp+20h+var_14]
0x8DD592: fmul    dword ptr ds:0A9A480h
0x8DD598: movaps  xmmword ptr [ecx], xmm1
0x8DD59B: fsubr   dword ptr ds:0A41328h
0x8DD5A1: fld     [esp+20h+var_14]
0x8DD5A5: fmul    st, st(1)
0x8DD5A7: fmul    st, st(1)
0x8DD5A9: fmul    dword ptr ds:0A3D65Ch
0x8DD5AF: fsubr   dword ptr ds:0A35AA4h
0x8DD5B5: fmul    st, st(1)
0x8DD5B7: fstp    [esp+20h+var_14]
0x8DD5BB: movss   xmm0, [esp+20h+var_14]
0x8DD5C1: movaps  xmm2, xmm0
0x8DD5C4: fstp    st
0x8DD5C6: shufps  xmm2, xmm0, 0
0x8DD5CA: fcom    dword ptr ds:0A3D65Ch
0x8DD5D0: movaps  xmm0, xmm2
0x8DD5D3: fld     st
0x8DD5D5: mulps   xmm0, xmm1
0x8DD5D8: movaps  xmmword ptr [ecx], xmm0
0x8DD5DB: fadd    st, st(1)
0x8DD5DD: fnstsw  ax
0x8DD5DF: test    ah, 5
0x8DD5E2: jp      short loc_8DD60D
0x8DD5E4: fstp    [esp+20h+var_14]
0x8DD5E8: movss   xmm1, [esp+20h+var_14]
0x8DD5EE: shufps  xmm1, xmm1, 0
0x8DD5F2: movaps  xmm2, xmm1
0x8DD5F5: mulps   xmm2, xmm0
0x8DD5F8: movaps  xmm0, xmmword ptr ds:0A6DFE0h
0x8DD5FF: subps   xmm0, xmm1
0x8DD602: mulps   xmm0, xmm3
0x8DD605: addps   xmm0, xmm2
0x8DD608: movaps  xmmword ptr [ecx], xmm0
0x8DD60B: jmp     short loc_8DD63A
0x8DD60D: fsub    dword ptr ds:0A2F948h
0x8DD613: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD61A: fstp    [esp+20h+var_14]
0x8DD61E: movss   xmm1, [esp+20h+var_14]
0x8DD624: shufps  xmm1, xmm1, 0
0x8DD628: subps   xmm3, xmm1
0x8DD62B: movaps  xmm2, xmm1
0x8DD62E: mulps   xmm2, xmm4
0x8DD631: mulps   xmm3, xmm0
0x8DD634: addps   xmm3, xmm2
0x8DD637: movaps  xmmword ptr [ecx], xmm3
0x8DD63A: movaps  xmm2, xmmword ptr [ecx]
0x8DD63D: movaps  xmm1, xmm2
0x8DD640: mulps   xmm1, xmm2
0x8DD643: movaps  xmm0, xmm1
0x8DD646: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8DD64A: addps   xmm0, xmm1
0x8DD64D: movaps  xmm1, xmm0
0x8DD650: shufps  xmm1, xmm0, 0B1h ; '±'
0x8DD654: addps   xmm0, xmm1
0x8DD657: movaps  [esp+20h+var_10], xmm0
0x8DD65C: rsqrtss xmm1, xmm0
0x8DD660: movss   dword ptr [esp+20h+var_10], xmm1
0x8DD666: movaps  xmm1, [esp+20h+var_10]
0x8DD66B: mulss   xmm0, xmm1
0x8DD66F: mulss   xmm0, xmm1
0x8DD673: mov     [esp+20h+var_14], 40400000h
0x8DD67B: movss   xmm3, [esp+20h+var_14]
0x8DD681: subss   xmm3, xmm0
0x8DD685: mov     [esp+20h+var_14], 3F000000h
0x8DD68D: movss   xmm0, [esp+20h+var_14]
0x8DD693: mulss   xmm0, xmm1
0x8DD697: mulss   xmm0, xmm3
0x8DD69B: movaps  xmm1, xmm0
0x8DD69E: shufps  xmm1, xmm0, 0
0x8DD6A2: mulps   xmm1, xmm2
0x8DD6A5: movaps  xmmword ptr [ecx], xmm1
0x8DD6A8: fld     dword ptr [esi+5Ch]
0x8DD6AB: fld     st(1)
0x8DD6AD: movaps  xmm2, xmmword ptr [esi+50h]
0x8DD6B1: fstp    [esp+20h+var_14]
0x8DD6B5: movss   xmm0, [esp+20h+var_14]
0x8DD6BB: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x8DD6C2: fdiv    st, st(1)
0x8DD6C4: movaps  xmm1, xmm0
0x8DD6C7: shufps  xmm1, xmm0, 0
0x8DD6CB: movaps  xmm3, xmm1
0x8DD6CE: mulps   xmm3, xmm2
0x8DD6D1: movaps  xmm2, xmmword ptr [esi+40h]
0x8DD6D5: subps   xmm4, xmm1
0x8DD6D8: mulps   xmm4, xmm2
0x8DD6DB: addps   xmm4, xmm3
0x8DD6DE: movaps  xmmword ptr [esi+50h], xmm4
0x8DD6E2: movaps  xmm2, xmm0
0x8DD6E5: shufps  xmm2, xmm0, 0
0x8DD6E9: push    ecx
0x8DD6EA: mov     ecx, esi
0x8DD6EC: fstp    dword ptr [esi+5Ch]
0x8DD6EF: movaps  xmm1, xmmword ptr [esi+90h]
0x8DD6F6: mulps   xmm2, xmm1
0x8DD6F9: fstp    st
0x8DD6FB: movaps  xmmword ptr [esi+90h], xmm2
0x8DD702: call    sub_8B1DD0
0x8DD707: movaps  xmm0, xmmword ptr [esi+80h]
0x8DD70E: movaps  xmm2, xmmword ptr [esi+20h]
0x8DD712: movaps  xmm3, xmmword ptr [esi+10h]
0x8DD716: movaps  xmm1, xmm0
0x8DD719: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DD71D: mulps   xmm2, xmm1
0x8DD720: movaps  xmm1, xmm0
0x8DD723: shufps  xmm1, xmm0, 55h ; 'U'
0x8DD727: mulps   xmm3, xmm1
0x8DD72A: movaps  xmm1, xmm0
0x8DD72D: shufps  xmm1, xmm0, 0
0x8DD731: movaps  xmm0, xmmword ptr [esi]
0x8DD734: mulps   xmm0, xmm1
0x8DD737: movaps  xmm1, xmmword ptr [esi+50h]
0x8DD73B: addps   xmm0, xmm3
0x8DD73E: addps   xmm0, xmm2
0x8DD741: subps   xmm1, xmm0
0x8DD744: movaps  xmmword ptr [esi+30h], xmm1
0x8DD748: pop     esi
0x8DD749: mov     esp, ebp
0x8DD74B: pop     ebp
0x8DD74C: retn
