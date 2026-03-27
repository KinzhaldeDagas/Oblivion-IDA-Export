0x44A88F: movzx   eax, byte ptr [esi+4]
0x44A893: sub     eax, 23h ; '#'
0x44A896: jz      short TESDataHandler_PlaceObjectRef___CreateCharacter
0x44A898: sub     eax, 1
0x44A89B: jz      short TESDataHandler_PlaceObjectRef___CreateCreature
