0x4CBE50: sub     esp, 10h
0x4CBE53: push    esi
0x4CBE54: push    edi
0x4CBE55: mov     edi, ecx
0x4CBE57: mov     ecx, [esp+18h+arg_0]; this
0x4CBE5B: xor     esi, esi
0x4CBE5D: cmp     ecx, esi
0x4CBE5F: mov     [esp+18h+var_C], edi
0x4CBE63: jz      loc_4CC05C
0x4CBE69: push    1; a3
0x4CBE6B: push    edi; a2
0x4CBE6C: call    NiTMap_SetAt
0x4CBE71: mov     al, [edi+24h]
0x4CBE74: test    al, 1
0x4CBE76: jz      short loc_4CBE84
0x4CBE78: test    al, 8
0x4CBE7A: jnz     short loc_4CBE9C
0x4CBE7C: pop     edi
0x4CBE7D: pop     esi
0x4CBE7E: add     esp, 10h
0x4CBE81: retn    4
0x4CBE84: mov     ecx, [edi+50h]
0x4CBE87: cmp     ecx, esi
0x4CBE89: jz      loc_4CC05C
0x4CBE8F: call    sub_4EF150
0x4CBE94: test    al, al
0x4CBE96: jz      loc_4CC05C
0x4CBE9C: test    byte ptr [edi+24h], 1
0x4CBEA0: jz      short loc_4CBED1
0x4CBEA2: mov     ecx, ds:0B333A0h
0x4CBEA8: push    esi; a2
0x4CBEA9: push    edi; a1
0x4CBEAA: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4CBEAF: test    al, al
0x4CBEB1: jz      short loc_4CBEBF
0x4CBEB3: mov     ecx, ds:0B333A0h
0x4CBEB9: push    edi
0x4CBEBA: call    sub_440120
0x4CBEBF: test    byte ptr [edi+24h], 1
0x4CBEC3: jz      short loc_4CBED1
0x4CBEC5: mov     ecx, ds:0B33B00h
0x4CBECB: push    edi
0x4CBECC: call    sub_459F30
0x4CBED1: push    ebx
0x4CBED2: push    ebp
0x4CBED3: push    edi; a2
0x4CBED4: mov     ecx, offset stru_B35C80; this
0x4CBED9: call    sub_496EA0
0x4CBEDE: lea     ebx, [edi+48h]
0x4CBEE1: xor     ebp, ebp
0x4CBEE3: test    ebx, ebx
0x4CBEE5: mov     [esp+20h+var_8], esi
0x4CBEE9: mov     [esp+20h+var_4], esi
0x4CBEED: jz      loc_4CBFAC
0x4CBEF3: cmp     dword ptr [ebx+4], 0
0x4CBEF7: jnz     short loc_4CBF02
0x4CBEF9: cmp     dword ptr [ebx], 0
0x4CBEFC: jz      loc_4CBFAC
0x4CBF02: mov     edi, [ebx]
0x4CBF04: mov     eax, [edi]
0x4CBF06: mov     edx, [eax+170h]
0x4CBF0C: mov     ecx, edi
0x4CBF0E: call    edx
0x4CBF10: cmp     byte ptr [eax+4], 18h
0x4CBF14: jnz     short loc_4CBF77
0x4CBF16: mov     ecx, edi; this
0x4CBF18: call    GetTeleportExtraData
0x4CBF1D: test    eax, eax
0x4CBF1F: jz      short loc_4CBF77
0x4CBF21: mov     ecx, eax
0x4CBF23: call    sub_42B460
0x4CBF28: test    eax, eax
0x4CBF2A: jz      short loc_4CBF3C
0x4CBF2C: test    byte ptr [eax+24h], 1
0x4CBF30: jz      short loc_4CBF3C
0x4CBF32: push    eax
0x4CBF33: lea     ecx, [esp+24h+var_8]
0x4CBF37: call    BSSimpleList_PushFront
0x4CBF3C: mov     eax, [edi]
0x4CBF3E: mov     edx, [eax+170h]
0x4CBF44: push    0; int
0x4CBF46: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4CBF4B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4CBF50: push    0; int
0x4CBF52: mov     ecx, edi
0x4CBF54: call    edx
0x4CBF56: push    eax; void *
0x4CBF57: call    OblivionDynamicCast
0x4CBF5C: add     esp, 14h
0x4CBF5F: test    eax, eax
0x4CBF61: jz      short loc_4CBF77
0x4CBF63: mov     ecx, eax
0x4CBF65: call    sub_4B78E0
0x4CBF6A: test    al, al
0x4CBF6C: jz      short loc_4CBF77
0x4CBF6E: push    edi
0x4CBF6F: call    RemoveExtraTeleportFromDoorRef
0x4CBF74: add     esp, 4
0x4CBF77: test    esi, esi
0x4CBF79: jz      short loc_4CBF9B
0x4CBF7B: push    8; Size
0x4CBF7D: call    FormHeapAlloc
0x4CBF82: add     esp, 4
0x4CBF85: test    eax, eax
0x4CBF87: jz      short loc_4CBF94
0x4CBF89: mov     [eax], esi
0x4CBF8B: mov     dword ptr [eax+4], 0
0x4CBF92: jmp     short loc_4CBF96
0x4CBF94: xor     eax, eax
0x4CBF96: mov     [eax+4], ebp
0x4CBF99: mov     ebp, eax
0x4CBF9B: mov     ebx, [ebx+4]
0x4CBF9E: test    ebx, ebx
0x4CBFA0: mov     esi, edi
0x4CBFA2: mov     edi, [esp+20h+var_C]
0x4CBFA6: jnz     loc_4CBEF3
0x4CBFAC: push    edi; a2
0x4CBFAD: mov     ecx, offset stru_B35C80; this
0x4CBFB2: call    sub_496F50
0x4CBFB7: test    ebp, ebp
0x4CBFB9: jnz     short loc_4CBFBF
0x4CBFBB: test    esi, esi
0x4CBFBD: jz      short loc_4CC010
0x4CBFBF: mov     ecx, ds:0B33B00h
0x4CBFC5: push    0
0x4CBFC7: push    0FFFFFFFFh
0x4CBFC9: push    esi
0x4CBFCA: call    TESSaveLoadGame_ResetObject
0x4CBFCF: mov     eax, [esi]
0x4CBFD1: mov     edx, [eax+6Ch]
0x4CBFD4: mov     ecx, esi
0x4CBFD6: call    edx
0x4CBFD8: mov     ecx, ds:0B33B00h
0x4CBFDE: push    0
0x4CBFE0: push    0FFFFFFFFh
0x4CBFE2: push    esi
0x4CBFE3: call    sub_45C020
0x4CBFE8: mov     ecx, ds:0B33B00h; this
0x4CBFEE: push    1; a3
0x4CBFF0: push    esi; a2
0x4CBFF1: call    sub_45B780
0x4CBFF6: test    ebp, ebp
0x4CBFF8: jz      short loc_4CC00C
0x4CBFFA: mov     eax, ebp
0x4CBFFC: mov     ebp, [ebp+4]
0x4CBFFF: mov     esi, [eax]
0x4CC001: push    eax
0x4CC002: call    FormHeapFree
0x4CC007: add     esp, 4
0x4CC00A: jmp     short loc_4CBFB7
0x4CC00C: xor     esi, esi
0x4CC00E: jmp     short loc_4CBFB7
0x4CC010: lea     esi, [esp+20h+var_8]
0x4CC014: cmp     dword ptr [esi+4], 0
0x4CC018: jnz     short loc_4CC01F
0x4CC01A: cmp     dword ptr [esi], 0
0x4CC01D: jz      short loc_4CC051
0x4CC01F: mov     edi, [esi]
0x4CC021: mov     ebx, [esp+20h+arg_0]
0x4CC025: lea     eax, [esp+20h+var_10+3]
0x4CC029: push    eax
0x4CC02A: push    edi
0x4CC02B: mov     ecx, ebx
0x4CC02D: mov     byte ptr [esp+28h+var_10+3], 0
0x4CC032: call    sub_4D6760
0x4CC037: test    al, al
0x4CC039: jz      short loc_4CC042
0x4CC03B: cmp     byte ptr [esp+20h+var_10+3], 0
0x4CC040: jnz     short loc_4CC04A
0x4CC042: push    ebx
0x4CC043: mov     ecx, edi
0x4CC045: call    sub_4CBE50
0x4CC04A: mov     esi, [esi+4]
0x4CC04D: test    esi, esi
0x4CC04F: jnz     short loc_4CC014
0x4CC051: lea     ecx, [esp+20h+var_8]
0x4CC055: call    BSSimpleList_Clear
0x4CC05A: pop     ebp
0x4CC05B: pop     ebx
0x4CC05C: pop     edi
0x4CC05D: pop     esi
0x4CC05E: add     esp, 10h
0x4CC061: retn    4
