0x56BC70: fld     [esp+deltaSeconds]; Verified BSTempEffect lifetime update: adds deltaSeconds to elapsed +0x10 and returns duration +0x08 >= elapsed. Equality remains alive for that update.
0x56BC74: fadd    dword ptr [ecx+10h]
0x56BC77: fstp    [esp+deltaSeconds]; BloodOnDeath decode 2026-05-30: BSTempEffect_Update adds deltaSeconds to elapsed at +0x10 and persists while elapsed <= duration at +0x08. Longer decal lifetime directly means blood is left behind longer.
0x56BC7B: fld     [esp+deltaSeconds]
0x56BC7F: fst     dword ptr [ecx+10h]
0x56BC82: fld     dword ptr [ecx+8]
0x56BC85: fcompp
0x56BC87: fnstsw  ax
0x56BC89: test    ah, 5
0x56BC8C: jp      short loc_56BC93
0x56BC8E: xor     al, al
0x56BC90: retn    4
0x56BC93: mov     al, 1
0x56BC95: retn    4
