0x69D960: push    esi; Verified MagicHitEffect vtable +0x80 callback takes a TESChildCELL* targetReference, reads its parent-cell pointer at +0x40, and stores it in BSTempEffect.parentCell at +0x0C. The explicit TESObjectREFR* linkContext parameter is unused in this implementation.
0x69D961: mov     esi, ecx
0x69D963: mov     ecx, [esp+4+targetReference]; this
0x69D967: test    ecx, ecx
0x69D969: jz      short loc_69D973
0x69D96B: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69D970: mov     [esi+0Ch], eax
0x69D973: pop     esi
0x69D974: retn    8
