0x65FF10: cmp     byte ptr ds:0B3BB06h, 0; PlayerCharacter vtable +0x2C4 override. In god mode returns false without changing the equipped item; otherwise forwards EntryData, float damage, and suppression flag to Actor_DamageEquippedItem.
0x65FF17: jz      short loc_65FF1E
0x65FF19: xor     al, al
0x65FF1B: retn    0Ch
0x65FF1E: mov     eax, dword ptr [esp+suppressArmorSkillModifiers]
0x65FF22: fld     [esp+damage]
0x65FF26: mov     edx, [esp+entry]
0x65FF2A: push    eax; suppressArmorSkillModifiers
0x65FF2B: push    ecx
0x65FF2C: fstp    [esp+8+var_8]; damage
0x65FF2F: push    edx; entry
0x65FF30: call    Actor_DamageEquippedItem; Actor vtable +0x2C4 durability mutation. Applies positive damage to EntryData health, with optional Heavy/Light armor skill modifiers unless suppressed; updates container extras and handles break/unequip at zero. Returns false while item remains usable and true on terminal/break handling paths.
0x65FF35: retn    0Ch
