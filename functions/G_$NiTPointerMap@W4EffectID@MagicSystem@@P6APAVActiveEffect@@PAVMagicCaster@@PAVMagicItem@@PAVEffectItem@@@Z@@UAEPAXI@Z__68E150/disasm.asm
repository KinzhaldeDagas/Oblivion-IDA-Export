0x68E150: push    esi
0x68E151: mov     esi, ecx
0x68E153: call    ActiveEffectCreatorMap_Destroy; Verified ActiveEffectCreatorMap destructor: clears entries, restores the NiTMapBase vtable, clears the base map, and frees the bucket array. The global object itself is static storage.
0x68E158: test    [esp+4+arg_0], 1
0x68E15D: jz      short loc_68E168
0x68E15F: push    esi
0x68E160: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68E165: add     esp, 4
0x68E168: mov     eax, esi
0x68E16A: pop     esi
0x68E16B: retn    4
