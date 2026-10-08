0x4762B0: push    0FFFFFFFFh; Loads an IDLE KF into ActorAnimData without playback. Allocates an AnimIdle for +0xD0, chooses immediate versus queued loading from the native save/load flag 0x800, then calls ActorAnimData_InstallQueuedIdleOnly. The observed caller preloads a furniture-selected TESIdleForm.
0x4762B2: push    offset SEH_478B90
0x4762B7: mov     eax, large fs:0
0x4762BD: push    eax
0x4762BE: push    ecx
0x4762BF: push    esi
0x4762C0: mov     eax, ds:0B30AACh
0x4762C5: xor     eax, esp
0x4762C7: push    eax
0x4762C8: lea     eax, [esp+18h+var_C]
0x4762CC: mov     large fs:0, eax
0x4762D2: mov     esi, ecx
0x4762D4: mov     eax, ds:0B33B00h
0x4762D9: mov     ecx, [eax+18h]
0x4762DC: shr     ecx, 0Bh
0x4762DF: test    cl, 1
0x4762E2: push    2Ch ; ','; Size
0x4762E4: jnz     short loc_47631A
0x4762E6: call    FormHeapAlloc
0x4762EB: add     esp, 4
0x4762EE: mov     [esp+18h+var_10], eax
0x4762F2: test    eax, eax
0x4762F4: mov     [esp+18h+var_4], 0
0x4762FC: jz      short loc_47634E
0x4762FE: mov     edx, [esp+18h+arg_4]
0x476302: mov     ecx, [esp+18h+arg_8]
0x476306: push    0
0x476308: push    edx
0x476309: mov     edx, [esp+20h+arg_0]
0x47630D: push    0
0x47630F: push    ecx
0x476310: push    edx
0x476311: mov     ecx, eax
0x476313: call    AnimIdle_InitAndLoadKF; Initializes the 0x2C-byte AnimIdle runtime holder and starts its KF load. Observed layout: +0x00 phase (0 pending/unavailable, 1 ready, 2 active, 3 terminal), +0x04 completion/action mode, +0x08 KFModel, +0x0C requested slot/type, +0x10 played sequence, +0x24 TESIdleForm, +0x28 actor ref. Builds Meshes\\<TESIdleForm model path>, loads now or queues asynchronously, binds two actor-specific resources, and marks phase 1 when a KFModel is immediately available.
0x476318: jmp     short loc_476350
0x47631A: call    FormHeapAlloc
0x47631F: add     esp, 4
0x476322: mov     [esp+18h+var_10], eax
0x476326: test    eax, eax
0x476328: mov     [esp+18h+var_4], 1
0x476330: jz      short loc_47634E
0x476332: mov     ecx, [esp+18h+arg_4]
0x476336: mov     edx, [esp+18h+arg_8]
0x47633A: push    1
0x47633C: push    ecx
0x47633D: mov     ecx, [esp+20h+arg_0]
0x476341: push    0
0x476343: push    edx
0x476344: push    ecx
0x476345: mov     ecx, eax
0x476347: call    AnimIdle_InitAndLoadKF; Initializes the 0x2C-byte AnimIdle runtime holder and starts its KF load. Observed layout: +0x00 phase (0 pending/unavailable, 1 ready, 2 active, 3 terminal), +0x04 completion/action mode, +0x08 KFModel, +0x0C requested slot/type, +0x10 played sequence, +0x24 TESIdleForm, +0x28 actor ref. Builds Meshes\\<TESIdleForm model path>, loads now or queues asynchronously, binds two actor-specific resources, and marks phase 1 when a KFModel is immediately available.
0x47634C: jmp     short loc_476350
0x47634E: xor     eax, eax
0x476350: mov     ecx, esi
0x476352: mov     [esi+0D0h], eax
0x476358: mov     [esp+18h+var_4], 0FFFFFFFFh
0x476360: call    ActorAnimData_InstallQueuedIdleOnly; Install-only path for the queued AnimIdle at ActorAnimData +0xD0. Requires phase 1 and a successful ActorAnimData_InstallKFModel, then cleans/frees the AnimIdle and clears +0xD0 without calling ActorAnimData_PlayEncodedGroup.
0x476365: mov     ecx, [esp+18h+var_C]
0x476369: mov     large fs:0, ecx
0x476370: pop     ecx
0x476371: pop     esi
0x476372: add     esp, 10h
0x476375: retn    0Ch
0x9BFAD0: mov     eax, [ebp-10h]
0x9BFAD3: push    eax
0x9BFAD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BFAD9: pop     ecx
0x9BFADA: retn
0x9BFADB: mov     eax, [ebp-10h]
0x9BFADE: push    eax
0x9BFADF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BFAE4: pop     ecx
0x9BFAE5: retn
0x9BFAE6: mov     edx, [esp+arg_4]
0x9BFAEA: lea     eax, [edx-8]
0x9BFAED: mov     ecx, [edx-0Ch]
0x9BFAF0: xor     ecx, eax
0x9BFAF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BFAF7: mov     eax, offset stru_AE8F8C
0x9BFAFC: jmp     ___CxxFrameHandler3
