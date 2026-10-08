0x664A20: mov     edx, [esp+attributeAV]; Player_GetAttributeLevelingBonus: for attribute AV 0..7, read the attribute's skill-increase count and convert it through LevelUp_GetAttributeMultiplierFromCount; otherwise return 1.
0x664A24: cmp     edx, 7
0x664A27: mov     eax, 1
0x664A2C: ja      short locret_664A3D
0x664A2E: push    edx; attributeAV
0x664A2F: call    Player_GetAttributeBonusSkillIncreaseCount; Returns the selected attribute's skill-increase count from the oldest queued eight-byte attribute-bonus bucket. The queue preserves separate bonus sets when multiple player levels are pending.
0x664A34: push    eax; skillIncreaseCount
0x664A35: call    LevelUp_GetAttributeMultiplierFromCount; Oblivion native attribute-bonus lookup. skillIncreaseCount <= 0 returns 1; values >= 10 use iLevelUp10Mult. Constructor defaults: counts 1-4 => x2, 5-7 => x3, 8-9 => x4, 10+ => x5.
0x664A3A: add     esp, 4
0x664A3D: retn    4
