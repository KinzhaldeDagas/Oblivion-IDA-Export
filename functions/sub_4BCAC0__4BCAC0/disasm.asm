0x4BCAC0: push    0FFFFFFFFh; Verified task constructor for external .lod files: initializes the same owner/payload fields, sets the supplied DistantLOD\\<EditorID>_X_Y.lod path, and marks queued-file state for opening on the worker.
0x4BCAC2: push    offset SEH_6428F0
0x4BCAC7: mov     eax, large fs:0
0x4BCACD: push    eax
0x4BCACE: push    ecx
0x4BCACF: push    esi
0x4BCAD0: mov     eax, ds:0B30AACh
0x4BCAD5: xor     eax, esp
0x4BCAD7: push    eax
0x4BCAD8: lea     eax, [esp+18h+var_C]
0x4BCADC: mov     large fs:0, eax
0x4BCAE2: mov     esi, ecx
0x4BCAE4: mov     [esp+18h+var_10], esi
0x4BCAE8: mov     eax, dword ptr [esp+18h+priority]
0x4BCAEC: push    eax
0x4BCAED: call    sub_436FA0
0x4BCAF2: mov     ecx, [esp+18h+ownerMap]
0x4BCAF6: mov     eax, [esp+18h+lodPath]
0x4BCAFA: mov     edx, [esp+18h+taskData]
0x4BCAFE: mov     [esi+28h], ecx
0x4BCB01: push    eax
0x4BCB02: mov     ecx, esi
0x4BCB04: mov     [esp+1Ch+var_4], 0
0x4BCB0C: mov     dword ptr [esi], offset ??_7DistantLODLoaderTask@@6B@; const DistantLODLoaderTask::`vftable'
0x4BCB12: mov     [esi+2Ch], edx
0x4BCB15: call    sub_434600; QueuedFileEntry path copy helper. Allocates and copies source path string into entry +0x20.
0x4BCB1A: push    0
0x4BCB1C: push    0
0x4BCB1E: mov     ecx, esi
0x4BCB20: call    sub_434CB0; QueuedFileEntry archive lookup helper. Hashes copied path at +0x20 and stores resolved archive/file entry pointer at +0x24.
0x4BCB25: mov     eax, esi
0x4BCB27: mov     ecx, [esp+18h+var_C]
0x4BCB2B: mov     large fs:0, ecx
0x4BCB32: pop     ecx
0x4BCB33: pop     esi
0x4BCB34: add     esp, 10h
0x4BCB37: retn    10h
0x9C38F0: mov     ecx, [ebp-10h]; this
0x9C38F3: jmp     ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x9C38F8: mov     edx, dword ptr [esp+priority]
0x9C38FC: lea     eax, [edx-8]
0x9C38FF: mov     ecx, [edx-0Ch]
0x9C3902: xor     ecx, eax
0x9C3904: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3909: mov     eax, offset stru_AEC470
0x9C390E: jmp     ___CxxFrameHandler3
