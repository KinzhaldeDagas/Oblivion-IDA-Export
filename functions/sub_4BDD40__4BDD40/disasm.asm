0x4BDD40: mov     ecx, ds:0B35B8Ch; Verified singleton teardown: destroys and frees g_DistantLODLoaderTasksByCell, then clears the global pointer.
0x4BDD46: test    ecx, ecx
0x4BDD48: jz      short locret_4BDD66
0x4BDD4A: push    esi
0x4BDD4B: mov     esi, ecx
0x4BDD4D: call    DistantLODLoaderTaskMap_dtor
0x4BDD52: push    esi
0x4BDD53: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BDD58: add     esp, 4
0x4BDD5B: mov     dword ptr ds:0B35B8Ch, 0
0x4BDD65: pop     esi
0x4BDD66: retn
