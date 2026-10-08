0x428E90: mov     eax, [ecx+0Ch]; Verified: clears only ExtraLockData.flags bit 0x01 (Locked), preserving bit 0x02. OpenEffect uses this after its lock-category test; this preserves LockEffect's bit-0x02 ownership marker.
0x428E93: and     byte ptr [eax+8], 0FEh
0x428E97: retn
