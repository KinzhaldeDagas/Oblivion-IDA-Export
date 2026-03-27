0x67E000: push    esi
0x67E001: push    edi
0x67E002: mov     edi, [esp+8+arg_0]
0x67E006: test    edi, edi
0x67E008: mov     esi, ecx
0x67E00A: jz      short loc_67E07C
0x67E00C: cmp     dword ptr [esi+24h], 0
0x67E010: jz      short loc_67E074
0x67E012: mov     ecx, edi
0x67E014: call    TESHealthForm_GetHealth
0x67E019: test    eax, eax
0x67E01B: jz      short loc_67E04A
0x67E01D: mov     ecx, [esi+24h]
0x67E020: call    sub_4BEF40
0x67E025: push    eax
0x67E026: mov     ecx, edi
0x67E028: call    TESHealthForm_GetHealth
0x67E02D: mov     ecx, eax
0x67E02F: call    sub_6899C0
0x67E034: mov     ecx, eax
0x67E036: call    sub_8AA350
0x67E03B: test    al, al
0x67E03D: jz      short loc_67E04A
0x67E03F: mov     ecx, [esi+24h]
0x67E042: call    TESEnchantableForm_GetCastingType
0x67E047: mov     [esi+24h], eax
0x67E04A: mov     ecx, [esi+28h]; this
0x67E04D: test    ecx, ecx
0x67E04F: jz      short loc_67E05E
0x67E051: call    Actor_IsCreature
0x67E056: test    al, al
0x67E058: jz      short loc_67E05E
0x67E05A: mov     al, 1
0x67E05C: jmp     short loc_67E060
0x67E05E: xor     al, al
0x67E060: push    eax
0x67E061: mov     ecx, edi
0x67E063: call    TESHealthForm_GetHealth
0x67E068: push    eax
0x67E069: mov     eax, [esi+24h]
0x67E06C: push    eax
0x67E06D: mov     ecx, edi
0x67E06F: call    sub_68C4E0
0x67E074: push    edi
0x67E075: mov     ecx, esi
0x67E077: call    sub_67DE90
0x67E07C: pop     edi
0x67E07D: pop     esi
0x67E07E: retn    4
