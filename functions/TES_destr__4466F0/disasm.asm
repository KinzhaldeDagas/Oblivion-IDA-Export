0x4466F0: push    0FFFFFFFFh
0x4466F2: push    offset TES_destr_SEH
0x4466F7: mov     eax, large fs:0
0x4466FD: push    eax
0x4466FE: push    ecx
0x4466FF: push    ebx
0x446700: push    ebp
0x446701: push    esi
0x446702: push    edi
0x446703: mov     eax, ds:0B30AACh
0x446708: xor     eax, esp
0x44670A: push    eax
0x44670B: lea     eax, [esp+24h+var_C]
0x44670F: mov     large fs:0, eax
0x446715: mov     esi, ecx
0x446717: mov     [esp+24h+var_10], esi
0x44671B: mov     dword ptr [esi], offset ??_7TES@@6B@; const TES::`vftable'
0x446721: mov     [esp+24h+var_4], 2
0x446729: call    sub_4B26D0
0x44672E: mov     eax, ds:0B33A98h
0x446733: mov     byte ptr [eax+0CD4h], 1
0x44673A: call    sub_4BE910
0x44673F: call    DistantLODLoaderTaskMap_Destroy; Verified singleton teardown: destroys and frees g_DistantLODLoaderTasksByCell, then clears the global pointer.
0x446744: mov     ecx, ds:0B333C4h
0x44674A: mov     edx, [ecx]
0x44674C: mov     eax, [edx+150h]
0x446752: xor     ebx, ebx
0x446754: push    ebx
0x446755: call    eax
0x446757: mov     ecx, ds:0BA9DE4h
0x44675D: mov     edx, large fs:2Ch
0x446764: mov     eax, [edx+ecx*4]
0x446767: mov     [eax+185h], bl
0x44676D: mov     ecx, [esi+88h]
0x446773: cmp     ecx, ebx
0x446775: jz      short loc_44678B
0x446777: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x44677C: mov     eax, [esi+88h]
0x446782: push    eax
0x446783: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x446788: add     esp, 4
0x44678B: mov     ecx, (offset qword_B3BB2C+1D4h)
0x446790: mov     [esi+1Ch], ebx
0x446793: mov     [esi+18h], ebx
0x446796: mov     [esi+5Ch], ebx
0x446799: call    sub_677A00
0x44679E: mov     edi, [esi+54h]
0x4467A1: cmp     edi, ebx
0x4467A3: jz      short loc_4467B5
0x4467A5: mov     ecx, edi
0x4467A7: call    sub_49CFB0
0x4467AC: push    edi
0x4467AD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4467B2: add     esp, 4
0x4467B5: mov     edi, [esi+58h]
0x4467B8: cmp     edi, ebx
0x4467BA: jz      short loc_4467CC
0x4467BC: mov     ecx, edi
0x4467BE: call    sub_49E500
0x4467C3: push    edi
0x4467C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4467C9: add     esp, 4
0x4467CC: mov     [esi+58h], ebx
0x4467CF: cmp     [esi+7Ch], ebx
0x4467D2: jz      short loc_4467EA
0x4467D4: mov     eax, [esi+7Ch]
0x4467D7: mov     edi, [eax+4]
0x4467DA: push    eax
0x4467DB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4467E0: add     esp, 4
0x4467E3: cmp     edi, ebx
0x4467E5: mov     [esi+7Ch], edi
0x4467E8: jnz     short loc_4467D4
0x4467EA: mov     ecx, esi; this
0x4467EC: mov     [esi+78h], ebx
0x4467EF: call    sub_4425D0
0x4467F4: push    ebx
0x4467F5: call    GetShadowSceneNode
0x4467FA: add     esp, 4
0x4467FD: mov     ecx, eax
0x4467FF: call    ShadowSceneNode_TeardownLightLists; TES destruction tears down the native full and active shadow-light lists.
0x446804: mov     ecx, ds:0B33398h
0x44680A: mov     ecx, [ecx+24h]
0x44680D: cmp     ecx, ebx
0x44680F: jz      short loc_446816
0x446811: call    sub_6AC210
0x446816: push    ebx
0x446817: push    ebx
0x446818: mov     ecx, esi
0x44681A: call    sub_43FFF0
0x44681F: mov     edi, [esi+34h]
0x446822: cmp     edi, ebx
0x446824: jz      short loc_44683E
0x446826: push    edi; a2
0x446827: mov     ecx, esi; this
0x446829: call    TES__IsInteriorCellPreloaded
0x44682E: test    al, al
0x446830: jnz     short loc_44683E
0x446832: mov     ecx, ds:0B33A98h
0x446838: push    edi; a1
0x446839: call    TESObjectCELL_Deactivate; Verified TESObjectCELL deactivation path. Removes cell temp effects, lowers its process level, invokes cell teardown, clears pathgrid graph/render resources, removes the scene node and inactive cell forms, then for exteriors asks TESWorldSpace_UnloadExteriorCellIfEligible to either preserve or remove the cell. Nine call sites are in world/cell transition and TES destruction paths; inspect xrefs for the full lifecycle context.
0x44683E: push    ebx
0x44683F: mov     ecx, esi
0x446841: call    sub_43FE30
0x446846: mov     ecx, esi
0x446848: mov     [esi+34h], ebx
0x44684B: mov     byte ptr [esi+0A8h], 1
0x446852: call    sub_4418A0
0x446857: mov     ecx, esi
0x446859: call    sub_440F20
0x44685E: call    sub_54FE20
0x446863: push    ebx; unusedModelsOnly
0x446864: call    BSTreeManager_ClearModelCache; Verified cache maintenance: with unusedModelsOnly=true removes tree-form/seed model entries whose model is null or only map-owned; false releases and clears every model cache entry. Called during TES destruction and BSTreeManager destruction.
0x446869: add     esp, 4
0x44686C: mov     ecx, esi
0x44686E: call    sub_4464F0
0x446873: mov     ecx, esi
0x446875: call    sub_443C70
0x44687A: mov     ecx, ds:0B33A98h; self
0x446880: call    TESDataHandler_Clear; Verified reader of activeFileState.retainActiveFile (+0xCD1): when zero, cleanup destroys and clears the stored active TESFile; when set, that file is retained. The only direct writer located so far is constructor initialization to zero; runtime setter remains Unknown.
0x446885: mov     edx, ds:0B33A98h
0x44688B: mov     byte ptr [edx+0CD4h], 1
0x446892: mov     ecx, ds:0B33A1Ch; this
0x446898: cmp     ecx, ebx
0x44689A: mov     edi, ecx
0x44689C: jz      short loc_4468AC
0x44689E: call    ModelLoader_destr
0x4468A3: push    edi
0x4468A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4468A9: add     esp, 4
0x4468AC: mov     ecx, ds:0B33A10h
0x4468B2: cmp     ecx, ebx
0x4468B4: mov     ds:0B33A1Ch, ebx
0x4468BA: jz      short loc_4468C5
0x4468BC: mov     eax, [ecx]
0x4468BE: mov     edx, [eax+50h]
0x4468C1: push    1
0x4468C3: call    edx
0x4468C5: mov     ds:0B33A10h, ebx
0x4468CB: mov     ecx, [esi+8]
0x4468CE: cmp     ecx, ebx
0x4468D0: jz      short loc_4468DA
0x4468D2: mov     eax, [ecx]
0x4468D4: mov     edx, [eax]
0x4468D6: push    1
0x4468D8: call    edx
0x4468DA: mov     ecx, [esi+4]
0x4468DD: cmp     ecx, ebx
0x4468DF: jz      short loc_4468E9
0x4468E1: mov     eax, [ecx]
0x4468E3: mov     edx, [eax]
0x4468E5: push    1
0x4468E7: call    edx
0x4468E9: mov     ecx, ds:0B33B00h; self
0x4468EF: cmp     ecx, ebx
0x4468F1: mov     edi, ecx
0x4468F3: jz      short loc_446903
0x4468F5: call    TESSaveLoadGame_DestroyOwnedState; Verified: TES_destr calls at 4468F5 then frees the manager allocation at 4468FB. Destroys ChangesMap and all reference-map objects through scalar-deleting vtables, frees the remap table and buffer, resets/frees both ID arrays, and releases deferred form/list state. Constructor-to-manager-destructor lifecycle established. Fallout has analogous named map clear/destructor paths, but no layout was copied.
0x4468FA: push    edi
0x4468FB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x446900: add     esp, 4
0x446903: mov     ecx, ds:0B33A98h; self
0x446909: cmp     ecx, ebx
0x44690B: mov     ds:0B33B00h, ebx
0x446911: mov     edi, ecx
0x446913: jz      short loc_446923
0x446915: call    TESDataHandler_destr
0x44691A: push    edi
0x44691B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x446920: add     esp, 4
0x446923: mov     ds:0B33A98h, ebx
0x446929: mov     eax, [esi+38h]
0x44692C: push    eax
0x44692D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x446932: mov     eax, [esi+3Ch]
0x446935: push    eax
0x446936: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x44693B: add     esp, 8
0x44693E: cmp     [esi+7Ch], ebx
0x446941: jz      short loc_446959
0x446943: mov     eax, [esi+7Ch]
0x446946: mov     edi, [eax+4]
0x446949: push    eax
0x44694A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x44694F: add     esp, 4
0x446952: cmp     edi, ebx
0x446954: mov     [esi+7Ch], edi
0x446957: jnz     short loc_446943
0x446959: mov     [esi+78h], ebx
0x44695C: call    sub_49B6C0
0x446961: call    sub_533CD0
0x446966: call    TESObjectTREE_ClearTextureHashCache; Verified: clears and frees all TESTextureList values in the global form-ID cache, then clears the map. Called by TES destruction/teardown; exact lifecycle boundary is process-level object teardown.
0x44696B: call    sub_4A08E0
0x446970: mov     edi, [esi+9Ch]
0x446976: cmp     edi, ebx
0x446978: mov     ebp, ds:0A2807Ch
0x44697E: mov     byte ptr [esp+24h+var_4], 1
0x446983: jz      short loc_44699D
0x446985: lea     eax, [edi+4]
0x446988: push    eax; lpAddend
0x446989: call    ebp ; InterlockedDecrement
0x44698B: test    eax, eax
0x44698D: jnz     short loc_44699D
0x44698F: cmp     edi, ebx
0x446991: jz      short loc_44699D
0x446993: mov     edx, [edi]
0x446995: mov     eax, [edx]
0x446997: push    1
0x446999: mov     ecx, edi
0x44699B: call    eax
0x44699D: mov     edi, [esi+98h]
0x4469A3: cmp     edi, ebx
0x4469A5: mov     byte ptr [esp+24h+var_4], bl
0x4469A9: jz      short loc_4469C3
0x4469AB: lea     ecx, [edi+4]
0x4469AE: push    ecx; lpAddend
0x4469AF: call    ebp ; InterlockedDecrement
0x4469B1: test    eax, eax
0x4469B3: jnz     short loc_4469C3
0x4469B5: cmp     edi, ebx
0x4469B7: jz      short loc_4469C3
0x4469B9: mov     edx, [edi]
0x4469BB: mov     eax, [edx]
0x4469BD: push    1
0x4469BF: mov     ecx, edi
0x4469C1: call    eax
0x4469C3: mov     esi, [esi+94h]
0x4469C9: cmp     esi, ebx
0x4469CB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4469D3: jz      short loc_4469ED
0x4469D5: lea     ecx, [esi+4]
0x4469D8: push    ecx; lpAddend
0x4469D9: call    ebp ; InterlockedDecrement
0x4469DB: test    eax, eax
0x4469DD: jnz     short loc_4469ED
0x4469DF: cmp     esi, ebx
0x4469E1: jz      short loc_4469ED
0x4469E3: mov     edx, [esi]
0x4469E5: mov     eax, [edx]
0x4469E7: push    1
0x4469E9: mov     ecx, esi
0x4469EB: call    eax
0x4469ED: mov     ecx, dword ptr [esp+24h+var_C]
0x4469F1: mov     large fs:0, ecx
0x4469F8: pop     ecx
0x4469F9: pop     edi
0x4469FA: pop     esi
0x4469FB: pop     ebp
0x4469FC: pop     ebx
0x4469FD: add     esp, 10h
0x446A00: retn
0x9AD220: mov     ecx, [ebp-10h]
0x9AD223: add     ecx, 94h ; '”'; slot
0x9AD229: jmp     NiPointerSlot_Release
0x9AD22E: mov     ecx, [ebp-10h]
0x9AD231: add     ecx, 98h ; '˜'; slot
0x9AD237: jmp     NiPointerSlot_Release
0x9AD23C: mov     ecx, [ebp-10h]
0x9AD23F: add     ecx, 9Ch ; 'œ'; slot
0x9AD245: jmp     NiPointerSlot_Release
0x9AD24A: mov     edx, [esp+arg_4]
0x9AD24E: lea     eax, [edx-14h]
0x9AD251: mov     ecx, [edx-18h]
0x9AD254: xor     ecx, eax
0x9AD256: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD25B: mov     eax, offset stru_AD9E04
0x9AD260: jmp     ___CxxFrameHandler3
