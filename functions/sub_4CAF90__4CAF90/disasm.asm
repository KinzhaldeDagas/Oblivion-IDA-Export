0x4CAF90: movzx   eax, byte ptr [ecx+24h]
0x4CAF94: test    al, 1
0x4CAF96: jz      short loc_4CAFAA; Verified: exterior-cell branch (TESObjectCELL_IsInterior false) resolves climate from the cell's worldspace parent chain.
0x4CAF98: shr     eax, 7
0x4CAF9B: test    al, 1
0x4CAF9D: jnz     short loc_4CAFA2; Verified Oblivion interior climate gate: requires cell flags0 bit 0x80, then reads kExtraData_CellClimate. Fallout divergence: TESObjectCELL::GetClimate uses (cellFlags & 0xFFFFFF80) != 0, accepting any high-byte flag.
0x4CAF9F: xor     eax, eax
0x4CAFA1: retn
0x4CAFA2: add     ecx, 28h ; '('; this
0x4CAFA5: jmp     loc_41F9E0
0x4CAFAA: mov     ecx, [ecx+50h]; this
0x4CAFAD: jmp     TESWorldSpace_GetClimateFromRoot
0x41F9E0: push    0Ch; a2
0x41F9E2: call    BaseExtraList_GetExtraData
0x41F9E7: test    eax, eax
0x41F9E9: jnz     short loc_41F9EC
0x41F9EB: retn
0x41F9EC: mov     eax, [eax+0Ch]
0x41F9EF: retn
