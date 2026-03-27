0x416E9B: push    4; Size
0x416E9D: lea     ecx, [esp+4+Dst]
0x416EA1: push    ecx; Dst
0x416EA2: mov     ecx, SaveLoad_CurrentSavegame
0x416EA8: mov     [esp+8+Dst], ebp
0x416EAC: call    SaveLoad_LoadData
0x416EB1: xor     esi, esi
0x416EB3: cmp     [esp+Dst], ebp
0x416EB7: jle     short loc_416F12
0x416EB9: mov     edi, 200000h
0x416EBE: mov     edi, edi
0x416EC0: mov     ecx, SaveLoad_CurrentSavegame
0x416EC6: push    4; Size
0x416EC8: lea     edx, [esp+4+ArgList]
0x416ECC: push    edx; Dst
0x416ECD: call    SaveLoad_LoadData
0x416ED2: mov     ecx, dword ptr [esp+ArgList]
0x416ED6: lea     eax, [esp+arg_14]
0x416EDA: push    eax
0x416EDB: push    ecx
0x416EDC: mov     ecx, offset EffectSettingCollection
0x416EE1: mov     [esp+8+arg_14], ebp
0x416EE5: call    NiTMap_GetAt
0x416EEA: mov     eax, [esp+arg_14]
0x416EEE: cmp     eax, ebp
0x416EF0: jz      short loc_416EF7
0x416EF2: or      [eax+58h], edi
0x416EF5: jmp     short loc_416F09
0x416EF7: mov     edx, dword ptr [esp+ArgList]
0x416EFB: push    edx; ArgList
0x416EFC: push    offset aPlayerLoadFail; "Player Load: Failed to find known effec"...
0x416F01: call    PrintError
0x416F06: add     esp, 8
0x416F09: add     esi, 1
0x416F0C: cmp     esi, [esp+Dst]
0x416F10: jl      short loc_416EC0
0x416F12: mov     ecx, SaveLoad_CurrentSavegame
0x416F18: call    sub_45A170
0x416F1D: test    al, al
0x416F1F: jz      loc_417033
0x416F25: mov     ecx, SaveLoad_CurrentSavegame
0x416F2B: mov     edi, [ecx+80h]
0x416F31: cmp     edi, ebp
0x416F33: mov     esi, [ecx+14h]
0x416F36: jz      loc_416FDB
0x416F3C: mov     eax, [edi]
0x416F3E: push    eax; a1
0x416F3F: call    TESForm_LookupByFormID
0x416F44: movzx   edx, [esp+4+arg_C]
0x416F49: mov     ecx, eax
0x416F4B: lea     eax, [edx+ebx]
0x416F4E: add     esp, 4
0x416F51: cmp     esi, eax
0x416F53: jbe     short loc_416F95
0x416F55: mov     eax, [edi+5]
0x416F58: movzx   edx, byte ptr [edi+9]
0x416F5C: push    eax
0x416F5D: mov     eax, [ecx]
0x416F5F: push    edx
0x416F60: mov     edx, [eax+0D4h]
0x416F66: call    edx
0x416F68: movzx   ecx, [esp+8+arg_C]
0x416F6D: push    eax
0x416F6E: mov     eax, [edi]
0x416F70: push    eax
0x416F71: push    0B8h ; '¸'
0x416F76: sub     esi, ecx
0x416F78: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416F7D: sub     esi, ebx
0x416F7F: push    esi; ArgList
0x416F80: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x416F85: call    PrintError
0x416F8A: add     esp, 20h
0x416F8D: pop     edi
0x416F8E: pop     esi
0x416F8F: pop     ebp
0x416F90: pop     ebx
0x416F91: add     esp, 14h
0x416F94: retn
0x416F95: jnb     loc_417033
0x416F9B: mov     edx, [edi+5]
0x416F9E: movzx   eax, byte ptr [edi+9]
0x416FA2: push    edx
0x416FA3: mov     edx, [ecx]
0x416FA5: push    eax
0x416FA6: mov     eax, [edx+0D4h]
0x416FAC: call    eax
0x416FAE: mov     ecx, [edi]
0x416FB0: movzx   edx, [esp+8+arg_C]
0x416FB5: push    eax
0x416FB6: push    ecx
0x416FB7: push    0B8h ; '¸'
0x416FBC: sub     edx, esi
0x416FBE: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416FC3: add     edx, ebx
0x416FC5: push    edx; ArgList
0x416FC6: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x416FCB: call    PrintError
0x416FD0: add     esp, 20h
0x416FD3: pop     edi
0x416FD4: pop     esi
0x416FD5: pop     ebp
0x416FD6: pop     ebx
0x416FD7: add     esp, 14h
0x416FDA: retn
0x416FDB: movzx   eax, [esp+arg_C]
0x416FE0: lea     edx, [eax+ebx]
0x416FE3: cmp     esi, edx
0x416FE5: jbe     short loc_417010
0x416FE7: movzx   ecx, byte ptr [ecx+7Ch]
0x416FEB: push    ecx
0x416FEC: push    0B8h ; '¸'
0x416FF1: sub     esi, eax
0x416FF3: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416FF8: sub     esi, ebx
0x416FFA: push    esi; ArgList
0x416FFB: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x417000: call    PrintError
0x417005: add     esp, 14h
0x417008: pop     edi
0x417009: pop     esi
0x41700A: pop     ebp
0x41700B: pop     ebx
0x41700C: add     esp, 14h
0x41700F: retn
0x417010: jnb     short loc_417033
0x417012: movzx   edx, byte ptr [ecx+7Ch]
0x417016: push    edx
0x417017: push    0B8h ; '¸'
0x41701C: sub     eax, esi
0x41701E: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x417023: add     eax, ebx
0x417025: push    eax; ArgList
0x417026: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x41702B: call    PrintError
0x417030: add     esp, 14h
0x417033: pop     edi
0x417034: pop     esi
0x417035: pop     ebp
0x417036: pop     ebx
0x417037: add     esp, 14h
0x41703A: retn
