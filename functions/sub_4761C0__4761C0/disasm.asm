0x4761C0: push    ebp; Generated power-attack list loader. Loads each candidate KF from the temporary file list and only adds TESAnimGroup power-attack sequences; non-power KFs are released.
0x4761C1: push    esi
0x4761C2: mov     esi, [esp+8+arg_0]
0x4761C6: test    esi, esi
0x4761C8: mov     ebp, ecx
0x4761CA: jz      loc_476253
0x4761D0: mov     ecx, esi
0x4761D2: call    BSSimpleList_IsEmpty
0x4761D7: test    al, al
0x4761D9: jnz     short loc_47624A
0x4761DB: push    ebx
0x4761DC: push    edi
0x4761DD: lea     ecx, [ecx+0]
0x4761E0: mov     ebx, [esi]
0x4761E2: mov     ecx, ds:0B33A1Ch
0x4761E8: push    ebx
0x4761E9: call    ModelLoader_LoadKFModelNow; Synchronous KF model load path. Queued idle loader and menu/power-attack setup use this when an immediate KFModel is required.
0x4761EE: mov     edi, eax
0x4761F0: mov     ecx, [edi+8]
0x4761F3: call    TESAnimGroup_IsPowerAttack; TESAnimGroup power-attack test: native group id 0x16-0x1A inclusive.
0x4761F8: test    al, al
0x4761FA: jz      short loc_476208
0x4761FC: push    0
0x4761FE: push    edi
0x4761FF: mov     ecx, ebp; this
0x476201: call    ActorAnimData_InstallKFModel; CustomAnimSupport decode: installs a parsed KFModel into ActorAnimData as AnimSequenceSingle/Multiple or defers it. Historical constructor-style name is not canonical.
0x476206: jmp     short loc_476212
0x476208: add     edi, 0Ch
0x47620B: push    edi; lpAddend
0x47620C: call    dword ptr ds:0A2807Ch
0x476212: push    ebx
0x476213: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x476218: mov     eax, [esi+4]
0x47621B: add     esp, 4
0x47621E: test    eax, eax
0x476220: jz      short loc_476237
0x476222: mov     ecx, [eax+4]
0x476225: mov     [esi+4], ecx
0x476228: mov     edx, [eax]
0x47622A: push    eax
0x47622B: mov     [esi], edx
0x47622D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x476232: add     esp, 4
0x476235: jmp     short loc_47623D
0x476237: mov     dword ptr [esi], 0
0x47623D: mov     ecx, esi
0x47623F: call    BSSimpleList_IsEmpty
0x476244: test    al, al
0x476246: jz      short loc_4761E0
0x476248: pop     edi
0x476249: pop     ebx
0x47624A: push    esi
0x47624B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x476250: add     esp, 4
0x476253: pop     esi
0x476254: pop     ebp
0x476255: retn    4
