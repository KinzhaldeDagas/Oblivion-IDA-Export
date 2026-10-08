0x4D72B0: add     ecx, 44h ; 'D'; this
0x4D72B3: jmp     ExtraDataList_GetOwner; Verified accessor: returns the owner TESForm pointer stored in the ExtraOwnership payload identified by kExtraData_Ownership, or null when absent. RTTI callers confirm TESNPC/TESFaction owner forms.
