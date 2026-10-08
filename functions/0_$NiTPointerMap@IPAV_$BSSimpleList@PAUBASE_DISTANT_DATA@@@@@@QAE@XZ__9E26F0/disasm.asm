0x9E26F0: xor     ecx, ecx; Verified static constructor: creates/initializes the 37-bucket per-cell DistantLOD model-usage map and registers its atexit destructor.
0x9E26F2: mov     eax, 25h ; '%'
0x9E26F7: mov     edx, 4
0x9E26FC: mul     edx
0x9E26FE: seto    cl
0x9E2701: neg     ecx
0x9E2703: or      ecx, eax
0x9E2705: push    ecx; Size
0x9E2706: call    FormHeapAlloc
0x9E270B: mov     ecx, g_DistantLODCellModelUsageMap.bucketCount
0x9E2711: lea     edx, ds:0[ecx*4]
0x9E2718: push    edx
0x9E2719: push    0
0x9E271B: push    eax
0x9E271C: mov     g_DistantLODCellModelUsageMap.buckets, eax
0x9E2721: call    __memset
0x9E2726: push    offset DistantLOD_CellModelUsageMap_atexit; void (__cdecl *)()
0x9E272B: mov     g_DistantLODCellModelUsageMap.vftable, offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAUBASE_DISTANT_DATA@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable' ...
0x9E2735: call    _atexit
0x9E273A: add     esp, 14h
0x9E273D: retn
