0x4D6FD0: mov     eax, [ecx+8]; Verified local operation: returns whether TESForm flags at +0x08 contain bit 0x8000. Probable role: visible-distant flag, corroborated by the identical local bit check in Fallout's named TESObjectREFR::GetVisibleDistant and by Oblivion's distant model queue callers. Divergence: Fallout also falls back to the base form's bit when the reference bit is clear; this Oblivion helper checks only the reference's own flags.
0x4D6FD3: shr     eax, 0Fh
0x4D6FD6: and     al, 1
0x4D6FD8: retn
