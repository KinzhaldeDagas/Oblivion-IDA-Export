0x414090: mov     eax, [ebx+8]
0x414093: fstp    st
0x414095: push    eax
0x414096: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x41409B: push    ebx
0x41409C: mov     [ebx+8], ebp
0x41409F: mov     [ebx+0Eh], bp
0x4140A3: mov     [ebx+0Ch], bp
0x4140A7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4140AC: fld     ds:kTerrainLODQuadRayDirectionZ
0x4140B2: add     esp, 8
0x4140B5: mov     [esi+18h], ebp
