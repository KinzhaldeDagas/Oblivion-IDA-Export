0x45ABE0: push    esi; MEF PERF 2026-10-02 PASS2: Verified: NumericIDBufferMap constructs bucketCount+4=37, buckets+8=148-byte zeroed allocation, entryCount+C=0, final vtable A3A350. Four owner fields54/58/5C/60 receive these objects in45B300. No assertion that external code never resizes later. Fallout82601D20 agrees on constructor shape after Oblivion observation; platform allocator differs.
0x45ABE1: mov     esi, ecx
0x45ABE3: xor     ecx, ecx
0x45ABE5: mov     eax, 25h ; '%'
0x45ABEA: mov     [esi+4], eax; MEF PERF 2026-09-08: Qualified candidate, not promoted to a verified performance defect this pass: NumericIDBufferMap starts with37 buckets and94h-byte bucket storage; vtable hash is unsigned key modulo current bucketCount. Runtime populations and every possible resizing/mutation route were not profiled/sealed.
0x45ABED: mov     edx, 4
0x45ABF2: mul     edx
0x45ABF4: seto    cl
0x45ABF7: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAX@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,void *>::`vftable'
0x45ABFD: mov     dword ptr [esi+0Ch], 0
0x45AC04: neg     ecx
0x45AC06: or      ecx, eax
0x45AC08: push    ecx; Size
0x45AC09: call    FormHeapAlloc
0x45AC0E: mov     ecx, [esi+4]
0x45AC11: add     ecx, ecx
0x45AC13: add     ecx, ecx
0x45AC15: push    ecx
0x45AC16: push    0
0x45AC18: push    eax
0x45AC19: mov     [esi+8], eax
0x45AC1C: call    __memset
0x45AC21: add     esp, 10h
0x45AC24: mov     dword ptr [esi], offset ??_7NumericIDBufferMap@@6B@; MEF PERF 2026-10-02 PASS2: Verified dispatch for save blob maps: +4=6A9060 unsigned key%bucketCount; +8=763E80 exact key equality; +C=67F130 writes node key+4/value+8; +10=68F970 no-op cleanup; +14=4F0F60 pooled node allocation. This resolves generic SetAt virtual behavior, not a blanket type assignment to all NiTMaps.
0x45AC2A: mov     eax, esi
0x45AC2C: pop     esi
0x45AC2D: retn
