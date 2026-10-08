0x51BF00: mov     eax, [esp+index]; Return one of exactly seven SkillActorValue entries from TESClass::majorSkills. Caller must supply index 0..6.
0x51BF04: mov     eax, [ecx+eax*4+44h]
0x51BF08: retn    4
