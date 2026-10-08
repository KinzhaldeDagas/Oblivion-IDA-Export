0x472C40: push    ecx; Writes one AnimIdle slot state: presence/state metadata, idle form reference, optional loaded sequence marker, and nested BSAnimGroupSequence state.
0x472C41: push    esi
0x472C42: mov     esi, ecx
0x472C44: mov     ecx, ds:0B33B00h; self
0x472C4A: push    4; byteCount
0x472C4C: push    esi; source
0x472C4D: call    SaveLoad_SaveData
0x472C52: mov     ecx, ds:0B33B00h; self
0x472C58: push    4; byteCount
0x472C5A: lea     eax, [esi+4]
0x472C5D: push    eax; source
0x472C5E: call    SaveLoad_SaveData
0x472C63: push    4; byteCount
0x472C65: lea     ecx, [esi+0Ch]
0x472C68: push    ecx; source
0x472C69: mov     ecx, ds:0B33B00h; self
0x472C6F: call    SaveLoad_SaveData
0x472C74: cmp     dword ptr [esi+10h], 0
0x472C78: mov     [esp+8+Src], 0
0x472C7D: jz      short loc_472C84
0x472C7F: mov     [esp+8+Src], 1
0x472C84: mov     ecx, ds:0B33B00h; self
0x472C8A: push    1; byteCount
0x472C8C: lea     edx, [esp+0Ch+Src]
0x472C90: push    edx; source
0x472C91: call    SaveLoad_SaveData
0x472C96: cmp     [esp+8+Src], 0
0x472C9B: jz      short loc_472CFF
0x472C9D: mov     eax, [esi+8]
0x472CA0: mov     edx, [esp+8+arg_4]
0x472CA4: mov     [esp+8+source], 0FFh
0x472CA9: mov     ecx, [eax+8]
0x472CAC: push    edi
0x472CAD: mov     edi, [edx+9Ch]
0x472CB3: lea     eax, [esp+0Ch+arg_4]
0x472CB7: push    eax
0x472CB8: call    TESAnimGroup_GetAnimationGroup; TESAnimGroup native group id accessor: byte at TESAnimGroup +0x08.
0x472CBD: push    eax
0x472CBE: mov     ecx, edi
0x472CC0: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x472CC5: test    al, al
0x472CC7: pop     edi
0x472CC8: jz      short loc_472CDD
0x472CCA: mov     eax, [esi+10h]
0x472CCD: mov     ecx, [esp+8+arg_4]
0x472CD1: mov     edx, [ecx]
0x472CD3: push    eax
0x472CD4: mov     eax, [edx+14h]
0x472CD7: call    eax
0x472CD9: mov     [esp+8+source], al
0x472CDD: push    1; byteCount
0x472CDF: lea     ecx, [esp+0Ch+source]
0x472CE3: push    ecx; source
0x472CE4: mov     ecx, ds:0B33B00h; self
0x472CEA: call    SaveLoad_SaveData
0x472CEF: fld     [esp+8+arg_0]
0x472CF3: push    ecx
0x472CF4: mov     ecx, [esi+10h]
0x472CF7: fstp    dword ptr [esp+0Ch+var_C]; Src
0x472CFA: call    BSAnimGroupSequence_SaveState; Serializes BSAnimGroupSequence effective sample time, active state, fields +0x34/+0x38 and +0x54; save versions below 0x71 include the legacy extra time copy.
0x472CFF: pop     esi
0x472D00: pop     ecx
0x472D01: retn    8
