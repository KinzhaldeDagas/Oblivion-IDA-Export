0x611EB0: mov     eax, [esp+slot]
0x611EB4: test    eax, eax
0x611EB6: push    esi
0x611EB7: mov     esi, ecx
0x611EB9: push    edi
0x611EBA: mov     edi, [esi+0D4h]
0x611EC0: mov     [esi+0D4h], eax
0x611EC6: jnz     loc_611F90
0x611ECC: test    edi, edi
0x611ECE: jz      loc_611F90
0x611ED4: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x611ED9: test    eax, eax
0x611EDB: jz      short loc_611F03
0x611EDD: mov     ecx, esi; this
0x611EDF: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x611EE4: mov     ecx, eax; object
0x611EE6: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
0x611EEB: test    eax, eax
0x611EED: jz      short loc_611F03
0x611EEF: push    esi
0x611EF0: mov     ecx, esi; this
0x611EF2: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x611EF7: mov     ecx, eax
0x611EF9: call    TESObjectCELL__AttachReference3DToQuad
0x611EFE: pop     edi
0x611EFF: pop     esi
0x611F00: retn    4
0x611F03: mov     ecx, edi; this
0x611F05: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x611F0A: test    eax, eax
0x611F0C: jz      short loc_611F34
0x611F0E: mov     ecx, edi; this
0x611F10: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x611F15: mov     ecx, eax; object
0x611F17: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
0x611F1C: test    eax, eax
0x611F1E: jz      short loc_611F34
0x611F20: push    esi
0x611F21: mov     ecx, edi; this
0x611F23: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x611F28: mov     ecx, eax
0x611F2A: call    TESObjectCELL__AttachReference3DToQuad
0x611F2F: pop     edi
0x611F30: pop     esi
0x611F31: retn    4
0x611F34: mov     eax, [esi]
0x611F36: mov     edx, [eax+154h]
0x611F3C: mov     ecx, esi
0x611F3E: call    edx
0x611F40: test    eax, eax
0x611F42: jz      short loc_611F90
0x611F44: mov     eax, [esi]
0x611F46: mov     edx, [eax+154h]
0x611F4C: mov     ecx, esi
0x611F4E: call    edx
0x611F50: cmp     dword ptr [eax+1Ch], 0
0x611F54: jz      short loc_611F90
0x611F56: mov     eax, [esi]
0x611F58: mov     edx, [eax+154h]
0x611F5E: push    ebx
0x611F5F: mov     ecx, esi
0x611F61: call    edx
0x611F63: mov     ebx, [eax+1Ch]
0x611F66: mov     eax, [esi]
0x611F68: mov     edi, [ebx]
0x611F6A: mov     edx, [eax+154h]
0x611F70: mov     ecx, esi
0x611F72: add     edi, 88h ; 'ˆ'
0x611F78: call    edx
0x611F7A: mov     edx, [edi]
0x611F7C: push    eax
0x611F7D: lea     eax, [esp+10h+slot]
0x611F81: push    eax
0x611F82: mov     ecx, ebx
0x611F84: call    edx
0x611F86: lea     ecx, [esp+0Ch+slot]; slot
0x611F8A: call    NiPointerSlot_Release
0x611F8F: pop     ebx
0x611F90: pop     edi
0x611F91: pop     esi
0x611F92: retn    4
