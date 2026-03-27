0x91F430: push    ebp
0x91F431: mov     ebp, esp
0x91F433: and     esp, 0FFFFFFF0h
0x91F436: sub     esp, 78h
0x91F439: push    esi
0x91F43A: push    edi
0x91F43B: mov     esi, [ebp+arg_0]
0x91F43E: movaps  xmm0, xmmword ptr [esi+20h]
0x91F442: movaps  xmm1, xmmword ptr [esi+10h]
0x91F446: movaps  xmm2, xmm0
0x91F449: shufps  xmm2, xmm0, 0C9h ; 'É'
0x91F44D: movaps  xmm3, xmm1
0x91F450: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x91F454: mulps   xmm3, xmm2
0x91F457: movaps  xmm2, xmm0
0x91F45A: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x91F45E: movaps  xmm0, xmm1
0x91F461: shufps  xmm0, xmm1, 0C9h ; 'É'
0x91F465: mulps   xmm0, xmm2
0x91F468: movaps  xmm2, xmm0
0x91F46B: subps   xmm2, xmm3
0x91F46E: movaps  xmm0, xmm2
0x91F471: mulps   xmm0, xmm2
0x91F474: movaps  xmm1, xmm0
0x91F477: shufps  xmm1, xmm0, 55h ; 'U'
0x91F47B: movaps  xmm3, xmm0
0x91F47E: lea     eax, [esp+80h+var_74]
0x91F482: addss   xmm1, xmm0
0x91F486: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x91F48A: addss   xmm3, xmm1
0x91F48E: movss   dword ptr [eax], xmm3
0x91F492: fld     [esp+80h+var_74]
0x91F496: fcomp   dword ptr ds:0A9DD54h
0x91F49C: fnstsw  ax
0x91F49E: test    ah, 5
0x91F4A1: jnp     loc_91F6A7
0x91F4A7: movaps  xmm1, xmm0
0x91F4AA: shufps  xmm1, xmm0, 55h ; 'U'
0x91F4AE: addss   xmm1, xmm0
0x91F4B2: movaps  xmm3, xmm0
0x91F4B5: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x91F4B9: movaps  xmm0, xmm3
0x91F4BC: addss   xmm0, xmm1
0x91F4C0: movaps  [esp+80h+var_70], xmm0
0x91F4C5: rsqrtss xmm1, xmm0
0x91F4C9: movss   dword ptr [esp+80h+var_70], xmm1
0x91F4CF: movaps  xmm1, [esp+80h+var_70]
0x91F4D4: mulss   xmm0, xmm1
0x91F4D8: mulss   xmm0, xmm1
0x91F4DC: mov     [esp+80h+var_74], 40400000h
0x91F4E4: movss   xmm3, [esp+80h+var_74]
0x91F4EA: movaps  [esp+80h+var_50], xmm3
0x91F4EF: subss   xmm3, xmm0
0x91F4F3: mov     [esp+80h+var_74], 3F000000h
0x91F4FB: movss   xmm4, [esp+80h+var_74]
0x91F501: movaps  [esp+80h+var_40], xmm4
0x91F506: mulss   xmm4, xmm1
0x91F50A: movaps  xmm0, xmm4
0x91F50D: mulss   xmm0, xmm3
0x91F511: movaps  xmm1, xmm0
0x91F514: shufps  xmm1, xmm0, 0
0x91F518: movaps  xmm0, xmm1
0x91F51B: movaps  xmm1, xmmword ptr [esi+30h]
0x91F51F: mulps   xmm0, xmm2
0x91F522: movaps  xmm2, xmm1
0x91F525: shufps  xmm2, xmm1, 0C9h ; 'É'
0x91F529: movaps  xmm3, xmm0
0x91F52C: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x91F530: mulps   xmm3, xmm2
0x91F533: movaps  xmm2, xmm1
0x91F536: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x91F53A: movaps  xmm1, xmm0
0x91F53D: shufps  xmm1, xmm0, 0C9h ; 'É'
0x91F541: movaps  xmm0, xmm1
0x91F544: movaps  xmm1, xmmword ptr [esi+30h]
0x91F548: mulps   xmm0, xmm2
0x91F54B: subps   xmm0, xmm3
0x91F54E: movaps  xmm2, xmm1
0x91F551: shufps  xmm2, xmm1, 0C9h ; 'É'
0x91F555: movaps  xmm3, xmm0
0x91F558: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x91F55C: mulps   xmm3, xmm2
0x91F55F: movaps  xmm2, xmm1
0x91F562: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x91F566: movaps  xmm1, xmm0
0x91F569: shufps  xmm1, xmm0, 0C9h ; 'É'
0x91F56D: mulps   xmm1, xmm2
0x91F570: movaps  [esp+80h+var_30], xmm0
0x91F575: movaps  xmm0, xmmword ptr [esi+30h]
0x91F579: subps   xmm1, xmm3
0x91F57C: lea     ecx, [esp+80h+var_70]
0x91F580: movaps  [esp+80h+var_20], xmm1
0x91F585: movaps  xmm1, xmmword ptr [esi+40h]
0x91F589: push    ecx
0x91F58A: movaps  [esp+84h+var_10], xmm0
0x91F58F: movaps  xmm0, xmmword ptr [esi+70h]
0x91F593: lea     edx, [esp+84h+var_30]
0x91F597: subps   xmm1, xmm0
0x91F59A: push    edx
0x91F59B: lea     ecx, [esp+88h+var_70]
0x91F59F: movaps  [esp+88h+var_70], xmm1
0x91F5A4: call    sub_88FD90
0x91F5A9: fld     dword ptr [esi+60h]
0x91F5AC: movaps  xmm3, [esp+80h+var_70]
0x91F5B1: movaps  xmm1, xmmword ptr [esi+50h]
0x91F5B5: subps   xmm1, xmm3
0x91F5B8: movaps  xmm0, xmm1
0x91F5BB: mulps   xmm0, xmm1
0x91F5BE: movaps  xmm2, xmm0
0x91F5C1: shufps  xmm2, xmm0, 55h ; 'U'
0x91F5C5: movaps  xmm4, xmm0
0x91F5C8: addss   xmm2, xmm0
0x91F5CC: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x91F5D0: lea     eax, [esp+80h+var_74]
0x91F5D4: addss   xmm4, xmm2
0x91F5D8: movss   dword ptr [eax], xmm4
0x91F5DC: fld     [esp+80h+var_74]
0x91F5E0: fmul    dword ptr [esi]
0x91F5E2: fld     st(1)
0x91F5E4: fmul    st, st(2)
0x91F5E6: fcompp
0x91F5E8: fnstsw  ax
0x91F5EA: fstp    st
0x91F5EC: test    ah, 5
0x91F5EF: jp      short loc_91F668
0x91F5F1: fld     dword ptr [esi+60h]
0x91F5F4: movaps  xmm2, xmm0
0x91F5F7: fdiv    dword ptr [esi]
0x91F5F9: shufps  xmm2, xmm0, 55h ; 'U'
0x91F5FD: addss   xmm2, xmm0
0x91F601: movaps  xmm4, xmm0
0x91F604: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x91F608: movaps  xmm0, xmm4
0x91F60B: addss   xmm0, xmm2
0x91F60F: movaps  [esp+80h+var_60], xmm0
0x91F614: rsqrtss xmm2, xmm0
0x91F618: movss   dword ptr [esp+80h+var_60], xmm2
0x91F61E: movaps  xmm2, [esp+80h+var_60]
0x91F623: mulss   xmm0, xmm2
0x91F627: mulss   xmm0, xmm2
0x91F62B: movaps  xmm4, xmm0
0x91F62E: movaps  xmm0, [esp+80h+var_50]
0x91F633: subss   xmm0, xmm4
0x91F637: movaps  xmm4, xmm0
0x91F63A: movaps  xmm0, [esp+80h+var_40]
0x91F63F: mulss   xmm0, xmm2
0x91F643: mulss   xmm0, xmm4
0x91F647: movaps  xmm4, xmm0
0x91F64A: shufps  xmm4, xmm0, 0
0x91F64E: mulps   xmm4, xmm1
0x91F651: fstp    [esp+80h+var_74]
0x91F655: movss   xmm2, [esp+80h+var_74]
0x91F65B: movaps  xmm0, xmm2
0x91F65E: shufps  xmm0, xmm2, 0
0x91F662: movaps  xmm1, xmm0
0x91F665: mulps   xmm1, xmm4
0x91F668: mov     ecx, [esi]
0x91F66A: mov     edi, [ebp+arg_4]
0x91F66D: mov     [esp+80h+var_74], ecx
0x91F671: movss   xmm0, [esp+80h+var_74]
0x91F677: lea     edx, [esp+80h+var_70]
0x91F67B: movaps  xmm2, xmm0
0x91F67E: shufps  xmm2, xmm0, 0
0x91F682: push    edx
0x91F683: lea     eax, [esp+84h+var_30]
0x91F687: mulps   xmm2, xmm1
0x91F68A: addps   xmm3, xmm2
0x91F68D: push    eax
0x91F68E: mov     ecx, edi
0x91F690: movaps  [esp+88h+var_70], xmm3
0x91F695: call    sub_88FE00
0x91F69A: movaps  xmm0, xmmword ptr [esi+70h]
0x91F69E: movaps  xmm1, xmmword ptr [edi]
0x91F6A1: addps   xmm1, xmm0
0x91F6A4: movaps  xmmword ptr [edi], xmm1
0x91F6A7: pop     edi
0x91F6A8: pop     esi
0x91F6A9: mov     esp, ebp
0x91F6AB: pop     ebp
0x91F6AC: retn
