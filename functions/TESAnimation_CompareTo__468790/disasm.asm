0x468790: mov     eax, [esp+arg_0]
0x468794: push    esi
0x468795: push    0; int
0x468797: push    offset ??_R0?AVTESAnimation@@@8; struct TypeDescriptor *
0x46879C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x4687A1: push    0; int
0x4687A3: push    eax; void *
0x4687A4: mov     esi, ecx
0x4687A6: call    OblivionDynamicCast
0x4687AB: add     esp, 14h
0x4687AE: test    eax, eax
0x4687B0: jnz     short loc_4687B8
0x4687B2: mov     al, 1
0x4687B4: pop     esi
0x4687B5: retn    4
0x4687B8: add     esi, 4
0x4687BB: push    edi
0x4687BC: lea     edi, [eax+4]
0x4687BF: jz      short loc_4687ED
0x4687C1: test    edi, edi
0x4687C3: jz      short loc_4687F8
0x4687C5: mov     eax, [esi]
0x4687C7: test    eax, eax
0x4687C9: mov     ecx, [edi]
0x4687CB: jnz     short loc_4687D1
0x4687CD: test    ecx, ecx
0x4687CF: jmp     short loc_4687E1
0x4687D1: test    ecx, ecx
0x4687D3: jz      short loc_4687FC
0x4687D5: push    ecx; Str2
0x4687D6: push    eax; Str1
0x4687D7: call    __strcmp
0x4687DC: add     esp, 8
0x4687DF: test    eax, eax
0x4687E1: jnz     short loc_4687FC
0x4687E3: mov     esi, [esi+4]
0x4687E6: test    esi, esi
0x4687E8: mov     edi, [edi+4]
0x4687EB: jnz     short loc_4687C1
0x4687ED: test    edi, edi
0x4687EF: jnz     short loc_4687FC
0x4687F1: pop     edi
0x4687F2: xor     al, al
0x4687F4: pop     esi
0x4687F5: retn    4
0x4687F8: test    esi, esi
0x4687FA: jmp     short loc_4687EF
0x4687FC: pop     edi
0x4687FD: mov     al, 1
0x4687FF: pop     esi
0x468800: retn    4
