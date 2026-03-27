0x6648D0: push    esi
0x6648D1: mov     esi, ecx
0x6648D3: cmp     dword ptr [esi+5B4h], 0
0x6648DA: jnz     short loc_664901
0x6648DC: push    8; Size
0x6648DE: call    FormHeapAlloc
0x6648E3: add     esp, 4
0x6648E6: test    eax, eax
0x6648E8: jz      short loc_6648F9
0x6648EA: mov     dword ptr [eax], 0
0x6648F0: mov     dword ptr [eax+4], 0
0x6648F7: jmp     short loc_6648FB
0x6648F9: xor     eax, eax
0x6648FB: mov     [esi+5B4h], eax
0x664901: mov     eax, [esi+5B4h]
0x664907: cmp     dword ptr [eax+4], 0
0x66490B: jnz     short loc_664937
0x66490D: cmp     dword ptr [eax], 0
0x664910: jnz     short loc_664937
0x664912: push    8; Size
0x664914: call    FormHeapAlloc
0x664919: add     esp, 4
0x66491C: test    eax, eax
0x66491E: jz      short loc_664929
0x664920: xor     ecx, ecx
0x664922: mov     [eax], ecx
0x664924: mov     [eax+4], ecx
0x664927: jmp     short loc_66492B
0x664929: xor     eax, eax
0x66492B: mov     ecx, [esi+5B4h]
0x664931: push    eax
0x664932: call    BSSimpleList_PushFront
0x664937: mov     eax, [esi+5B4h]
0x66493D: mov     esi, [eax]
0x66493F: test    esi, esi
0x664941: jz      short loc_66495E
0x664943: mov     eax, [esp+4+arg_0]
0x664947: cmp     eax, 7
0x66494A: ja      short loc_66495E
0x66494C: push    eax
0x66494D: push    0
0x66494F: call    ActorValue_GetGroupOffsetFromAV
0x664954: movsx   eax, al
0x664957: add     esp, 8
0x66495A: add     byte ptr [eax+esi], 1
0x66495E: pop     esi
0x66495F: retn    4
