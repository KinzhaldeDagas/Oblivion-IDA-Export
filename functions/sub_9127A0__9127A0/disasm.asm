0x9127A0: push    ebp
0x9127A1: mov     ebp, esp
0x9127A3: and     esp, 0FFFFFFF0h
0x9127A6: sub     esp, 4Ch
0x9127A9: mov     eax, [ebp+arg_0]
0x9127AC: mov     ecx, [eax]
0x9127AE: add     ecx, 4
0x9127B1: mov     [eax], ecx
0x9127B3: mov     eax, ecx
0x9127B5: mov     eax, [eax]
0x9127B7: lea     ecx, [eax+5]
0x9127BA: shl     ecx, 4
0x9127BD: push    esi
0x9127BE: mov     esi, [ebp+arg_C]
0x9127C1: add     ecx, esi
0x9127C3: mov     edx, [ecx]
0x9127C5: add     eax, 8
0x9127C8: mov     dword ptr [esp+50h+var_40], edx
0x9127CC: mov     edx, [ecx+4]
0x9127CF: shl     eax, 4
0x9127D2: mov     dword ptr [esp+50h+var_40+4], edx
0x9127D6: mov     edx, [ecx+8]
0x9127D9: mov     ecx, [ecx+0Ch]
0x9127DC: add     eax, esi
0x9127DE: mov     dword ptr [esp+50h+var_40+8], edx
0x9127E2: mov     edx, [eax]
0x9127E4: mov     dword ptr [esp+50h+var_40+0Ch], ecx
0x9127E8: mov     ecx, [eax+4]
0x9127EB: mov     dword ptr [esp+50h+var_30], edx
0x9127EF: mov     edx, [eax+8]
0x9127F2: mov     eax, [eax+0Ch]
0x9127F5: mov     dword ptr [esp+50h+var_30+4], ecx
0x9127F9: mov     dword ptr [esp+50h+var_30+0Ch], eax
0x9127FD: mov     dword ptr [esp+50h+var_30+8], edx
0x912801: movaps  xmm0, [esp+50h+var_30]
0x912806: movaps  xmm1, xmm0
0x912809: shufps  xmm1, xmm0, 0C9h ; 'É'
0x91280D: movaps  xmm2, xmm1
0x912810: movaps  xmm1, [esp+50h+var_40]
0x912815: movaps  xmm3, xmm1
0x912818: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x91281C: mulps   xmm3, xmm2
0x91281F: movaps  xmm2, xmm0
0x912822: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x912826: movaps  xmm0, xmm1
0x912829: shufps  xmm0, xmm1, 0C9h ; 'É'
0x91282D: movaps  xmm1, xmm0
0x912830: mulps   xmm1, xmm2
0x912833: subps   xmm1, xmm3
0x912836: movaps  xmm0, xmm1
0x912839: mulps   xmm0, xmm1
0x91283C: movaps  xmm2, xmm0
0x91283F: shufps  xmm2, xmm0, 55h ; 'U'
0x912843: movaps  xmm3, xmm0
0x912846: addss   xmm2, xmm0
0x91284A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x91284E: lea     ecx, [esp+50h+var_44]
0x912852: addss   xmm3, xmm2
0x912856: movss   dword ptr [ecx], xmm3
0x91285A: fld     [esp+50h+var_44]
0x91285E: fcomp   dword ptr ds:0A9CD60h
0x912864: fnstsw  ax
0x912866: test    ah, 5
0x912869: jnp     loc_912934
0x91286F: fld     dword ptr [esp+50h+var_40+8]
0x912873: mov     ecx, [ebp+arg_4]
0x912876: fmul    dword ptr [esp+50h+var_30+8]
0x91287A: mov     eax, [ecx]
0x91287C: fld     dword ptr [esp+50h+var_40+4]
0x912880: movaps  xmm2, xmm0
0x912883: fmul    dword ptr [esp+50h+var_30+4]
0x912887: shufps  xmm2, xmm0, 55h ; 'U'
0x91288B: addss   xmm2, xmm0
0x91288F: movaps  xmm3, xmm0
0x912892: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x912896: movaps  xmm0, xmm3
0x912899: addss   xmm0, xmm2
0x91289D: movaps  [esp+50h+var_20], xmm0
0x9128A2: rsqrtss xmm2, xmm0
0x9128A6: movss   dword ptr [esp+50h+var_20], xmm2
0x9128AC: movaps  xmm2, [esp+50h+var_20]
0x9128B1: mulss   xmm0, xmm2
0x9128B5: mulss   xmm0, xmm2
0x9128B9: faddp   st(1), st
0x9128BB: fld     dword ptr [esp+50h+var_40]
0x9128BF: mov     [esp+50h+var_44], 40400000h
0x9128C7: fmul    dword ptr [esp+50h+var_30]
0x9128CB: movss   xmm3, [esp+50h+var_44]
0x9128D1: subss   xmm3, xmm0
0x9128D5: mov     [esp+50h+var_44], 3F000000h
0x9128DD: movss   xmm0, [esp+50h+var_44]
0x9128E3: mulss   xmm0, xmm2
0x9128E7: mulss   xmm0, xmm3
0x9128EB: faddp   st(1), st
0x9128ED: lea     edx, [eax+10h]
0x9128F0: movaps  xmm2, xmm0
0x9128F3: mov     [ecx], edx
0x9128F5: fstp    [esp+50h+var_8]
0x9128F9: shufps  xmm2, xmm0, 0
0x9128FD: mulps   xmm2, xmm1
0x912900: movaps  [esp+50h+var_20], xmm2
0x912905: mov     ecx, [eax]
0x912907: mov     [esp+50h+var_10], ecx
0x91290B: mov     edx, [eax+4]
0x91290E: mov     eax, [ebp+arg_14]
0x912911: mov     ecx, [ebp+arg_10]
0x912914: push    eax
0x912915: mov     [esp+54h+var_C], edx
0x912919: push    ecx
0x91291A: lea     edx, [esp+58h+var_20]
0x91291E: push    edx
0x91291F: call    sub_8F1B60
0x912924: mov     eax, [esi+0B8h]
0x91292A: add     esp, 0Ch
0x91292D: inc     eax
0x91292E: mov     [esi+0B8h], eax
0x912934: pop     esi
0x912935: mov     esp, ebp
0x912937: pop     ebp
0x912938: retn    18h
