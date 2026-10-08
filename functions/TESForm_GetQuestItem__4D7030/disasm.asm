0x4D7030: mov     eax, [ecx+8]; TESForm_GetQuestItem: returns TESForm flags bit 0x400. Plugin IsStealableForm uses this, so quest items are skipped before RemoveItem.
0x4D7033: shr     eax, 0Ah
0x4D7036: and     al, 1
0x4D7038: retn
