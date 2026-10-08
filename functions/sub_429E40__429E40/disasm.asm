0x429E40: mov     eax, ecx; Verified ExtraRank constructor: initializes inherited BSExtraData type to kExtraData_Rank (0x29), clears linkage, installs the ExtraRank vtable, and stores a signed 32-bit rank at +0x0C. Allocations request 0x10 bytes.
0x429E42: mov     ecx, [esp+rank]
0x429E46: mov     byte ptr [eax+4], 29h ; ')'
0x429E4A: mov     dword ptr [eax+8], 0
0x429E51: mov     dword ptr [eax], offset ??_7ExtraRank@@6B@; const ExtraRank::`vftable'
0x429E57: mov     [eax+0Ch], ecx
0x429E5A: retn    4
