0x547540: fld     dword ptr ds:0B36F20h; Converts a base reach/distance value to world combat distance using the Oblivion combat-distance game-setting multiplier.
0x547546: fmul    [esp+baseDistance]
0x54754A: fstp    [esp+baseDistance]
0x54754E: fld     [esp+baseDistance]
0x547552: retn
