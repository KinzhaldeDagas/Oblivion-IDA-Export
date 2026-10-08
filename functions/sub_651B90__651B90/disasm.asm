0x651B90: mov     eax, [ecx]
0x651B92: mov     eax, [eax+18Ch]
0x651B98: sub     esp, 20h
0x651B9B: push    esi
0x651B9C: push    edi
0x651B9D: lea     edx, [esp+28h+var_20]
0x651BA1: push    edx
0x651BA2: call    eax
0x651BA4: mov     esi, [eax]
0x651BA6: mov     eax, [esp+28h+var_20]
0x651BAA: test    eax, eax
0x651BAC: jz      short loc_651BCC
0x651BAE: mov     edi, eax
0x651BB0: add     eax, 4
0x651BB3: push    eax; lpAddend
0x651BB4: call    dword ptr ds:0A2807Ch
0x651BBA: test    eax, eax
0x651BBC: jnz     short loc_651BCC
0x651BBE: test    edi, edi
0x651BC0: jz      short loc_651BCC
0x651BC2: mov     edx, [edi]
0x651BC4: mov     eax, [edx]
0x651BC6: push    1
0x651BC8: mov     ecx, edi
0x651BCA: call    eax
0x651BCC: test    esi, esi
0x651BCE: jz      loc_651D52
0x651BD4: mov     edi, [esp+28h+source]
0x651BD8: mov     edx, [edi]
0x651BDA: mov     eax, [edx+198h]
0x651BE0: push    0
0x651BE2: mov     ecx, edi
0x651BE4: call    eax
0x651BE6: test    al, al
0x651BE8: jnz     loc_651D52
0x651BEE: lea     ecx, [esi+1E0h]
0x651BF4: call    hkCharacterContext_GetStateId; hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
0x651BF9: push    4; byteCount
0x651BFB: lea     ecx, [esp+2Ch+Src]
0x651BFF: push    ecx; source
0x651C00: mov     ecx, ds:0B33B00h; self
0x651C06: mov     [esp+30h+Src], eax
0x651C0A: call    SaveLoad_SaveData
0x651C0F: mov     ecx, ds:0B33B00h; self
0x651C15: push    4; byteCount
0x651C17: lea     edx, [esi+2A0h]
0x651C1D: push    edx; source
0x651C1E: call    SaveLoad_SaveData
0x651C23: mov     eax, [esi+1F4h]
0x651C29: push    4; byteCount
0x651C2B: lea     ecx, [esp+2Ch+source]
0x651C2F: push    ecx; source
0x651C30: mov     ecx, ds:0B33B00h; self
0x651C36: mov     [esp+30h+source], eax
0x651C3A: call    SaveLoad_SaveData
0x651C3F: test    [esp+28h+source], 800h
0x651C47: jz      short loc_651C67
0x651C49: lea     edx, [esp+28h+var_18]
0x651C4D: push    edx
0x651C4E: mov     ecx, esi
0x651C50: call    sub_5E1500; TES4 authoritative: reads proxy position via 0x891440 and converts Havok units back to TES/world units via 0x43F3E0.
0x651C55: mov     ecx, ds:0B33B00h; self
0x651C5B: push    0Ch; byteCount
0x651C5D: lea     eax, [esp+2Ch+var_18]
0x651C61: push    eax; source
0x651C62: call    SaveLoad_SaveData
0x651C67: push    10h; byteCount
0x651C69: lea     ecx, [esi+2E0h]
0x651C6F: push    ecx; source
0x651C70: mov     ecx, ds:0B33B00h; self
0x651C76: call    SaveLoad_SaveData
0x651C7B: mov     ecx, ds:0B33B00h; self
0x651C81: push    10h; byteCount
0x651C83: lea     edx, [esi+2F0h]
0x651C89: push    edx; source
0x651C8A: call    SaveLoad_SaveData
0x651C8F: mov     ecx, [esi+8]
0x651C92: test    ecx, ecx
0x651C94: jz      short loc_651CA9
0x651C96: call    bhkWorldObject_GetLinearVelocityPtr; TES4 authoritative: returns pointer to bhk collision object's velocity vector at object+0x10. 0x896000 copies this into proxy +0x2E0 before state update.
0x651C9B: push    eax
0x651C9C: lea     eax, [esp+2Ch+var_C]
0x651CA0: push    eax
0x651CA1: call    HavokVector_ToWorldVector; TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
0x651CA6: add     esp, 8
0x651CA9: push    0Ch; byteCount
0x651CAB: lea     ecx, [esp+2Ch+var_C]
0x651CAF: push    ecx; source
0x651CB0: mov     ecx, ds:0B33B00h; self
0x651CB6: call    SaveLoad_SaveData
0x651CBB: mov     edx, [edi]
0x651CBD: mov     eax, [edx+190h]
0x651CC3: mov     ecx, edi
0x651CC5: call    eax
0x651CC7: test    al, al
0x651CC9: push    4; byteCount
0x651CCB: jz      short loc_651CFE
0x651CCD: lea     ecx, [esi+31Ch]
0x651CD3: push    ecx; source
0x651CD4: mov     ecx, ds:0B33B00h; self
0x651CDA: call    SaveLoad_SaveData
0x651CDF: mov     ecx, ds:0B33B00h; self
0x651CE5: push    4; byteCount
0x651CE7: lea     edx, [esi+320h]
0x651CED: push    edx; source
0x651CEE: call    SaveLoad_SaveData
0x651CF3: push    4
0x651CF5: lea     eax, [esi+324h]
0x651CFB: push    eax
0x651CFC: jmp     short loc_651D19
0x651CFE: lea     ecx, [esi+328h]
0x651D04: push    ecx; source
0x651D05: mov     ecx, ds:0B33B00h; self
0x651D0B: call    SaveLoad_SaveData
0x651D10: push    4; byteCount
0x651D12: lea     edx, [esi+324h]
0x651D18: push    edx; source
0x651D19: mov     ecx, ds:0B33B00h; self
0x651D1F: call    SaveLoad_SaveData
0x651D24: mov     ecx, ds:0B33B00h; self
0x651D2A: cmp     byte ptr [ecx+7Ch], 77h ; 'w'
0x651D2E: jb      short loc_651D52
0x651D30: push    4; byteCount
0x651D32: lea     eax, [esi+32Ch]
0x651D38: push    eax; source
0x651D39: call    SaveLoad_SaveData
0x651D3E: mov     ecx, ds:0B33B00h; self
0x651D44: push    4; byteCount
0x651D46: add     esi, 330h
0x651D4C: push    esi; source
0x651D4D: call    SaveLoad_SaveData
0x651D52: pop     edi
0x651D53: pop     esi
0x651D54: add     esp, 20h
0x651D57: retn    4
