0x889CB0: mov     eax, [ecx+50h]; Raycast data -> hit NiAVObject helper via root collidable at +0x50.
0x889CB3: test    eax, eax
0x889CB5: jz      short loc_889CC1
0x889CB7: push    eax; collidable
0x889CB8: call    bhkCollidable_ResolveNiAVObject; TES4 authoritative: resolves Havok collidable/contact reference to a NiAVObject when possible. Handles collidable type 1 directly and type 2 with a fallback through v5+0x0C.
0x889CBD: add     esp, 4
0x889CC0: retn
0x889CC1: xor     eax, eax
0x889CC3: retn
