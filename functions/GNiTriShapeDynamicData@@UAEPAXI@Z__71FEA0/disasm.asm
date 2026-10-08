0x71FEA0: push    esi
0x71FEA1: mov     esi, ecx
0x71FEA3: call    NiTriShapeData_Destruct; Destroy NiTriShapeData triangle indices, linked shared-normal index-pool blocks, and the per-entry shared-normal array.
0x71FEA8: test    byte ptr [esp+4+flags], 1
0x71FEAD: jz      short loc_71FEB8
0x71FEAF: push    esi
0x71FEB0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x71FEB5: add     esp, 4
0x71FEB8: mov     eax, esi
0x71FEBA: pop     esi
0x71FEBB: retn    4
