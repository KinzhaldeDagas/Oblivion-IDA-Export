0x468030: mov     eax, [esp+arg_0]
0x468034: push    esi
0x468035: push    edi
0x468036: push    0; int
0x468038: push    offset ??_R0?AVTESActorBaseData@@@8; struct TypeDescriptor *
0x46803D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468042: push    0; int
0x468044: push    eax; void *
0x468045: mov     edi, ecx
0x468047: call    OblivionDynamicCast
0x46804C: mov     esi, eax
0x46804E: add     esp, 14h
0x468051: test    esi, esi
0x468053: jnz     short loc_46805C
0x468055: pop     edi
0x468056: mov     al, 1
0x468058: pop     esi
0x468059: retn    4
0x46805C: mov     ecx, [edi+4]
0x46805F: cmp     ecx, [esi+4]
0x468062: jnz     short loc_468055
0x468064: mov     edx, [esi]
0x468066: mov     eax, [edx+48h]
0x468069: push    ebx
0x46806A: mov     ecx, esi
0x46806C: call    eax
0x46806E: mov     edx, [edi]
0x468070: mov     bx, ax
0x468073: mov     eax, [edx+48h]
0x468076: mov     ecx, edi
0x468078: call    eax
0x46807A: cmp     ax, bx
0x46807D: jnz     TESActorBaseData_CompareTo___Return_1
0x468083: mov     edx, [esi]
0x468085: mov     eax, [edx+4Ch]
0x468088: mov     ecx, esi
0x46808A: call    eax
0x46808C: mov     edx, [edi]
0x46808E: mov     bx, ax
0x468091: mov     eax, [edx+4Ch]
0x468094: mov     ecx, edi
0x468096: call    eax
0x468098: cmp     ax, bx
0x46809B: jnz     TESActorBaseData_CompareTo___Return_1
0x4680A1: mov     cx, [edi+0Ch]
0x4680A5: cmp     cx, [esi+0Ch]
0x4680A9: jnz     TESActorBaseData_CompareTo___Return_1
0x4680AF: mov     dx, [edi+0Eh]
0x4680B3: cmp     dx, [esi+0Eh]
0x4680B7: jnz     short TESActorBaseData_CompareTo___Return_1
0x4680B9: mov     ax, [edi+10h]
0x4680BD: cmp     ax, [esi+10h]
0x4680C1: jnz     short TESActorBaseData_CompareTo___Return_1
0x4680C3: mov     cx, [edi+12h]
0x4680C7: cmp     cx, [esi+12h]
0x4680CB: jnz     short TESActorBaseData_CompareTo___Return_1
0x4680CD: mov     edx, [edi+14h]
0x4680D0: cmp     edx, [esi+14h]
0x4680D3: jnz     short TESActorBaseData_CompareTo___Return_1
0x4680D5: lea     ebx, [esi+18h]
0x4680D8: lea     esi, [edi+18h]
0x4680DB: mov     ecx, esi
0x4680DD: call    BSSimpleList_Count
0x4680E2: mov     ecx, ebx
0x4680E4: mov     edi, eax
0x4680E6: call    BSSimpleList_Count
0x4680EB: cmp     edi, eax
0x4680ED: jnz     short TESActorBaseData_CompareTo___Return_1
0x4680EF: test    esi, esi
0x4680F1: jz      short TESActorBaseData_CompareTo___Return_0
0x4680F3: mov     edi, [esi]
0x4680F5: test    edi, edi
0x4680F7: jz      short loc_46811D
0x4680F9: mov     edx, [edi]
0x4680FB: mov     eax, ebx
0x4680FD: test    eax, eax
0x4680FF: jz      short loc_468112
0x468101: mov     ecx, [eax]
0x468103: test    ecx, ecx
0x468105: jz      short loc_46810B
0x468107: cmp     [ecx], edx
0x468109: jz      short loc_46812C
0x46810B: mov     eax, [eax+4]
0x46810E: test    eax, eax
0x468110: jnz     short loc_468101
0x468112: or      eax, 0FFFFFFFFh
0x468115: movsx   ecx, byte ptr [edi+4]
0x468119: cmp     eax, ecx
0x46811B: jnz     short TESActorBaseData_CompareTo___Return_1
0x46811D: mov     esi, [esi+4]
0x468120: test    esi, esi
0x468122: jnz     short loc_4680F3
