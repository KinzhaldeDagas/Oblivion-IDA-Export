0x55F750: push    0FFFFFFFFh; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55F752: push    offset SEH_8C62B0
0x55F757: mov     eax, large fs:0
0x55F75D: push    eax
0x55F75E: push    ecx
0x55F75F: push    esi
0x55F760: mov     eax, ds:0B30AACh
0x55F765: xor     eax, esp
0x55F767: push    eax
0x55F768: lea     eax, [esp+18h+var_C]
0x55F76C: mov     large fs:0, eax
0x55F772: mov     ecx, ds:0B39E04h; this
0x55F778: test    ecx, ecx
0x55F77A: jz      short loc_55F79D
0x55F77C: cmp     [esp+18h+recreate], 0
0x55F781: jz      short loc_55F7C7
0x55F783: mov     esi, ecx
0x55F785: call    BSTreeManager_dtor; Verified manager teardown: clears the form/seed model cache and pending reference-node map, releases default render properties and canopy resources. This is lifecycle teardown, not per-cell DistantLOD cleanup.
0x55F78A: push    esi
0x55F78B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55F790: add     esp, 4
0x55F793: mov     dword ptr ds:0B39E04h, 0
0x55F79D: push    28h ; '('; Size
0x55F79F: call    FormHeapAlloc
0x55F7A4: add     esp, 4
0x55F7A7: mov     [esp+18h+var_10], eax
0x55F7AB: test    eax, eax
0x55F7AD: mov     [esp+18h+var_4], 0
0x55F7B5: jz      short loc_55F7C0
0x55F7B7: mov     ecx, eax; this
0x55F7B9: call    BSTreeManager_ctor; Verified Oblivion manager layout is 0x28 bytes with modelCacheByTree at +0 and pendingReferenceNodes at +0x24; constructor initializes shared Ni properties and the TESObjectREFR* -> BSTreeNode* map. Fallout's manager size/field offsets differ. Confidence applies to these local offsets and constructor stores.
0x55F7BE: jmp     short loc_55F7C2
0x55F7C0: xor     eax, eax
0x55F7C2: mov     ds:0B39E04h, eax
0x55F7C7: mov     ecx, [esp+18h+var_C]
0x55F7CB: mov     large fs:0, ecx
0x55F7D2: pop     ecx
0x55F7D3: pop     esi
0x55F7D4: add     esp, 10h
0x55F7D7: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
