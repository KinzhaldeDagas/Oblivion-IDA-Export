0x461030: mov     eax, ds:0B33398h; MEF PERF 2026-10-02 PASS2: Verified dispatch relationship: guarded path calls animation drain45CE00, attached-animation drain45CEE0, controller drain459140, then later Havok drain45D030. Exact subsystem timing/frequency and all producer/resize paths remain Unknown.
0x461035: push    esi
0x461036: push    edi
0x461037: mov     edi, [eax+10h]
0x46103A: mov     esi, ecx
0x46103C: call    dword ptr ds:0A2808Ch
0x461042: cmp     eax, edi
0x461044: jnz     short loc_46104B
0x461046: mov     al, [esi+18h]
0x461049: jmp     short loc_461051
0x46104B: mov     eax, [esi+18h]
0x46104E: shr     eax, 12h
0x461051: and     al, 1
0x461053: test    al, al
0x461055: jz      loc_4610DE
0x46105B: mov     ecx, esi
0x46105D: call    SaveLoad_DrainAnimationBlobs
0x461062: mov     ecx, esi
0x461064: call    SaveLoad_DrainAttachedAnimationBlobs
0x461069: mov     ecx, esi
0x46106B: call    SaveLoad_DrainCharacterControllerBlobs
0x461070: cmp     [esp+8+arg_0], 0
0x461075: jz      short loc_4610D0
0x461077: fldz
0x461079: push    0; float
0x46107B: push    ecx
0x46107C: fstp    [esp+10h+var_10]; float
0x46107F: mov     ecx, (offset qword_B3BB2C+1D4h)
0x461084: call    sub_677EC0; ActorProcessManager high/process list update used during fast-travel time simulation.
0x461089: fldz
0x46108B: push    ecx
0x46108C: fstp    [esp+0Ch+var_C]; float
0x46108F: mov     ecx, ds:0B333A0h
0x461095: call    sub_4424D0; ModernWindowsCompatible decode: secondary sub_4424D0 caller passes 0.0 during this flagged world/cell update path; not a fire-specific animation routine.
0x46109A: mov     ecx, ds:0B333C4h; this
0x4610A0: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x4610A5: mov     edi, eax
0x4610A7: test    edi, edi
0x4610A9: jz      short loc_4610D0
0x4610AB: mov     ecx, edi; this
0x4610AD: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4610B2: test    al, al
0x4610B4: jz      short loc_4610C0
0x4610B6: lea     ecx, [edi+28h]
0x4610B9: call    sub_424180
0x4610BE: jmp     short loc_4610C5
0x4610C0: mov     eax, ds:0B35C24h
0x4610C5: test    eax, eax
0x4610C7: jz      short loc_4610D0
0x4610C9: mov     ecx, eax
0x4610CB: call    sub_88BC20
0x4610D0: mov     ecx, esi
0x4610D2: call    SaveLoad_DrainHavokBlobs
0x4610D7: mov     ecx, esi
0x4610D9: call    sub_45D190
0x4610DE: pop     edi
0x4610DF: pop     esi
0x4610E0: retn    4
