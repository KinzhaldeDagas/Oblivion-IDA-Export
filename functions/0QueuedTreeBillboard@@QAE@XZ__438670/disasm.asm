0x438670: push    0FFFFFFFFh; Verified Oblivion RTTI-backed QueuedTreeBillboard construction; Fallout has the same class RTTI and ModelLoader::QueueTreeBillboard. Layout divergence is directly established: Oblivion task allocation 0x38 with context at +0x30 and queued-texture task kind 4; Fallout allocation 0x40 with TREE_BILLBOARD_DATA pointer at +0x38 and IO_TASK_PRIORITY_LOW.
0x438672: push    offset ??0QueuedTreeBillboard@@QAE@XZ_SEH
0x438677: mov     eax, large fs:0
0x43867D: push    eax
0x43867E: push    ecx
0x43867F: push    esi
0x438680: mov     eax, ___security_cookie
0x438685: xor     eax, esp
0x438687: push    eax
0x438688: lea     eax, [esp+18h+var_C]
0x43868C: mov     large fs:0, eax
0x438692: push    38h ; '8'; Size
0x438694: call    FormHeapAlloc
0x438699: mov     esi, eax
0x43869B: add     esp, 4
0x43869E: mov     [esp+18h+var_10], esi
0x4386A2: test    esi, esi
0x4386A4: mov     [esp+18h+var_4], 0
0x4386AC: jz      short loc_4386CB
0x4386AE: mov     eax, [esp+18h+path]
0x4386B2: push    4; taskType
0x4386B4: push    eax; path
0x4386B5: mov     ecx, esi; this
0x4386B7: call    QueuedTexture_ctor; Verified base initializer for QueuedTexture: initializes IOTask fields, stores normalized path and resolves archive/file entry via HashFilePath + ArchiveManager_LazyFileLookup.
0x4386BC: mov     ecx, [esp+18h+arg_4]
0x4386C0: mov     dword ptr [esi], offset ??_7QueuedTreeBillboard@@6B@; const QueuedTreeBillboard::`vftable'
0x4386C6: mov     [esi+30h], ecx
0x4386C9: jmp     short loc_4386CD
0x4386CB: xor     esi, esi
0x4386CD: test    esi, esi
0x4386CF: mov     [esp+18h+path], esi
0x4386D3: jz      short loc_4386DF
0x4386D5: lea     edx, [esi+8]
0x4386D8: push    edx; lpAddend
0x4386D9: call    ds:InterlockedIncrement
0x4386DF: mov     eax, [esi]
0x4386E1: mov     edx, [eax+20h]
0x4386E4: mov     ecx, esi
0x4386E6: mov     [esp+18h+var_4], 1
0x4386EE: call    edx
0x4386F0: lea     eax, [esi+8]
0x4386F3: push    eax; lpAddend
0x4386F4: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4386FC: call    ds:InterlockedDecrement
0x438702: test    eax, eax
0x438704: jnz     short loc_438710
0x438706: mov     edx, [esi]
0x438708: mov     eax, [edx]
0x43870A: push    1
0x43870C: mov     ecx, esi
0x43870E: call    eax
0x438710: mov     ecx, dword ptr [esp+18h+var_C]
0x438714: mov     large fs:0, ecx
0x43871B: pop     ecx
0x43871C: pop     esi
0x43871D: add     esp, 10h
0x438720: retn    8
0x9AC6A0: mov     eax, [ebp-10h]
0x9AC6A3: push    eax
0x9AC6A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AC6A9: pop     ecx
0x9AC6AA: retn
0x9AC6AB: lea     ecx, [ebp+4]; void *
0x9AC6AE: jmp     sub_4BDDC0
0x9AC6B3: mov     edx, [esp+arg_4]
0x9AC6B7: lea     eax, [edx-8]
0x9AC6BA: mov     ecx, [edx-0Ch]
0x9AC6BD: xor     ecx, eax
0x9AC6BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC6C4: mov     eax, offset stru_AD9374
0x9AC6C9: jmp     ___CxxFrameHandler3
