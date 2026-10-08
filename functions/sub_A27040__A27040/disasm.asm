0xA27040: mov     eax, CWindEngine__s_windMatrixContainer.matrices; CRT atexit destructor for the process-global Oblivion CWindMatrices object; clears the count, frees the transform array, and nulls the pointer.
0xA27045: push    eax
0xA27046: mov     CWindEngine__s_windMatrixContainer.matrixCount, 0
0xA2704F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA27054: add     esp, 4
0xA27057: mov     CWindEngine__s_windMatrixContainer.matrices, 0
0xA27061: retn
