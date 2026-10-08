0xA18500: mov     eax, TESForm_ActiveFileFormList.data; MEF PERF 2026-10-08: Verified active-form array raw32 layout; loaded initializer has capacity32,grow32,used0,occupied0,data0 before init9DBF70 allocates128 bytes. Field types are not runtime population evidence. This array's fixed-growth copying is separate from dense-hole search and existing PERF4 save-ID arrays.
0xA18505: push    eax
0xA18506: mov     TESForm_ActiveFileFormList.vtable, offset ??_7?$NiTLargeArray@PAVTESForm@@@@6B@; MEF PERF 2026-10-08: Verified active-form array raw32 layout; loaded initializer has capacity32,grow32,used0,occupied0,data0 before init9DBF70 allocates128 bytes. Field types are not runtime population evidence. This array's fixed-growth copying is separate from dense-hole search and existing PERF4 save-ID arrays.
0xA18510: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA18515: pop     ecx
0xA18516: retn
