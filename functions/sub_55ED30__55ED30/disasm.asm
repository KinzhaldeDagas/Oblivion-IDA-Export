0x55ED30: push    0FFFFFFFFh; Verified one-slot base model cache. For each TESObjectTREE, compares requested seed against BSTreeModel.seed at +0x48; same seed returns the cached model, different seed replaces the only slot. Cache operation is protected by g_BSTreeManager_TreeCriticalSection.
0x55ED32: push    offset SEH_55ED30
0x55ED37: mov     eax, large fs:0
0x55ED3D: push    eax
0x55ED3E: push    ecx
0x55ED3F: push    ebx
0x55ED40: push    ebp
0x55ED41: push    esi
0x55ED42: push    edi
0x55ED43: mov     eax, ds:0B30AACh
0x55ED48: xor     eax, esp
0x55ED4A: push    eax
0x55ED4B: lea     eax, [esp+24h+var_C]
0x55ED4F: mov     large fs:0, eax
0x55ED55: mov     esi, ecx
0x55ED57: xor     edi, edi
0x55ED59: push    offset unk_A2F830; lpCriticalSection
0x55ED5E: mov     ecx, offset g_BSTreeManager_TreeCriticalSection
0x55ED63: mov     [esp+28h+var_4], edi
0x55ED67: mov     [esp+28h+var_10], edi
0x55ED6B: call    NiEnterCriticalSection; Verified: serializes the one-slot TESObjectTREE* -> BSTreeModel* seed cache with the tree critical section. Cache hits compare requested seed with BSTreeModel.seed (+0x48); a miss replaces the lone cached model. Fallout has matching one-entry-per-tree cache behavior, but its BSTreeModel and BSTreeManager layouts differ; do not transplant offsets.
0x55ED70: mov     ebx, [esp+24h+treeObject]
0x55ED74: mov     [ebx], edi
0x55ED76: mov     eax, [esp+24h+seed]
0x55ED7A: cmp     eax, edi
0x55ED7C: mov     [esp+24h+var_4], edi
0x55ED80: mov     [esp+24h+var_10], 1
0x55ED88: jz      loc_55EEE1
0x55ED8E: push    eax; tree
0x55ED8F: mov     ecx, esi; this
0x55ED91: call    BSTreeManager_GetModelArray; Verified BSTreeManager.modelCacheByTree at +0: lazily creates a 37-bucket NiTPointerMap<TESObjectTREE*, NiPointer<BSTreeModel>*> and gives each tree form a one-element smart-pointer array.
0x55ED96: mov     ecx, [esp+24h+modelOut]
0x55ED9A: or      edx, 0FFFFFFFFh
0x55ED9D: mov     ebp, eax
0x55ED9F: mov     [esp+24h+seed], edx
0x55EDA3: xor     eax, eax
0x55EDA5: mov     esi, [ebp+eax*4+0]
0x55EDA9: cmp     esi, edi
0x55EDAB: jz      short loc_55EE27
0x55EDAD: cmp     [esi+48h], ecx
0x55EDB0: jnz     short loc_55EE31
0x55EDB2: mov     edi, [ebx]
0x55EDB4: cmp     edi, esi
0x55EDB6: jz      short loc_55EDE4
0x55EDB8: test    edi, edi
0x55EDBA: jz      short loc_55EDD8
0x55EDBC: lea     eax, [edi+4]
0x55EDBF: push    eax; lpAddend
0x55EDC0: call    dword ptr ds:0A2807Ch
0x55EDC6: test    eax, eax
0x55EDC8: jnz     short loc_55EDD8
0x55EDCA: test    edi, edi
0x55EDCC: jz      short loc_55EDD8
0x55EDCE: mov     edx, [edi]
0x55EDD0: mov     eax, [edx]
0x55EDD2: push    1
0x55EDD4: mov     ecx, edi
0x55EDD6: call    eax
0x55EDD8: mov     [ebx], esi
0x55EDDA: add     esi, 4
0x55EDDD: push    esi; lpAddend
0x55EDDE: call    dword ptr ds:0A28078h
0x55EDE4: mov     esi, [ebx]
0x55EDE6: test    esi, esi
0x55EDE8: jnz     loc_55EEE1
0x55EDEE: cmp     [esp+24h+seed], esi
0x55EDF2: jge     short loc_55EE3F
0x55EDF4: cmp     esi, [ebp+0]
0x55EDF7: jz      loc_55EEE1
0x55EDFD: test    esi, esi
0x55EDFF: jz      short loc_55EE1D
0x55EE01: lea     ecx, [esi+4]
0x55EE04: push    ecx; lpAddend
0x55EE05: call    dword ptr ds:0A2807Ch
0x55EE0B: test    eax, eax
0x55EE0D: jnz     short loc_55EE1D
0x55EE0F: test    esi, esi
0x55EE11: jz      short loc_55EE1D
0x55EE13: mov     edx, [esi]
0x55EE15: mov     eax, [edx]
0x55EE17: push    1
0x55EE19: mov     ecx, esi
0x55EE1B: call    eax
0x55EE1D: mov     eax, [ebp+0]
0x55EE20: mov     [ebx], eax
0x55EE22: jmp     loc_55EED3
0x55EE27: cmp     [esp+24h+seed], edx
0x55EE2B: jnz     short loc_55EE31
0x55EE2D: mov     [esp+24h+seed], eax
0x55EE31: add     eax, 1
0x55EE34: cmp     eax, 1
0x55EE37: jl      loc_55EDA5
0x55EE3D: jmp     short loc_55EDE4
0x55EE3F: push    58h ; 'X'; Size
0x55EE41: call    FormHeapAlloc
0x55EE46: add     esp, 4
0x55EE49: mov     [esp+24h+modelOut], eax
0x55EE4D: test    eax, eax
0x55EE4F: mov     [esp+24h+var_4], 1
0x55EE57: jz      short loc_55EE64
0x55EE59: mov     ecx, eax; this
0x55EE5B: call    BSTreeModel_ctor; Verified current STBB layout view: BSTreeModel_OblivionLayout_058_STBBVerified refines model+0x1C to NiTriShape* billboardShape_STBB. This supersedes the earlier partial +0x1C NiStream view; the ctor initializes the shape pointer null.
0x55EE60: mov     edi, eax
0x55EE62: jmp     short loc_55EE66
0x55EE64: xor     edi, edi
0x55EE66: mov     esi, [ebx]
0x55EE68: cmp     esi, edi
0x55EE6A: mov     byte ptr [esp+24h+var_4], 0
0x55EE6F: jz      short loc_55EEA1
0x55EE71: test    esi, esi
0x55EE73: jz      short loc_55EE91
0x55EE75: lea     ecx, [esi+4]
0x55EE78: push    ecx; lpAddend
0x55EE79: call    dword ptr ds:0A2807Ch
0x55EE7F: test    eax, eax
0x55EE81: jnz     short loc_55EE91
0x55EE83: test    esi, esi
0x55EE85: jz      short loc_55EE91
0x55EE87: mov     edx, [esi]
0x55EE89: mov     eax, [edx]
0x55EE8B: push    1
0x55EE8D: mov     ecx, esi
0x55EE8F: call    eax
0x55EE91: test    edi, edi
0x55EE93: mov     [ebx], edi
0x55EE95: jz      short loc_55EEA1
0x55EE97: add     edi, 4
0x55EE9A: push    edi; lpAddend
0x55EE9B: call    dword ptr ds:0A28078h
0x55EEA1: mov     edi, [esp+24h+seed]
0x55EEA5: mov     esi, [ebp+edi*4+0]
0x55EEA9: cmp     esi, [ebx]
0x55EEAB: jz      short loc_55EEE1
0x55EEAD: test    esi, esi
0x55EEAF: jz      short loc_55EECD
0x55EEB1: lea     ecx, [esi+4]
0x55EEB4: push    ecx; lpAddend
0x55EEB5: call    dword ptr ds:0A2807Ch
0x55EEBB: test    eax, eax
0x55EEBD: jnz     short loc_55EECD
0x55EEBF: test    esi, esi
0x55EEC1: jz      short loc_55EECD
0x55EEC3: mov     edx, [esi]
0x55EEC5: mov     eax, [edx]
0x55EEC7: push    1
0x55EEC9: mov     ecx, esi
0x55EECB: call    eax
0x55EECD: mov     eax, [ebx]
0x55EECF: mov     [ebp+edi*4+0], eax
0x55EED3: test    eax, eax
0x55EED5: jz      short loc_55EEE1
0x55EED7: add     eax, 4
0x55EEDA: push    eax; lpAddend
0x55EEDB: call    dword ptr ds:0A28078h
0x55EEE1: mov     ecx, offset g_BSTreeManager_TreeCriticalSection; lpCriticalSection
0x55EEE6: call    NiLeaveCriticalSection_0
0x55EEEB: mov     eax, ebx
0x55EEED: mov     ecx, [esp+24h+var_C]
0x55EEF1: mov     large fs:0, ecx
0x55EEF8: pop     ecx
0x55EEF9: pop     edi
0x55EEFA: pop     esi
0x55EEFB: pop     ebp
0x55EEFC: pop     ebx
0x55EEFD: add     esp, 10h
0x55EF00: retn    0Ch
0x9BCC10: mov     eax, [ebp-10h]
0x9BCC13: and     eax, 1
0x9BCC16: jz      locret_9BCC28
0x9BCC1C: and     dword ptr [ebp-10h], 0FFFFFFFEh
0x9BCC20: mov     ecx, [ebp+4]; slot
0x9BCC23: jmp     NiPointerSlot_Release
0x9BCC28: retn
0x9BCC29: mov     eax, [ebp+0Ch]
0x9BCC2C: push    eax
0x9BCC2D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BCC32: pop     ecx
0x9BCC33: retn
0x9BCC34: mov     edx, [esp+seed]
0x9BCC38: lea     eax, [edx-14h]
0x9BCC3B: mov     ecx, [edx-18h]
0x9BCC3E: xor     ecx, eax
0x9BCC40: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCC45: mov     eax, offset stru_AE6780
0x9BCC4A: jmp     ___CxxFrameHandler3
