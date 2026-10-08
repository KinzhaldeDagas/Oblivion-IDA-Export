0x65D5F0: mov     eax, [esp+specialization]; Increment the Combat, Magic, or Stealth advance byte from TESSkill::specialization. This counter is independent of class major membership.
0x65D5F4: cmp     eax, 2
0x65D5F7: ja      short locret_65D601
0x65D5F9: add     byte ptr [eax+ecx+5B8h], 1
0x65D601: retn    4
