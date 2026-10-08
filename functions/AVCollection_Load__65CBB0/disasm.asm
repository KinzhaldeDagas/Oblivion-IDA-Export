0x65CBB0: sub     esp, 10h
0x65CBB3: push    ebp
0x65CBB4: push    edi
0x65CBB5: push    2; byteCount
0x65CBB7: lea     eax, [esp+1Ch+Dst]
0x65CBBB: mov     ebp, ecx
0x65CBBD: mov     ecx, ds:0B33B00h; self
0x65CBC3: push    eax; destination
0x65CBC4: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x65CBC9: xor     edi, edi; MEF v51 bridge-stack audit: direct JMP preserves entry ESP; AVCollection UInt16 count is exactly [ESP+0Ch]. Bridge helper push/add pair restores ESP before replaying compare.
0x65CBCB: cmp     [esp+18h+Dst], di
0x65CBD0: jbe     AVCollection_Load___Done
0x65CBD6: push    ebx
0x65CBD7: push    esi
0x65CBD8: mov     bl, 34h ; '4'
0x65CBDA: lea     ebx, [ebx+0]
0x65CBE0: mov     ecx, ds:0B33B00h; self
0x65CBE6: xor     esi, esi
0x65CBE8: cmp     [ecx+7Ch], bl
0x65CBEB: jb      short loc_65CC3F
0x65CBED: push    1; byteCount
0x65CBEF: lea     edx, [esp+24h+destination]
0x65CBF3: push    edx; destination
0x65CBF4: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x65CBF9: mov     ecx, ds:0B33B00h; self
0x65CBFF: push    4; byteCount
0x65CC01: lea     eax, [esp+24h+var_8]
0x65CC05: push    eax; destination
0x65CC06: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x65CC0B: push    8; Size
0x65CC0D: call    FormHeapAlloc
0x65CC12: add     esp, 4
0x65CC15: test    eax, eax
0x65CC17: jz      short loc_65CC30
0x65CC19: fld     [esp+20h+var_8]
0x65CC1D: mov     cl, [esp+20h+destination]
0x65CC21: fstp    [esp+20h+var_4]
0x65CC25: mov     [eax], cl
0x65CC27: fld     [esp+20h+var_4]
0x65CC2B: fstp    dword ptr [eax+4]
0x65CC2E: jmp     short loc_65CC32
0x65CC30: xor     eax, eax
0x65CC32: mov     ecx, ds:0B33B00h
0x65CC38: cmp     [ecx+7Ch], bl
0x65CC3B: mov     esi, eax
0x65CC3D: jnb     short loc_65CC69
0x65CC3F: push    8; Size
0x65CC41: call    FormHeapAlloc
0x65CC46: add     esp, 4
0x65CC49: test    eax, eax
0x65CC4B: jz      short loc_65CC57
0x65CC4D: fldz
0x65CC4F: mov     byte ptr [eax], 0
0x65CC52: fstp    dword ptr [eax+4]
0x65CC55: jmp     short loc_65CC59
0x65CC57: xor     eax, eax
0x65CC59: mov     ecx, ds:0B33B00h; self
0x65CC5F: push    8; byteCount
0x65CC61: push    eax; destination
0x65CC62: mov     esi, eax
0x65CC64: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x65CC69: push    esi; entry
0x65CC6A: mov     ecx, ebp; self
0x65CC6C: call    AVCollection_Add
0x65CC71: movzx   edx, [esp+20h+Dst]
0x65CC76: add     edi, 1
0x65CC79: cmp     edi, edx
0x65CC7B: jb      loc_65CBE0
0x65CC81: pop     esi
0x65CC82: pop     ebx
0x65CC83: pop     edi
0x65CC84: pop     ebp
0x65CC85: add     esp, 10h
0x65CC88: retn
