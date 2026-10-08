0x42B460: mov     ecx, [ecx]; ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
0x42B462: test    ecx, ecx
0x42B464: jz      short loc_42B46B
0x42B466: jmp     Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x42B46B: xor     eax, eax
0x42B46D: retn
