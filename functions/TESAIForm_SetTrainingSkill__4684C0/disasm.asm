0x4684C0: mov     eax, [esp+actorValue]; Accept only SkillActorValue 0x0C..0x20 and store its zero-based 0..20 index in TESAIForm+0x0C.
0x4684C4: lea     edx, [eax-0Ch]
0x4684C7: cmp     edx, 14h
0x4684CA: ja      short locret_4684D1
0x4684CC: sub     al, 0Ch
0x4684CE: mov     [ecx+0Ch], al
0x4684D1: retn    4
