0x4F13D0: mov     eax, [esp+arg_0]
0x4F13D4: sub     esp, 8
0x4F13D7: push    esi
0x4F13D8: push    edi
0x4F13D9: push    0; int
0x4F13DB: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4F13E0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F13E5: push    0; int
0x4F13E7: push    eax; void *
0x4F13E8: mov     esi, ecx
0x4F13EA: call    OblivionDynamicCast
0x4F13EF: mov     edi, eax
0x4F13F1: add     esp, 14h
0x4F13F4: test    edi, edi
0x4F13F6: jz      loc_4F14F8
0x4F13FC: push    edi; a2
0x4F13FD: mov     ecx, esi; this
0x4F13FF: call    TESForm_CopyAllComponentsFrom
0x4F1404: mov     cl, [edi+5Ch]
0x4F1407: mov     [esi+5Ch], cl
0x4F140A: mov     edx, [edi+7Ch]
0x4F140D: mov     [esi+7Ch], edx
0x4F1410: cmp     dword ptr [edi+7Ch], 0
0x4F1414: jz      short loc_4F1420
0x4F1416: mov     ecx, [edi+7Ch]
0x4F1419: call    sub_4EF7A0
0x4F141E: jmp     short loc_4F1423
0x4F1420: mov     eax, [edi+58h]
0x4F1423: mov     [esi+58h], eax
0x4F1426: mov     ecx, [edi+7Ch]; a1
0x4F1429: test    ecx, ecx
0x4F142B: jz      short loc_4F1434
0x4F142D: call    TESWorldSpace__GetWaterFormParents
0x4F1432: jmp     short loc_4F1443
0x4F1434: mov     eax, [edi+80h]
0x4F143A: test    eax, eax
0x4F143C: jnz     short loc_4F1443
0x4F143E: mov     eax, ds:0B360ACh
0x4F1443: mov     [esi+80h], eax
0x4F1449: mov     ecx, [edi+7Ch]
0x4F144C: test    ecx, ecx
0x4F144E: jz      short loc_4F1457
0x4F1450: call    sub_4EF1B0
0x4F1455: jmp     short loc_4F145D
0x4F1457: lea     eax, [edi+84h]
0x4F145D: mov     ecx, [eax]
0x4F145F: mov     [esi+84h], ecx
0x4F1465: mov     edx, [eax+4]
0x4F1468: mov     [esi+88h], edx
0x4F146E: mov     ecx, [eax+8]
0x4F1471: mov     [esi+8Ch], ecx
0x4F1477: mov     edx, [eax+0Ch]
0x4F147A: mov     ecx, [esi+30h]
0x4F147D: mov     [esi+90h], edx
0x4F1483: mov     eax, [edi+94h]
0x4F1489: push    ebx
0x4F148A: mov     [esi+94h], eax
0x4F1490: call    NiTMap_Clear
0x4F1495: mov     edx, [edi+30h]
0x4F1498: mov     ecx, [edx+4]
0x4F149B: xor     eax, eax
0x4F149D: test    ecx, ecx
0x4F149F: jbe     short loc_4F14B5
0x4F14A1: mov     edx, [edx+8]
0x4F14A4: mov     ebx, edx
0x4F14A6: cmp     dword ptr [ebx], 0
0x4F14A9: jnz     short loc_4F1500
0x4F14AB: add     eax, 1
0x4F14AE: add     ebx, 4
0x4F14B1: cmp     eax, ecx
0x4F14B3: jb      short loc_4F14A6
0x4F14B5: xor     eax, eax
0x4F14B7: test    eax, eax
0x4F14B9: mov     [esp+14h+var_8], eax
0x4F14BD: pop     ebx
0x4F14BE: jz      short loc_4F14F8
0x4F14C0: lea     ecx, [esp+10h+arg_0]
0x4F14C4: push    ecx
0x4F14C5: mov     ecx, [edi+30h]
0x4F14C8: lea     edx, [esp+14h+a2]
0x4F14CC: push    edx
0x4F14CD: lea     eax, [esp+18h+var_8]
0x4F14D1: push    eax
0x4F14D2: mov     [esp+1Ch+arg_0], 0
0x4F14DA: call    sub_452600
0x4F14DF: mov     ecx, [esp+10h+arg_0]
0x4F14E3: mov     edx, [esp+10h+a2]
0x4F14E7: push    ecx; a3
0x4F14E8: mov     ecx, [esi+30h]; this
0x4F14EB: push    edx; a2
0x4F14EC: call    NiTMap_SetAt
0x4F14F1: cmp     [esp+10h+var_8], 0
0x4F14F6: jnz     short loc_4F14C0
0x4F14F8: pop     edi
0x4F14F9: pop     esi
0x4F14FA: add     esp, 8
0x4F14FD: retn    4
0x4F1500: mov     eax, [edx+eax*4]
0x4F1503: jmp     short loc_4F14B7
