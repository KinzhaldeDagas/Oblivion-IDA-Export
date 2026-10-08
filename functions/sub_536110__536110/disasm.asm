0x536110: mov     eax, [esp+collidable]
0x536114: push    esi
0x536115: xor     esi, esi
0x536117: test    eax, eax
0x536119: jz      short loc_536132
0x53611B: push    eax; collidable
0x53611C: call    bhkCollidable_ResolveNiAVObject; TES4 authoritative: resolves Havok collidable/contact reference to a NiAVObject when possible. Handles collidable type 1 directly and type 2 with a fallback through v5+0x0C.
0x536121: add     esp, 4
0x536124: test    eax, eax
0x536126: jz      short loc_536132
0x536128: pop     esi
0x536129: mov     [esp+collidable], eax
0x53612D: jmp     sub_4DC270; NiAVObject -> owning TES reference resolver. Walks up NiNode parents and extra data to recover TESObjectREFR/Player. Climb probe can use this on TES::CastRay return to reject self and dynamic actors.
0x536132: mov     eax, esi
0x536134: pop     esi
0x536135: retn
