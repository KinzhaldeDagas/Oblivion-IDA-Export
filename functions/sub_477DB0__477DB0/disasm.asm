0x477DB0: push    0FFFFFFFFh; Queues a TESIdleForm for playable ActorAnimData processing. If requested slot/type is 0 or 5, forces completion/action mode to 3; allocates and initializes an AnimIdle, stores it at queued slot +0xD0, then immediately attempts ActorAnimData_ProcessQueuedIdleKF for cache-hit/synchronous readiness.
0x477DB2: push    offset SEH_477DB0
0x477DB7: mov     eax, large fs:0
0x477DBD: push    eax
0x477DBE: push    ebx
0x477DBF: push    esi
0x477DC0: push    edi
0x477DC1: mov     eax, ds:0B30AACh
0x477DC6: xor     eax, esp
0x477DC8: push    eax
0x477DC9: lea     eax, [esp+1Ch+var_C]
0x477DCD: mov     large fs:0, eax
0x477DD3: mov     ebx, ecx
0x477DD5: mov     edi, [esp+1Ch+arg_8]
0x477DD9: test    edi, edi
0x477DDB: mov     esi, [esp+1Ch+arg_C]
0x477DDF: jz      short loc_477DE6
0x477DE1: cmp     edi, 5
0x477DE4: jnz     short loc_477DEB
0x477DE6: mov     esi, 3
0x477DEB: push    2Ch ; ','; Size
0x477DED: call    FormHeapAlloc
0x477DF2: add     esp, 4
0x477DF5: mov     [esp+1Ch+arg_C], eax
0x477DF9: test    eax, eax
0x477DFB: mov     [esp+1Ch+var_4], 0
0x477E03: jz      short loc_477E1C
0x477E05: mov     ecx, [esp+1Ch+arg_4]
0x477E09: mov     edx, [esp+1Ch+arg_0]
0x477E0D: push    0
0x477E0F: push    ecx
0x477E10: push    esi
0x477E11: push    edi
0x477E12: push    edx
0x477E13: mov     ecx, eax
0x477E15: call    AnimIdle_InitAndLoadKF; Initializes the 0x2C-byte AnimIdle runtime holder and starts its KF load. Observed layout: +0x00 phase (0 pending/unavailable, 1 ready, 2 active, 3 terminal), +0x04 completion/action mode, +0x08 KFModel, +0x0C requested slot/type, +0x10 played sequence, +0x24 TESIdleForm, +0x28 actor ref. Builds Meshes\\<TESIdleForm model path>, loads now or queues asynchronously, binds two actor-specific resources, and marks phase 1 when a KFModel is immediately available.
0x477E1A: jmp     short loc_477E1E
0x477E1C: xor     eax, eax
0x477E1E: mov     ecx, ebx; this
0x477E20: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x477E28: mov     [ebx+0D0h], eax
0x477E2E: call    ActorAnimData_ProcessQueuedIdleKF; Processes playable queued-IDLE state. If +0xD0 exists it must be phase 1, then cleanup/promotion moves it to current +0xCC. Requires current phase 1, installs its KFModel, resolves the parsed encoded group, plays through ActorAnimData_PlayEncodedGroup using stored slot/type +0x0C, and attaches the returned sequence; failures mark phase 3.
0x477E33: mov     ecx, [esp+1Ch+var_C]
0x477E37: mov     large fs:0, ecx
0x477E3E: pop     ecx
0x477E3F: pop     edi
0x477E40: pop     esi
0x477E41: pop     ebx
0x477E42: add     esp, 0Ch
0x477E45: retn    10h
0x9AEEB0: mov     eax, [ebp+10h]
0x9AEEB3: push    eax
0x9AEEB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AEEB9: pop     ecx
0x9AEEBA: retn
0x9AEEBB: mov     edx, [esp+arg_4]
0x9AEEBF: lea     eax, [edx-0Ch]
0x9AEEC2: mov     ecx, [edx-10h]
0x9AEEC5: xor     ecx, eax
0x9AEEC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEECC: mov     eax, offset stru_ADB574
0x9AEED1: jmp     ___CxxFrameHandler3
