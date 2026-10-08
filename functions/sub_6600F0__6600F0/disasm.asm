0x6600F0: cmp     byte ptr [ecx+588h], 0; Returns the player's active render root. If PlayerCharacter+0x588 selects third person, or firstPersonNiNode +0x5D0 is null, returns ordinary TESObjectREFR NiNode; otherwise returns firstPersonNiNode.
0x6600F7: jnz     short loc_660103
0x6600F9: mov     eax, [ecx+5D0h]
0x6600FF: test    eax, eax
0x660101: jnz     short locret_660108
0x660103: jmp     TESObjectREFR__GetNiNode; ODismemberment: TESObjectREFR::GetNiNode; runtime primitive starts from actor 3D and toggles prepared ODISMEMBER_* nodes.
0x660108: retn
