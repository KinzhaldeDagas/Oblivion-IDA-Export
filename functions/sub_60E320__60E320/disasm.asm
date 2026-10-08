0x60E320: push    ebx; Verified actor wrapper: returns false if the actor has no current cell; otherwise calls TESObjectCELL_IsActorOwnershipRestricted(currentCell, actor). It is referenced by condition/function tables, but the registered condition identity/name remains Unknown.
0x60E321: push    esi
0x60E322: mov     esi, ecx
0x60E324: xor     bl, bl
0x60E326: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x60E32B: test    eax, eax
0x60E32D: jz      short loc_60E341
0x60E32F: push    esi; actor
0x60E330: mov     ecx, esi; this
0x60E332: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x60E337: mov     ecx, eax; cell
0x60E339: call    TESObjectCELL_IsActorOwnershipRestricted; Verified return predicate: returns true only for an NPC actor in a cell with direct XOWN, no XGLB, and neither Public nor TempPublic bit set; guards return false. With an NPC owner it returns true when the actor's base form differs; with a faction owner it returns true when actor rank is below the cell's XRNK requirement (absent XRNK defaults to rank 0). Other owner types and non-NPC actors return false. This is an ownership-restriction check; the calling script-condition identity remains Unknown.
0x60E33E: pop     esi
0x60E33F: pop     ebx
0x60E340: retn
0x60E341: pop     esi
0x60E342: mov     al, bl
0x60E344: pop     ebx
0x60E345: retn
