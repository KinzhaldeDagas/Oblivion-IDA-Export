0x68F00A: push    2; Size
0x68F00C: lea     ecx, [esp+4+Dst]
0x68F010: mov     dword ptr [ebx], 0
0x68F016: push    ecx; Dst
0x68F017: mov     ecx, ds:0B33B00h
0x68F01D: call    SaveLoad_LoadData
0x68F022: xor     ebp, ebp
0x68F024: cmp     [esp+Dst], bp
0x68F029: jbe     short loc_68F09B
0x68F02B: jmp     short ActiveEffect_Base_LoadAEList?___LoadActiveEffects_Loop
