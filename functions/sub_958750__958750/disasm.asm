0x958750: push    ebp
0x958751: mov     ebp, esp
0x958753: and     esp, 0FFFFFFF0h
0x958756: sub     esp, 74h
0x958759: mov     eax, [ebp+arg_10]
0x95875C: mov     edx, [ebp+arg_0]
0x95875F: push    ebx
0x958760: mov     ebx, [ebp+arg_C]
0x958763: push    esi
0x958764: push    edi
0x958765: mov     edi, [ebp+arg_14]
0x958768: mov     dword ptr [esp+80h+var_80+0Ch], eax
0x95876C: movss   xmm0, dword ptr [esp+80h+var_80+0Ch]
0x958772: movaps  xmm2, xmm0
0x958775: shufps  xmm2, xmm0, 0
0x958779: movaps  xmm0, xmmword ptr [edx]
0x95877C: push    edi
0x95877D: mov     esi, ecx
0x95877F: mov     ecx, [ebp+arg_4]
0x958782: movaps  xmm1, xmmword ptr [ecx]
0x958785: mov     ecx, [esi]
0x958787: push    ebx
0x958788: lea     edx, [esp+88h+var_70]
0x95878C: push    edx
0x95878D: mov     edx, [ebp+arg_0]
0x958790: mulps   xmm2, xmm1
0x958793: addps   xmm0, xmm2
0x958796: movaps  [esp+8Ch+var_70], xmm0
0x95879B: mov     eax, [ecx]
0x95879D: push    edx
0x95879E: call    dword ptr [eax+1Ch]
0x9587A1: mov     eax, [ebp+arg_8]
0x9587A4: push    3F490FDBh; float
0x9587A9: push    eax; int
0x9587AA: lea     ecx, [esp+88h+var_60]
0x9587AE: call    sub_8B1B00
0x9587B3: mov     ecx, [ebp+arg_8]
0x9587B6: push    0BFC90FDBh; float
0x9587BB: push    ecx; int
0x9587BC: lea     ecx, [esp+88h+var_50]
0x9587C0: call    sub_8B1B00
0x9587C5: fld     dword ptr [esp+80h+var_60+0Ch]
0x9587C9: fmul    dword ptr [esp+80h+var_60+0Ch]
0x9587CD: movaps  xmm0, [esp+80h+var_60]
0x9587D2: mov     edx, [ebp+arg_4]
0x9587D5: movaps  xmm1, xmmword ptr [edx]
0x9587D8: fadd    st, st
0x9587DA: movaps  [esp+80h+var_30], xmm0
0x9587DF: mov     dword ptr [esp+80h+var_30+0Ch], 0
0x9587E7: movaps  xmm2, [esp+80h+var_30]
0x9587EC: fsub    dword ptr ds:0A2F948h
0x9587F2: movaps  xmm0, xmm2
0x9587F5: mulps   xmm0, xmm1
0x9587F8: movaps  xmm4, xmm0
0x9587FB: fstp    dword ptr [esp+80h+var_80+0Ch]
0x9587FF: movss   xmm3, dword ptr [esp+80h+var_80+0Ch]
0x958805: shufps  xmm4, xmm0, 55h ; 'U'
0x958809: addss   xmm4, xmm0
0x95880D: movaps  xmm5, xmm0
0x958810: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x958814: addss   xmm5, xmm4
0x958818: lea     eax, [esp+80h+var_80+0Ch]
0x95881C: movss   dword ptr [eax], xmm5
0x958820: fld     dword ptr [esp+80h+var_80+0Ch]
0x958824: fadd    st, st
0x958826: movaps  xmm5, xmm1
0x958829: shufps  xmm5, xmm1, 0C9h ; 'É'
0x95882D: movaps  xmm6, xmm2
0x958830: fstp    dword ptr [esp+80h+var_80+0Ch]
0x958834: movss   xmm0, dword ptr [esp+80h+var_80+0Ch]
0x95883A: fld     dword ptr [esp+80h+var_60+0Ch]
0x95883E: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x958842: mulps   xmm6, xmm5
0x958845: fadd    st, st
0x958847: movaps  xmm5, xmm1
0x95884A: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x95884E: movaps  xmm7, xmm2
0x958851: fstp    dword ptr [esp+80h+var_80+0Ch]
0x958855: movss   xmm4, dword ptr [esp+80h+var_80+0Ch]
0x95885B: shufps  xmm7, xmm2, 0C9h ; 'É'
0x95885F: mulps   xmm7, xmm5
0x958862: movaps  xmm5, xmm4
0x958865: subps   xmm7, xmm6
0x958868: shufps  xmm5, xmm4, 0
0x95886C: mulps   xmm5, xmm7
0x95886F: fld     [ebp+arg_10]
0x958872: mov     ecx, [esi]
0x958874: fmul    dword ptr ds:0AA3730h
0x95887A: movaps  xmm4, xmm0
0x95887D: shufps  xmm4, xmm0, 0
0x958881: mulps   xmm4, xmm2
0x958884: movaps  xmm0, xmm3
0x958887: fstp    dword ptr [esp+80h+var_80+0Ch]
0x95888B: shufps  xmm0, xmm3, 0
0x95888F: mulps   xmm0, xmm1
0x958892: movss   xmm1, dword ptr [esp+80h+var_80+0Ch]
0x958898: push    edi
0x958899: addps   xmm0, xmm4
0x95889C: addps   xmm0, xmm5
0x95889F: movaps  xmm2, xmm1
0x9588A2: push    ebx
0x9588A3: movaps  [esp+88h+var_20], xmm0
0x9588A8: shufps  xmm2, xmm1, 0
0x9588AC: mulps   xmm2, xmm0
0x9588AF: movaps  xmm0, [esp+88h+var_70]
0x9588B4: lea     eax, [esp+88h+var_40]
0x9588B8: push    eax
0x9588B9: addps   xmm0, xmm2
0x9588BC: lea     eax, [esp+8Ch+var_70]
0x9588C0: movaps  [esp+8Ch+var_40], xmm0
0x9588C5: mov     edx, [ecx]
0x9588C7: push    eax
0x9588C8: movaps  [esp+90h+var_10], xmm1
0x9588D0: call    dword ptr [edx+1Ch]
0x9588D3: fld     dword ptr [esp+80h+var_50+0Ch]
0x9588D7: fmul    dword ptr [esp+80h+var_50+0Ch]
0x9588DB: movaps  xmm1, [esp+80h+var_20]
0x9588E0: movaps  xmm0, [esp+80h+var_50]
0x9588E5: movaps  [esp+80h+var_30], xmm0
0x9588EA: fadd    st, st
0x9588EC: mov     dword ptr [esp+80h+var_30+0Ch], 0
0x9588F4: movaps  xmm2, [esp+80h+var_30]
0x9588F9: movaps  xmm0, xmm2
0x9588FC: fsub    dword ptr ds:0A2F948h
0x958902: mulps   xmm0, xmm1
0x958905: movaps  xmm4, xmm0
0x958908: shufps  xmm4, xmm0, 55h ; 'U'
0x95890C: addss   xmm4, xmm0
0x958910: fstp    dword ptr [esp+80h+var_80+0Ch]
0x958914: movss   xmm3, dword ptr [esp+80h+var_80+0Ch]
0x95891A: movaps  xmm5, xmm0
0x95891D: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x958921: addss   xmm5, xmm4
0x958925: lea     ecx, [esp+80h+var_80+0Ch]
0x958929: movss   dword ptr [ecx], xmm5
0x95892D: fld     dword ptr [esp+80h+var_80+0Ch]
0x958931: fadd    st, st
0x958933: movaps  xmm5, xmm1
0x958936: shufps  xmm5, xmm1, 0C9h ; 'É'
0x95893A: movaps  xmm6, xmm2
0x95893D: fstp    dword ptr [esp+80h+var_80+0Ch]
0x958941: movss   xmm0, dword ptr [esp+80h+var_80+0Ch]
0x958947: fld     dword ptr [esp+80h+var_50+0Ch]
0x95894B: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x95894F: mulps   xmm6, xmm5
0x958952: fadd    st, st
0x958954: movaps  xmm5, xmm1
0x958957: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x95895B: movaps  xmm7, xmm2
0x95895E: fstp    dword ptr [esp+80h+var_80+0Ch]
0x958962: movss   xmm4, dword ptr [esp+80h+var_80+0Ch]
0x958968: shufps  xmm7, xmm2, 0C9h ; 'É'
0x95896C: mulps   xmm7, xmm5
0x95896F: movaps  xmm5, xmm4
0x958972: shufps  xmm5, xmm4, 0
0x958976: movaps  xmm4, xmm0
0x958979: shufps  xmm4, xmm0, 0
0x95897D: movaps  xmm0, xmm3
0x958980: shufps  xmm0, xmm3, 0
0x958984: mulps   xmm0, xmm1
0x958987: subps   xmm7, xmm6
0x95898A: mulps   xmm4, xmm2
0x95898D: mulps   xmm5, xmm7
0x958990: addps   xmm0, xmm4
0x958993: addps   xmm0, xmm5
0x958996: movaps  xmm1, xmm0
0x958999: movaps  xmm0, [esp+80h+var_10]
0x95899E: mov     esi, [esi]
0x9589A0: push    edi
0x9589A1: movaps  xmm2, xmm0
0x9589A4: shufps  xmm2, xmm0, 0
0x9589A8: movaps  xmm0, [esp+84h+var_70]
0x9589AD: push    ebx
0x9589AE: lea     eax, [esp+88h+var_40]
0x9589B2: mulps   xmm2, xmm1
0x9589B5: push    eax
0x9589B6: lea     ecx, [esp+8Ch+var_70]
0x9589BA: addps   xmm0, xmm2
0x9589BD: movaps  [esp+8Ch+var_40], xmm0
0x9589C2: mov     edx, [esi]
0x9589C4: push    ecx
0x9589C5: mov     ecx, esi
0x9589C7: call    dword ptr [edx+1Ch]
0x9589CA: pop     edi
0x9589CB: pop     esi
0x9589CC: pop     ebx
0x9589CD: mov     esp, ebp
0x9589CF: pop     ebp
0x9589D0: retn    18h
