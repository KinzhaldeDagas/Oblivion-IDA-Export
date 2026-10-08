0x424D00: push    23h ; '#'; 3DTheft decode: Remove/unlink follower actor pointer from target ExtraFollower list.
0x424D02: call    BaseExtraList_GetExtraData
0x424D07: test    eax, eax
0x424D09: jz      short locret_424D23
0x424D0B: mov     ecx, [esp+arg_0]
0x424D0F: push    ecx
0x424D10: mov     ecx, [eax+0Ch]
0x424D13: call    BSSimpleList_Remove
0x424D18: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x424D1E: call    sub_45A500
0x424D23: retn    4
