0x471430: push    ebp
0x471431: mov     ebp, esp
0x471433: and     esp, 0FFFFFFC0h
0x471436: sub     esp, 38h
0x471439: push    esi
0x47143A: mov     esi, [ebp+arg_0]
0x47143D: fld     dword ptr [esi+4]
0x471440: push    edi
0x471441: fstp    [esp+40h+var_4]
0x471445: sub     esp, 8
0x471448: fld     [esp+48h+var_4]
0x47144C: mov     edi, ecx
0x47144E: fstp    [esp+48h+X]; X
0x471451: call    __isnan
0x471456: add     esp, 8
0x471459: test    eax, eax
0x47145B: jnz     loc_47154D
0x471461: fld     dword ptr [esi+4]
0x471464: sub     esp, 8
0x471467: fstp    [esp+48h+var_4]
0x47146B: fld     [esp+48h+var_4]
0x47146F: fstp    [esp+48h+X]; X
0x471472: call    __finite
0x471477: add     esp, 8
0x47147A: test    eax, eax
0x47147C: jz      loc_47154D
0x471482: fld     dword ptr [esi+8]
0x471485: sub     esp, 8
0x471488: fstp    [esp+48h+var_4]
0x47148C: fld     [esp+48h+var_4]
0x471490: fstp    [esp+48h+X]; X
0x471493: call    __isnan
0x471498: add     esp, 8
0x47149B: test    eax, eax
0x47149D: jnz     loc_47154D
0x4714A3: fld     dword ptr [esi+8]
0x4714A6: sub     esp, 8
0x4714A9: fstp    [esp+48h+var_4]
0x4714AD: fld     [esp+48h+var_4]
0x4714B1: fstp    [esp+48h+X]; X
0x4714B4: call    __finite
0x4714B9: add     esp, 8
0x4714BC: test    eax, eax
0x4714BE: jz      loc_47154D
0x4714C4: fld     dword ptr [esi+0Ch]
0x4714C7: sub     esp, 8
0x4714CA: fstp    [esp+48h+var_4]
0x4714CE: fld     [esp+48h+var_4]
0x4714D2: fstp    [esp+48h+X]; X
0x4714D5: call    __isnan
0x4714DA: add     esp, 8
0x4714DD: test    eax, eax
0x4714DF: jnz     short loc_47154D
0x4714E1: fld     dword ptr [esi+0Ch]
0x4714E4: sub     esp, 8
0x4714E7: fstp    [esp+48h+var_4]
0x4714EB: fld     [esp+48h+var_4]
0x4714EF: fstp    [esp+48h+X]; X
0x4714F2: call    __finite
0x4714F7: add     esp, 8
0x4714FA: test    eax, eax
0x4714FC: jz      short loc_47154D
0x4714FE: fld     dword ptr [esi]
0x471500: sub     esp, 8
0x471503: fstp    [esp+48h+var_4]
0x471507: fld     [esp+48h+var_4]
0x47150B: fstp    [esp+48h+X]; X
0x47150E: call    __isnan
0x471513: add     esp, 8
0x471516: test    eax, eax
0x471518: jnz     short loc_47154D
0x47151A: fld     dword ptr [esi]
0x47151C: sub     esp, 8
0x47151F: fstp    [esp+48h+var_4]
0x471523: fld     [esp+48h+var_4]
0x471527: fstp    [esp+48h+X]; X
0x47152A: call    __finite
0x47152F: add     esp, 8
0x471532: test    eax, eax
0x471534: jz      short loc_47154D
0x471536: mov     eax, [esi]
0x471538: mov     [edi+0Ch], eax
0x47153B: mov     ecx, [esi+4]
0x47153E: mov     [edi+10h], ecx
0x471541: mov     edx, [esi+8]
0x471544: mov     [edi+14h], edx
0x471547: mov     eax, [esi+0Ch]
0x47154A: mov     [edi+18h], eax
0x47154D: pop     edi
0x47154E: pop     esi
0x47154F: mov     esp, ebp
0x471551: pop     ebp
0x471552: retn    4
