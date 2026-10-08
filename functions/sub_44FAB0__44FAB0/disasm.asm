0x44FAB0: mov     al, [ecx+3DCh]; Returns whether TESFile fileFlags bit 0x10 is set. Oblivion callers treat this as the optimized-file flag and skip storing currentRecordOffset for optimized records.
0x44FAB6: shr     al, 4
0x44FAB9: and     al, 1
0x44FABB: retn
