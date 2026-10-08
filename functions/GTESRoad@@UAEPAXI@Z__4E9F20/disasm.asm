0x4E9F20: push    esi
0x4E9F21: mov     esi, ecx
0x4E9F23: call    TESRoad_dtor; Verified TESRoad destructor calls TESRoad_ClearConnectedPointMap, destroys the connected-point map at +0x1C, then runs TESForm destruction. TESWorldSpace owns/releases the TESRoad pointer at WorldSpace+0x54.
0x4E9F28: test    byte ptr [esp+4+arg_0], 1
0x4E9F2D: jz      short loc_4E9F38
0x4E9F2F: push    esi
0x4E9F30: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E9F35: add     esp, 4
0x4E9F38: mov     eax, esi
0x4E9F3A: pop     esi
0x4E9F3B: retn    4
