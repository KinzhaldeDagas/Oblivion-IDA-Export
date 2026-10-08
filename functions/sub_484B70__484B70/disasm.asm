0x484B70: mov     eax, [ecx]
0x484B72: test    eax, eax
0x484B74: push    esi
0x484B75: jz      short loc_484B90
0x484B77: mov     esi, [eax]
0x484B79: test    esi, esi
0x484B7B: jz      short loc_484B90
0x484B7D: mov     ecx, esi; this
0x484B7F: call    ExtraDataList_GetOwner; Verified accessor: returns the owner TESForm pointer stored in the ExtraOwnership payload identified by kExtraData_Ownership, or null when absent. RTTI callers confirm TESNPC/TESFaction owner forms.
0x484B84: test    eax, eax
0x484B86: jz      short loc_484B90
0x484B88: mov     ecx, esi; this
0x484B8A: pop     esi
0x484B8B: jmp     ExtraDataList_GetOwner; Verified accessor: returns the owner TESForm pointer stored in the ExtraOwnership payload identified by kExtraData_Ownership, or null when absent. RTTI callers confirm TESNPC/TESFaction owner forms.
0x484B90: xor     eax, eax
0x484B92: pop     esi
0x484B93: retn
