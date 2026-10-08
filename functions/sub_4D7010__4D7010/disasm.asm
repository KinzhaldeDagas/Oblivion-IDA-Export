0x4D7010: cmp     [esp+enabled], 0; Verified local operation: sets/clears TESObjectREFR flags +0x08 bit 0x80000. Probable semantic name SetTemp3DFlag; the bit is toggled around reference NiNode attachment/removal and matches Fallout's named SetHasTemp3D usage.
0x4D7015: mov     eax, [ecx+8]
0x4D7018: jz      short loc_4D7025
0x4D701A: or      eax, 80000h
0x4D701F: mov     [ecx+8], eax
0x4D7022: retn    4
0x4D7025: and     eax, 0FFF7FFFFh
0x4D702A: mov     [ecx+8], eax
0x4D702D: retn    4
