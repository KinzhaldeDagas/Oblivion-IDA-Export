0x4EF3E0: mov     eax, [esp+a2]
0x4EF3E4: push    ebx
0x4EF3E5: push    esi
0x4EF3E6: mov     esi, ecx
0x4EF3E8: movzx   ecx, byte ptr [eax+4]
0x4EF3EC: add     ecx, 0FFFFFFD0h; switch 9 cases
0x4EF3EF: xor     bl, bl
0x4EF3F1: cmp     ecx, 8
0x4EF3F4: ja      def_4EF3FA; jumptable 004EF3FA default case
0x4EF3FA: jmp     ds:jpt_4EF3FA[ecx*4]; switch jump
0x4EF401: push    0; jumptable 004EF3FA case 48
0x4EF403: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4EF408: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EF40D: push    0; int
0x4EF40F: push    eax; void *
0x4EF410: call    OblivionDynamicCast
0x4EF415: add     esp, 14h
0x4EF418: test    eax, eax
0x4EF41A: jz      short loc_4EF425
0x4EF41C: mov     ecx, eax; this
0x4EF41E: call    TESObjectCELL_GetWorldSpace
0x4EF423: jmp     short loc_4EF427
0x4EF425: xor     eax, eax
0x4EF427: cmp     eax, esi
0x4EF429: jz      short loc_4EF450
0x4EF42B: test    eax, eax
0x4EF42D: jz      loc_4EF4EB
0x4EF433: mov     edx, [esi]
0x4EF435: push    eax
0x4EF436: mov     eax, [edx+34h]
0x4EF439: mov     ecx, esi
0x4EF43B: call    eax
0x4EF43D: pop     esi
0x4EF43E: mov     bl, al
0x4EF440: pop     ebx
0x4EF441: retn    4
0x4EF444: mov     ecx, [esi+0Ch]; jumptable 004EF3FA case 53
0x4EF447: cmp     ecx, [eax+0Ch]
0x4EF44A: jnb     loc_4EF4EB
0x4EF450: mov     bl, 1
0x4EF452: pop     esi
0x4EF453: mov     al, bl
0x4EF455: pop     ebx
0x4EF456: retn    4
0x4EF459: push    0; jumptable 004EF3FA case 55
0x4EF45B: push    offset ??_R0?AVTESTerrainLODQuadRoot@@@8; struct TypeDescriptor *
0x4EF460: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EF465: push    0; int
0x4EF467: push    eax; void *
0x4EF468: call    OblivionDynamicCast
0x4EF46D: add     esp, 14h
0x4EF470: test    eax, eax
0x4EF472: jz      short loc_4EF480
0x4EF474: mov     eax, [eax+4]
0x4EF477: test    eax, eax
0x4EF479: jz      short loc_4EF480
0x4EF47B: mov     eax, [eax+10h]
0x4EF47E: jmp     short loc_4EF482
0x4EF480: xor     eax, eax
0x4EF482: cmp     eax, esi
0x4EF484: jnz     short loc_4EF42B
0x4EF486: mov     bl, 1
0x4EF488: pop     esi
0x4EF489: mov     al, bl
0x4EF48B: pop     ebx
0x4EF48C: retn    4
0x4EF48F: push    0; jumptable 004EF3FA case 56
0x4EF491: push    offset ??_R0?AVTESRoad@@@8; struct TypeDescriptor *
0x4EF496: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EF49B: push    0; int
0x4EF49D: push    eax; void *
0x4EF49E: call    OblivionDynamicCast
0x4EF4A3: add     esp, 14h
0x4EF4A6: test    eax, eax
0x4EF4A8: jz      short loc_4EF480
0x4EF4AA: mov     eax, [eax+2Ch]
0x4EF4AD: jmp     short loc_4EF482
0x4EF4AF: push    edi; jumptable 004EF3FA cases 49-52,54
0x4EF4B0: push    0; int
0x4EF4B2: push    offset ??_R0?AVTESChildCell@@@8; struct TypeDescriptor *
0x4EF4B7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EF4BC: push    0; int
0x4EF4BE: push    eax; void *
0x4EF4BF: call    OblivionDynamicCast
0x4EF4C4: mov     edx, [eax]
0x4EF4C6: mov     edi, [esi]
0x4EF4C8: mov     ecx, eax
0x4EF4CA: mov     eax, [edx]
0x4EF4CC: add     esp, 14h
0x4EF4CF: call    eax
0x4EF4D1: mov     edx, [edi+34h]
0x4EF4D4: push    eax
0x4EF4D5: mov     ecx, esi
0x4EF4D7: call    edx
0x4EF4D9: pop     edi
0x4EF4DA: pop     esi
0x4EF4DB: mov     bl, al
0x4EF4DD: pop     ebx
0x4EF4DE: retn    4
0x4EF4E1: push    eax; jumptable 004EF3FA default case
0x4EF4E2: mov     ecx, esi; this
0x4EF4E4: call    TESForm_LessThan
0x4EF4E9: mov     bl, al
0x4EF4EB: pop     esi
0x4EF4EC: mov     al, bl
0x4EF4EE: pop     ebx
0x4EF4EF: retn    4
