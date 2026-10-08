0x68F00A: push    2; byteCount
0x68F00C: lea     ecx, [esp+4+Dst]
0x68F010: mov     dword ptr [ebx], 0
0x68F016: push    ecx; destination
0x68F017: mov     ecx, ds:0B33B00h; MEF candidate verification 2026-05-30: ActiveEffect list UInt16 count verified, but entries are variable-size and the load call is OBME-sensitive. Decode-only for v23.
0x68F01D: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x68F022: xor     ebp, ebp; MEF hook feasibility 2026-05-30: active-effect count boundary verified but remains decode-only. Variable-size entries and OBME-sensitive load call make a minimum-entry clamp incomplete.
0x68F024: cmp     word ptr [esp+Dst], bp; EnginePatch analysis 2026-05-07: ActiveEffect list saved count is UInt16. ActiveEffect_Base_Load consumes at least 7 bytes for save version >=0x2A or 5 bytes for older format before effect-specific load. Clamp count to remaining bytes.
0x68F029: jbe     short loc_68F09B
0x68F02B: jmp     short ActiveEffect_Base_LoadAEList?___LoadActiveEffects_Loop
