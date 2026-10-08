0x660110: cmp     [esp+firstPerson], 0; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x660115: jz      short loc_660120
0x660117: mov     eax, [ecx+5D0h]
0x66011D: retn    4
0x660120: call    TESObjectREFR__GetNiNode; ODismemberment: TESObjectREFR::GetNiNode; runtime primitive starts from actor 3D and toggles prepared ODISMEMBER_* nodes.
0x660125: retn    4
