0x5E0CD0: mov     eax, [ecx]; Actor_GetArmorRating helper here returns GetAVfCur(0x2B), the DefendBonus actor value added to worn armor by Character_GetArmorRating.
0x5E0CD2: mov     edx, [eax+288h]
0x5E0CD8: push    2Bh ; '+'
0x5E0CDA: call    edx
0x5E0CDC: retn
