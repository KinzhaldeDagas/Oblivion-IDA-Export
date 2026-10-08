0x547240: fld     dword ptr ds:0B36E10h; Returns baseAttackDamage * fDamageToWeaponPercentage. The GameSetting storage is 0xB36E10, registered at 0x9E8C70; native default is 0.01. Return ABI is float.
0x547246: fmul    [esp+baseAttackDamage]
0x54724A: fstp    [esp+baseAttackDamage]
0x54724E: fld     [esp+baseAttackDamage]
0x547252: retn
