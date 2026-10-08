0x42A8C0: mov     eax, ecx
0x42A8C2: xor     ecx, ecx
0x42A8C4: mov     byte ptr [eax+4], 4Bh ; 'K'
0x42A8C8: mov     [eax+8], ecx
0x42A8CB: mov     dword ptr [eax], offset ??_7ExtraSavedMovementData@@6B@; const ExtraSavedMovementData::`vftable'
0x42A8D1: mov     edx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x42A8D7: mov     dl, [edx+7Ch]
0x42A8DA: mov     [eax+0Ch], dl
0x42A8DD: mov     [eax+10h], ecx
0x42A8E0: mov     [eax+14h], ecx
0x42A8E3: mov     [eax+18h], ecx
0x42A8E6: retn
