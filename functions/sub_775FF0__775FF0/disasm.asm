0x775FF0: sub     esp, 24h
0x775FF3: push    esi
0x775FF4: push    edi
0x775FF5: mov     edi, [esp+2Ch+arg_0]
0x775FF9: mov     eax, [edi+0B8h]
0x775FFF: mov     esi, ecx
0x776001: cmp     [esi+68h], eax
0x776004: jz      loc_776228
0x77600A: push    68h ; 'h'
0x77600C: push    0
0x77600E: push    esi
0x77600F: mov     [esi+68h], eax
0x776012: call    __memset
0x776017: mov     eax, [edi]
0x776019: mov     edx, [eax+84h]
0x77601F: add     esp, 0Ch
0x776022: mov     ecx, edi
0x776024: call    edx
0x776026: sub     eax, 1
0x776029: jz      loc_776202
0x77602F: sub     eax, 1
0x776032: jz      loc_7761DC
0x776038: sub     eax, 1
0x77603B: jnz     loc_7760C4
0x776041: mov     dword ptr [esi], 2
0x776047: fld     dword ptr [edi+88h]
0x77604D: fstp    dword ptr [esi+34h]
0x776050: fld     dword ptr [edi+8Ch]
0x776056: fstp    dword ptr [esi+38h]
0x776059: fld     dword ptr [edi+90h]
0x77605F: fstp    dword ptr [esi+3Ch]
0x776062: fld     dword ptr [edi+114h]
0x776068: fstp    dword ptr [esi+40h]
0x77606B: fld     dword ptr [edi+118h]
0x776071: fstp    dword ptr [esi+44h]
0x776074: fld     dword ptr [edi+11Ch]
0x77607A: fstp    dword ptr [esi+48h]
0x77607D: fldz
0x77607F: fstp    dword ptr [esi+60h]
0x776082: fld     dword ptr [edi+120h]
0x776088: fmul    dword ptr ds:0B3F9A4h
0x77608E: fdiv    qword ptr ds:0A65A18h
0x776094: fstp    dword ptr [esi+64h]
0x776097: fld     dword ptr [edi+124h]
0x77609D: fstp    dword ptr [esi+50h]
0x7760A0: fld     dword ptr [edi+108h]
0x7760A6: fstp    dword ptr [esi+54h]
0x7760A9: fld     dword ptr [edi+10Ch]
0x7760AF: fstp    dword ptr [esi+58h]
0x7760B2: fld     dword ptr [edi+110h]
0x7760B8: fstp    dword ptr [esi+5Ch]
0x7760BB: fld     dword ptr ds:0B42844h
0x7760C1: fstp    dword ptr [esi+4Ch]
0x7760C4: mov     eax, [edi+0E0h]
0x7760CA: fld     dword ptr [edi+0DCh]
0x7760D0: fstp    [esp+2Ch+arg_0]
0x7760D4: mov     ecx, [edi+0E4h]
0x7760DA: mov     edx, [edi+0E8h]
0x7760E0: mov     [esp+2Ch+var_24], eax
0x7760E4: fld     [esp+2Ch+var_24]
0x7760E8: fld     [esp+2Ch+arg_0]
0x7760EC: mov     eax, [edi+0ECh]
0x7760F2: fld     st
0x7760F4: mov     [esp+2Ch+var_20], ecx
0x7760F8: fmulp   st(2), st
0x7760FA: mov     ecx, [edi+0F0h]
0x776100: fxch    st(1)
0x776102: mov     [esp+2Ch+var_1C], edx
0x776106: mov     edx, [edi+0F4h]
0x77610C: fstp    [esp+2Ch+var_24]
0x776110: mov     [esp+2Ch+var_18], eax
0x776114: fld     [esp+2Ch+var_20]
0x776118: mov     eax, [edi+0F8h]
0x77611E: fmul    st, st(1)
0x776120: mov     [esp+2Ch+var_14], ecx
0x776124: mov     ecx, [edi+0FCh]
0x77612A: mov     [esp+2Ch+var_10], edx
0x77612E: fstp    [esp+2Ch+var_20]
0x776132: mov     edx, [edi+100h]
0x776138: fld     [esp+2Ch+var_1C]
0x77613C: mov     [esp+2Ch+var_C], eax
0x776140: fmul    st, st(1)
0x776142: mov     [esp+2Ch+var_8], ecx
0x776146: mov     [esp+2Ch+var_4], edx
0x77614A: pop     edi
0x77614B: fstp    [esp+28h+var_1C]
0x77614F: mov     al, 1
0x776151: fld     [esp+28h+var_18]
0x776155: fmul    st, st(1)
0x776157: fstp    [esp+28h+var_18]
0x77615B: fld     [esp+28h+var_14]
0x77615F: fmul    st, st(1)
0x776161: fstp    [esp+28h+var_14]
0x776165: fld     [esp+28h+var_10]
0x776169: fmul    st, st(1)
0x77616B: fstp    [esp+28h+var_10]
0x77616F: fld     [esp+28h+var_C]
0x776173: fmul    st, st(1)
0x776175: fstp    [esp+28h+var_C]
0x776179: fld     [esp+28h+var_8]
0x77617D: fmul    st, st(1)
0x77617F: fstp    [esp+28h+var_8]
0x776183: fmul    [esp+28h+var_4]
0x776187: fstp    [esp+28h+var_4]
0x77618B: fld     [esp+28h+var_24]
0x77618F: fstp    dword ptr [esi+24h]
0x776192: fld     [esp+28h+var_20]
0x776196: fstp    dword ptr [esi+28h]
0x776199: fld     [esp+28h+var_1C]
0x77619D: fstp    dword ptr [esi+2Ch]
0x7761A0: fld1
0x7761A2: fst     dword ptr [esi+30h]
0x7761A5: fld     [esp+28h+var_18]
0x7761A9: fstp    dword ptr [esi+4]
0x7761AC: fld     [esp+28h+var_14]
0x7761B0: fstp    dword ptr [esi+8]
0x7761B3: fld     [esp+28h+var_10]
0x7761B7: fstp    dword ptr [esi+0Ch]
0x7761BA: fst     dword ptr [esi+10h]
0x7761BD: fld     [esp+28h+var_C]
0x7761C1: fstp    dword ptr [esi+14h]
0x7761C4: fld     [esp+28h+var_8]
0x7761C8: fstp    dword ptr [esi+18h]
0x7761CB: fld     [esp+28h+var_4]
0x7761CF: fstp    dword ptr [esi+1Ch]
0x7761D2: fstp    dword ptr [esi+20h]
0x7761D5: pop     esi
0x7761D6: add     esp, 24h
0x7761D9: retn    4
0x7761DC: mov     dword ptr [esi], 1
0x7761E2: fld     dword ptr [edi+88h]
0x7761E8: fstp    dword ptr [esi+34h]
0x7761EB: fld     dword ptr [edi+8Ch]
0x7761F1: fstp    dword ptr [esi+38h]
0x7761F4: fld     dword ptr [edi+90h]
0x7761FA: fstp    dword ptr [esi+3Ch]
0x7761FD: jmp     loc_7760A0
0x776202: mov     dword ptr [esi], 3
0x776208: fld     dword ptr [edi+108h]
0x77620E: fstp    dword ptr [esi+40h]
0x776211: fld     dword ptr [edi+10Ch]
0x776217: fstp    dword ptr [esi+44h]
0x77621A: fld     dword ptr [edi+110h]
0x776220: fstp    dword ptr [esi+48h]
0x776223: jmp     loc_7760C4
0x776228: pop     edi
0x776229: xor     al, al
0x77622B: pop     esi
0x77622C: add     esp, 24h
0x77622F: retn    4
