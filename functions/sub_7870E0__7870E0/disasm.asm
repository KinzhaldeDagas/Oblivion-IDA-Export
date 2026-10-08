0x7870E0: mov     eax, [ecx]; CSpeedTreeRT::SetBranchDimmingScalar. Writes CTreeEngine+0x8C when the engine exists. Fallout symbols identify the field; Oblivion layout is authoritative.
0x7870E2: test    eax, eax
0x7870E4: jz      short locret_7870F0
0x7870E6: fld     [esp+value]
0x7870EA: fstp    dword ptr [eax+8Ch]
0x7870F0: retn    4
