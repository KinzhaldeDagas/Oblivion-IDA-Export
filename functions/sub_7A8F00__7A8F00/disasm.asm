0x7A8F00: fld     [esp+spacingTolerance]; OBLIVION AUTHORITY (2026-08-30): Constructs exact 0x20-byte CLeafLodEngine: vector<SLodEntry> at +0x00, spacing +0x10, reduction +0x14, SIdvLeafInfo reference pointer +0x18, size-increase factor +0x1C. RT 4.1 corroborates member names after this layout was recovered from Oblivion.
0x7A8F04: mov     eax, ecx
0x7A8F06: fstp    dword ptr [eax+10h]
0x7A8F09: xor     ecx, ecx
0x7A8F0B: fld     [esp+leafReductionPercentage]
0x7A8F0F: mov     [eax+4], ecx
0x7A8F12: fstp    dword ptr [eax+14h]
0x7A8F15: mov     [eax+8], ecx
0x7A8F18: fld     [esp+leafSizeIncreaseFactor]
0x7A8F1C: mov     [eax+0Ch], ecx
0x7A8F1F: mov     ecx, [esp+leafInfo]
0x7A8F23: fstp    dword ptr [eax+1Ch]
0x7A8F26: mov     [eax+18h], ecx
0x7A8F29: retn    10h
