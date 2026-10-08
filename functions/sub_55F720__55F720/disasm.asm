0x55F720: mov     ecx, ds:0B39E04h; Verified singleton Destroy: invokes BSTreeManager_dtor, frees the 0x28-byte manager and clears the global instance pointer.
0x55F726: test    ecx, ecx
0x55F728: jz      short locret_55F746
0x55F72A: push    esi
0x55F72B: mov     esi, ecx
0x55F72D: call    BSTreeManager_dtor; Verified manager teardown: clears the form/seed model cache and pending reference-node map, releases default render properties and canopy resources. This is lifecycle teardown, not per-cell DistantLOD cleanup.
0x55F732: push    esi
0x55F733: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55F738: add     esp, 4
0x55F73B: mov     dword ptr ds:0B39E04h, 0
0x55F745: pop     esi
0x55F746: retn
