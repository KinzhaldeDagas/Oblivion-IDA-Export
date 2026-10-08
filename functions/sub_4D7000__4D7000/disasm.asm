0x4D7000: mov     eax, [ecx+8]; Verified local operation: tests TESObjectREFR flags +0x08 for bit 0x80000. Probable semantic name HasTemp3DFlag, corroborated by local set-after-node-attach/clear-after-removal flow and Fallout's named TESObjectREFR::SetHasTemp3D counterpart.
0x4D7003: shr     eax, 13h
0x4D7006: and     al, 1
0x4D7008: retn
