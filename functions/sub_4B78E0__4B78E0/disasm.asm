0x4B78E0: cmp     dword ptr [ecx+6Ch], 0; Verified mechanics: returns true iff either pointer in the 8-byte TESObjectDOOR.randomTeleport BSSimpleList head is nonzero. Probable domain meaning: the door has at least one random-teleport destination space, supported by the membership and destination-selection callers.
0x4B78E4: jnz     short loc_4B78EC
0x4B78E6: cmp     dword ptr [ecx+68h], 0
0x4B78EA: jz      short loc_4B78EF
0x4B78EC: mov     al, 1
0x4B78EE: retn
0x4B78EF: xor     al, al
0x4B78F1: retn
