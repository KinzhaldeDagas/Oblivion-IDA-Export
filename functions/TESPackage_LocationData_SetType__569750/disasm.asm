0x569750: movsx   edx, byte ptr [ecx]
0x569753: mov     eax, [esp+arg_0]
0x569757: cmp     eax, edx
0x569759: jz      short TESPackage_LocationData_SetType___def_569765
0x56975B: mov     [ecx], al
0x56975D: movsx   eax, al
0x569760: cmp     eax, 5; switch 6 cases
0x569763: ja      short TESPackage_LocationData_SetType___def_569765
0x569765: jmp     ds:jpt_569765[eax*4]; switch jump
0x56976C: xor     eax, eax; jumptable 00569765 case 1
0x56976E: mov     [ecx+8], eax
0x569771: mov     [ecx+4], eax
0x569774: retn    4
0x569777: mov     dword ptr [ecx+8], 0; jumptable 00569765 cases 0,2-5
