0x44A88F: movzx   eax, byte ptr [esi+4]; New-ref path chooses allocation by base form type: type 0x23 Character -> Character_constr, type 0x24 Creature -> Creature_constr, otherwise TESObjectREFR_constr.
0x44A893: sub     eax, 23h ; '#'
0x44A896: jz      short TESDataHandler_PlaceObjectRef___CreateCharacter; PlaceObjectRef Character allocation branch: base form type 0x23 allocates 0x10C bytes and calls Character_constr.
0x44A898: sub     eax, 1
0x44A89B: jz      short TESDataHandler_PlaceObjectRef___CreateCreature; PlaceObjectRef Creature allocation branch: base form type 0x24 allocates 0x108 bytes and calls Creature_constr.
