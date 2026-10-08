0x51BEC0: mov     al, [ecx+60h]; TESClass_IsPlayable reads classFlags at +0x60 bit 0.
0x51BEC3: and     al, 1
0x51BEC5: retn
