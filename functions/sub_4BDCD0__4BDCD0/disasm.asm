0x4BDCD0: push    0FFFFFFFFh; Verified lazy singleton initializer: allocates 0x1C bytes for the lock-free cell-task map and constructs it with two interfaces, 37 buckets, and 0x0C-byte entries; stores the pointer in g_DistantLODLoaderTasksByCell.
0x4BDCD2: push    offset SEH_8C62B0
0x4BDCD7: mov     eax, large fs:0
0x4BDCDD: push    eax
0x4BDCDE: push    ecx
0x4BDCDF: push    esi
0x4BDCE0: mov     eax, ds:0B30AACh
0x4BDCE5: xor     eax, esp
0x4BDCE7: push    eax
0x4BDCE8: lea     eax, [esp+18h+var_C]
0x4BDCEC: mov     large fs:0, eax
0x4BDCF2: cmp     dword ptr ds:0B35B8Ch, 0
0x4BDCF9: jnz     short loc_4BDD2E
0x4BDCFB: push    1Ch; Size
0x4BDCFD: call    FormHeapAlloc
0x4BDD02: mov     esi, eax
0x4BDD04: add     esp, 4
0x4BDD07: mov     [esp+18h+var_10], esi
0x4BDD0B: test    esi, esi
0x4BDD0D: mov     [esp+18h+var_4], 0
0x4BDD15: jz      short loc_4BDD26
0x4BDD17: push    0Ch; itemSize
0x4BDD19: push    25h ; '%'; bucketCount
0x4BDD1B: push    2; interfaceCount
0x4BDD1D: mov     ecx, esi; this
0x4BDD1F: call    DistantLODLoaderTaskMap_ctor; Verified specialized map constructor from its vtable assignment: LockFreeMap<unsigned int, NiPointer<DistantLODLoaderTask>>. DistantLODLoaderTaskMap_EnsureCreated invokes it with interfaceCount 2, 37 buckets, and entry size 0x0C.
0x4BDD24: jmp     short loc_4BDD28
0x4BDD26: xor     esi, esi
0x4BDD28: mov     ds:0B35B8Ch, esi
0x4BDD2E: mov     ecx, [esp+18h+var_C]
0x4BDD32: mov     large fs:0, ecx
0x4BDD39: pop     ecx
0x4BDD3A: pop     esi
0x4BDD3B: add     esp, 10h
0x4BDD3E: retn
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
