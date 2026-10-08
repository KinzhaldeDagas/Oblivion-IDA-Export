0x67EC70: fld     [esp+value]; Verified raw float setter at object+4. A* uses it for TESConnectedPoint G/pathCost; unrelated callers use the same helper for their own +4 float field.
0x67EC74: fstp    dword ptr [ecx+4]
0x67EC77: retn    4
