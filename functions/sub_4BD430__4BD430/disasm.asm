0x4BD430: push    0FFFFFFFFh; Verified DistantLOD cell task producer: allocates a 0x2C DistantLODLoaderTaskData payload and stores cell/worldspace/mode plus instancedLODNode (+0x1C) and cellLODBuffer (+0x20). DistantLOD_UpdateExteriorGrid supplies the global scene node and a per-cell Ni2DBuffer. The generic bound-object callback retains the buffer in queued records; the tree override uses the node and ignores the buffer.
0x4BD432: push    offset SEH_4BD430
0x4BD437: mov     eax, large fs:0
0x4BD43D: push    eax
0x4BD43E: sub     esp, 118h
0x4BD444: mov     eax, ds:0B30AACh
0x4BD449: xor     eax, esp
0x4BD44B: mov     [esp+124h+var_10], eax
0x4BD452: push    ebx
0x4BD453: push    ebp
0x4BD454: push    esi
0x4BD455: push    edi
0x4BD456: mov     eax, ds:0B30AACh
0x4BD45B: xor     eax, esp
0x4BD45D: push    eax
0x4BD45E: lea     eax, [esp+138h+var_C]
0x4BD465: mov     large fs:0, eax
0x4BD46B: mov     edi, [esp+138h+worldspace]
0x4BD472: mov     eax, [esp+138h+instancedLODNode]
0x4BD479: mov     edx, [esp+138h+cellLODBuffer]
0x4BD480: xor     esi, esi
0x4BD482: cmp     edi, esi
0x4BD484: mov     [esp+138h+ownerMap], ecx
0x4BD488: mov     [esp+138h+var_120], eax
0x4BD48C: mov     [esp+138h+a2], edx
0x4BD490: jz      loc_4BD6B0
0x4BD496: mov     ebp, [esp+138h+group_y]
0x4BD49D: mov     ebx, [esp+138h+group_x]
0x4BD4A4: push    ebp; groupY
0x4BD4A5: push    ebx; groupX
0x4BD4A6: call    DistantLODLoaderTaskMap_HasCellTask; Verified duplicate-cell check: packs exterior coordinates and performs GetAt through map vtable +0x04. Releases the temporary task smart pointer and returns whether that cell already has a DistantLODLoaderTask.
0x4BD4AB: test    al, al
0x4BD4AD: jnz     loc_4BD6B0
0x4BD4B3: mov     ecx, edi; this
0x4BD4B5: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x4BD4BA: test    eax, eax
0x4BD4BC: jz      short loc_4BD4C7
0x4BD4BE: mov     ecx, edi; this
0x4BD4C0: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x4BD4C5: mov     edi, eax
0x4BD4C7: cmp     [esp+138h+lodMode], 2
0x4BD4CF: jnz     short loc_4BD4E2
0x4BD4D1: push    ebp; cellY
0x4BD4D2: push    ebx; cellX
0x4BD4D3: mov     ecx, edi; this
0x4BD4D5: call    TESWorldSpace_PassesCellLODFilter; Verified DistantLOD loader task filter: for task mode a8==2, it skips scheduling unless TESWorldSpace_PassesCellLODFilter allows this cell. Other modes bypass that cell-map check.
0x4BD4DA: test    al, al
0x4BD4DC: jz      loc_4BD6B0
0x4BD4E2: push    2Ch ; ','; Size
0x4BD4E4: call    FormHeapAlloc
0x4BD4E9: add     esp, 4
0x4BD4EC: mov     [esp+138h+var_11C], eax
0x4BD4F0: cmp     eax, esi
0x4BD4F2: mov     [esp+138h+var_4], esi
0x4BD4F9: jz      short loc_4BD504
0x4BD4FB: mov     ecx, eax
0x4BD4FD: call    ??0?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@QAE@XZ; NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(void)
0x4BD502: mov     esi, eax
0x4BD504: mov     eax, [esp+138h+a2]
0x4BD508: push    eax; a2
0x4BD509: lea     ecx, [esi+20h]; this
0x4BD50C: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x4BD517: mov     [esi+8], edi; Verified: stores TESWorldSpace and exterior group coordinates in the loader payload; at the corresponding queue call, the pointer in +0x1C originates from global 0xB34424, the scene node later passed as TESObjectTREE_UpdateDistantBillboard.instancedNode.
0x4BD51A: mov     [esi], ebx
0x4BD51C: mov     [esi+4], ebp
0x4BD51F: call    NiSmartPointer_Set??; Verified: stores the per-cell Ni2DBuffer at DistantLODLoaderTaskData.cellLODBuffer (+0x20); the base TESBoundObject update callback requires this pointer and retains it in each queued record.
0x4BD524: mov     ecx, [esp+138h+var_120]
0x4BD528: push    ecx; a2
0x4BD529: lea     ecx, [esi+1Ch]; this
0x4BD52C: call    NiSmartPointer_Set??; Verified: stores the distant instance scene node at DistantLODLoaderTaskData.instancedLODNode (+0x1C). DistantLOD_UpdateExteriorGrid supplies the global node at 0xB34424; the TESObjectTREE override requires this node to add distant billboard instances.
0x4BD531: mov     edx, [esp+138h+lodMode]
0x4BD538: push    ebp; group_y
0x4BD539: push    ebx; group_x
0x4BD53A: mov     byte ptr [esi+28h], 0
0x4BD53E: mov     [esi+24h], edx; Verified stores the DistantLODLoadMode passed by DistantLOD_UpdateExteriorGrid into task-data +0x24; the worker forwards it to the external parser or worldspace override-record loader.
0x4BD541: call    TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4BD546: xor     edi, edi
0x4BD548: add     esp, 8
0x4BD54B: mov     [esp+138h+var_120], eax
0x4BD54F: mov     [esp+138h+a2], edi
0x4BD553: cmp     byte ptr ds:0B09DB0h, 0
0x4BD55A: mov     [esp+138h+var_4], 1
0x4BD565: jz      loc_4BD5F0
0x4BD56B: mov     ecx, [esi+8]
0x4BD56E: mov     eax, [ecx]
0x4BD570: mov     edx, [eax+0D4h]
0x4BD576: push    ebp
0x4BD577: push    ebx
0x4BD578: call    edx
0x4BD57A: push    eax
0x4BD57B: lea     eax, [esp+144h+lodPath]
0x4BD57F: push    offset aDistantlodS_I_; "DistantLOD\\%s_%i_%i.lod"
0x4BD584: push    eax
0x4BD585: call    __sprintf
0x4BD58A: mov     ecx, ds:0B33A04h
0x4BD590: add     esp, 14h
0x4BD593: test    ecx, ecx
0x4BD595: jz      loc_4BD679
0x4BD59B: mov     edx, [ecx]
0x4BD59D: mov     edx, [edx+4]
0x4BD5A0: push    1
0x4BD5A2: push    edi
0x4BD5A3: push    edi
0x4BD5A4: lea     eax, [esp+144h+lodPath]
0x4BD5A8: push    eax
0x4BD5A9: call    edx
0x4BD5AB: test    eax, eax
0x4BD5AD: jz      loc_4BD679
0x4BD5B3: push    30h ; '0'; Size
0x4BD5B5: call    FormHeapAlloc; Verified queue branch for external records: formats DistantLOD\\<EditorID>_X_Y.lod, checks that the file exists, and constructs a path-backed DistantLODLoaderTask.
0x4BD5BA: add     esp, 4
0x4BD5BD: mov     [esp+138h+var_11C], eax
0x4BD5C1: test    eax, eax
0x4BD5C3: mov     byte ptr [esp+138h+var_4], 2
0x4BD5CB: jz      short loc_4BD628
0x4BD5CD: mov     ecx, [esp+138h+ownerMap]
0x4BD5D1: mov     edx, [esp+138h+priorityIndex]
0x4BD5D8: push    esi; taskData
0x4BD5D9: push    ecx; ownerMap
0x4BD5DA: mov     ecx, ds:0A45A58h[edx*4]
0x4BD5E1: push    ecx; priority
0x4BD5E2: lea     edx, [esp+144h+lodPath]
0x4BD5E6: push    edx; lodPath
0x4BD5E7: mov     ecx, eax; this
0x4BD5E9: call    DistantLODLoaderTask_ctorExternalLodFile; Verified task constructor for external .lod files: initializes the same owner/payload fields, sets the supplied DistantLOD\\<EditorID>_X_Y.lod path, and marks queued-file state for opening on the worker.
0x4BD5EE: jmp     short loc_4BD62A
0x4BD5F0: push    30h ; '0'; Size
0x4BD5F2: call    FormHeapAlloc; Verified queue branch for embedded records: used when externalLodFiles is false; creates DistantLODLoaderTask with no external file path, then LoadCellData searches the WorldSpace override chain.
0x4BD5F7: add     esp, 4
0x4BD5FA: mov     [esp+138h+var_11C], eax
0x4BD5FE: test    eax, eax
0x4BD600: mov     byte ptr [esp+138h+var_4], 3
0x4BD608: jz      short loc_4BD628
0x4BD60A: mov     ecx, [esp+138h+ownerMap]
0x4BD60E: mov     edx, [esp+138h+priorityIndex]
0x4BD615: push    esi; taskData
0x4BD616: push    ecx; ownerMap
0x4BD617: mov     ecx, ds:0A45A58h[edx*4]
0x4BD61E: push    ecx; priority
0x4BD61F: mov     ecx, eax; this
0x4BD621: call    DistantLODLoaderTask_ctorEmbeddedRecordSource; Verified task constructor for the embedded-record source path: initializes IOTask, sets DistantLODLoaderTask vtable, stores owner map and DistantLODLoaderTaskData, and carries no external .lod path.
0x4BD626: jmp     short loc_4BD62A
0x4BD628: xor     eax, eax
0x4BD62A: push    eax
0x4BD62B: lea     ecx, [esp+13Ch+a2]
0x4BD62F: mov     byte ptr [esp+13Ch+var_4], 1
0x4BD637: call    sub_4BCB70
0x4BD63C: mov     edi, [esp+138h+a2]
0x4BD640: test    edi, edi
0x4BD642: jz      short loc_4BD679
0x4BD644: push    0
0x4BD646: push    ecx
0x4BD647: mov     eax, esp
0x4BD649: lea     edx, [edi+8]
0x4BD64C: mov     [esp+140h+var_11C], esp
0x4BD650: push    edx; lpAddend
0x4BD651: mov     [eax], edi
0x4BD653: call    dword ptr ds:0A28078h
0x4BD659: mov     ecx, [esp+140h+ownerMap]
0x4BD65D: mov     eax, [ecx]
0x4BD65F: mov     edx, [esp+140h+var_120]
0x4BD663: mov     eax, [eax+0Ch]
0x4BD666: push    edx
0x4BD667: call    eax; Verified task registration: inserts the task into g_DistantLODLoaderTasksByCell under its packed exterior-cell label through map vtable +0x0C, then submits the task to IOManager.
0x4BD669: mov     ecx, ds:0B33A10h
0x4BD66F: mov     edx, [ecx]
0x4BD671: mov     eax, [edx+3Ch]
0x4BD674: push    edi
0x4BD675: call    eax; Verified: after cell-key registration, submits the DistantLODLoaderTask to IOManager's task queue.
0x4BD677: jmp     short loc_4BD689
0x4BD679: mov     ecx, esi; this
0x4BD67B: call    DistantLODLoaderTaskData_Destroy; Verified DistantLODLoaderTaskData destructor: frees every TESBoundObject-keyed cell payload/map, releases instancedLODNode (+0x1C) and cellLODBuffer (+0x20), then destroys the embedded map.
0x4BD680: push    esi
0x4BD681: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BD686: add     esp, 4
0x4BD689: test    edi, edi
0x4BD68B: mov     [esp+138h+var_4], 0FFFFFFFFh
0x4BD696: jz      short loc_4BD6B0
0x4BD698: lea     ecx, [edi+8]
0x4BD69B: push    ecx; lpAddend
0x4BD69C: call    dword ptr ds:0A2807Ch
0x4BD6A2: test    eax, eax
0x4BD6A4: jnz     short loc_4BD6B0
0x4BD6A6: mov     edx, [edi]
0x4BD6A8: mov     eax, [edx]
0x4BD6AA: push    1
0x4BD6AC: mov     ecx, edi
0x4BD6AE: call    eax
0x4BD6B0: mov     ecx, dword ptr [esp+138h+var_C]
0x4BD6B7: mov     large fs:0, ecx
0x4BD6BE: pop     ecx
0x4BD6BF: pop     edi
0x4BD6C0: pop     esi
0x4BD6C1: pop     ebp
0x4BD6C2: pop     ebx
0x4BD6C3: mov     ecx, [esp+124h+var_10]
0x4BD6CA: xor     ecx, esp
0x4BD6CC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BD6D1: add     esp, 124h
0x4BD6D7: retn    1Ch
0x9B4350: mov     eax, [ebp-11Ch]
0x9B4356: push    eax
0x9B4357: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B435C: pop     ecx
0x9B435D: retn
0x9B435E: lea     ecx, [ebp-124h]; void *
0x9B4364: jmp     sub_4BDDC0
0x9B4369: mov     eax, [ebp-11Ch]
0x9B436F: push    eax
0x9B4370: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B4375: pop     ecx
0x9B4376: retn
0x9B4377: mov     eax, [ebp-11Ch]
0x9B437D: push    eax
0x9B437E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B4383: pop     ecx
0x9B4384: retn
0x9B4385: mov     edx, [esp+group_x]
0x9B4389: lea     eax, [edx-128h]
0x9B438F: mov     ecx, [edx-12Ch]
0x9B4395: xor     ecx, eax
0x9B4397: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B439C: add     eax, 10h
0x9B439F: mov     ecx, [edx-4]
0x9B43A2: xor     ecx, eax
0x9B43A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B43A9: mov     eax, offset stru_ADFA78
0x9B43AE: jmp     ___CxxFrameHandler3
