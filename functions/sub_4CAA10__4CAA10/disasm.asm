0x4CAA10: mov     eax, [esp+owner]
0x4CAA14: push    esi
0x4CAA15: mov     esi, ecx
0x4CAA17: push    eax; owner
0x4CAA18: lea     ecx, [esi+28h]; this
0x4CAA1B: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x4CAA20: mov     edx, [esi]
0x4CAA22: mov     eax, [edx+40h]
0x4CAA25: push    20h ; ' '
0x4CAA27: mov     ecx, esi
0x4CAA29: call    eax
0x4CAA2B: pop     esi
0x4CAA2C: retn    4
