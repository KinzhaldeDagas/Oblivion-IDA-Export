0x4673F0: mov     eax, [esp+arg_0]
0x4673F4: push    esi
0x4673F5: push    edi
0x4673F6: push    0; int
0x4673F8: push    offset ??_R0?AVTESActorBaseData@@@8; struct TypeDescriptor *
0x4673FD: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x467402: push    0; int
0x467404: push    eax; void *
0x467405: mov     esi, ecx
0x467407: call    OblivionDynamicCast
0x46740C: mov     edi, eax
0x46740E: add     esp, 14h
0x467411: test    edi, edi
0x467413: jz      loc_467503
0x467419: mov     ecx, [edi+4]
0x46741C: mov     edx, [esi]
0x46741E: mov     eax, [edx+50h]
0x467421: push    ebp
0x467422: mov     [esi+4], ecx
0x467425: push    10h
0x467427: mov     ecx, esi
0x467429: call    eax
0x46742B: mov     edx, [edi]
0x46742D: mov     eax, [edx+48h]
0x467430: mov     ecx, edi
0x467432: call    eax
0x467434: mov     edx, [esi]
0x467436: mov     [esi+8], ax
0x46743A: mov     eax, [edx+50h]
0x46743D: push    10h
0x46743F: mov     ecx, esi
0x467441: call    eax
0x467443: mov     edx, [edi]
0x467445: mov     eax, [edx+4Ch]
0x467448: mov     ecx, edi
0x46744A: call    eax
0x46744C: mov     edx, [esi]
0x46744E: mov     [esi+0Ah], ax
0x467452: mov     eax, [edx+50h]
0x467455: push    10h
0x467457: mov     ecx, esi
0x467459: call    eax
0x46745B: movzx   ecx, word ptr [edi+0Ch]
0x46745F: mov     edx, [esi]
0x467461: mov     eax, [edx+50h]
0x467464: mov     [esi+0Ch], cx
0x467468: push    10h
0x46746A: mov     ecx, esi
0x46746C: call    eax
0x46746E: movzx   ecx, word ptr [edi+0Eh]
0x467472: mov     edx, [esi]
0x467474: mov     eax, [edx+50h]
0x467477: mov     [esi+0Eh], cx
0x46747B: push    10h
0x46747D: mov     ecx, esi
0x46747F: call    eax
0x467481: movzx   ecx, word ptr [edi+10h]
0x467485: mov     edx, [esi]
0x467487: mov     eax, [edx+50h]
0x46748A: mov     [esi+10h], cx
0x46748E: push    10h
0x467490: mov     ecx, esi
0x467492: call    eax
0x467494: movzx   ecx, word ptr [edi+12h]
0x467498: mov     edx, [esi]
0x46749A: mov     eax, [edx+50h]
0x46749D: mov     [esi+12h], cx
0x4674A1: push    10h
0x4674A3: mov     ecx, esi
0x4674A5: call    eax
0x4674A7: mov     ecx, esi
0x4674A9: call    TESActorBaseData_ClearFactionList
0x4674AE: lea     ebp, [edi+18h]
0x4674B1: test    ebp, ebp
0x4674B3: lea     ecx, [esi+18h]
0x4674B6: mov     [esp+0Ch+arg_0], ecx
0x4674BA: jz      short loc_4674FC
0x4674BC: push    ebx
0x4674BD: lea     ecx, [ecx+0]
0x4674C0: mov     ebx, [ebp+0]
0x4674C3: test    ebx, ebx
0x4674C5: jz      short loc_4674E5
0x4674C7: push    8; Size
0x4674C9: call    FormHeapAlloc
0x4674CE: mov     edx, [ebx]
0x4674D0: mov     [eax], edx
0x4674D2: mov     ecx, [ebx+4]
0x4674D5: add     esp, 4
0x4674D8: mov     [eax+4], ecx
0x4674DB: mov     ecx, [esp+10h+arg_0]
0x4674DF: push    eax
0x4674E0: call    BSSimpleList_PushBack
0x4674E5: mov     edx, [esp+10h+arg_0]
0x4674E9: mov     eax, [edx+4]
0x4674EC: test    eax, eax
0x4674EE: jz      short loc_4674F4
0x4674F0: mov     [esp+10h+arg_0], eax
0x4674F4: mov     ebp, [ebp+4]
0x4674F7: test    ebp, ebp
0x4674F9: jnz     short loc_4674C0
0x4674FB: pop     ebx
0x4674FC: mov     eax, [edi+14h]
0x4674FF: mov     [esi+14h], eax
0x467502: pop     ebp
0x467503: pop     edi
0x467504: pop     esi
0x467505: retn    4
