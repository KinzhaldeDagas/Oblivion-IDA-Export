0x4BEC10: push    esi
0x4BEC11: mov     esi, ecx
0x4BEC13: call    TESClimate_dtor; Verified: TESClimate destructor destroys both textures, clears the weather EntryData list at +0x30, then destroys model and TESForm base.
0x4BEC18: test    byte ptr [esp+4+arg_0], 1
0x4BEC1D: jz      short loc_4BEC28
0x4BEC1F: push    esi
0x4BEC20: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BEC25: add     esp, 4
0x4BEC28: mov     eax, esi
0x4BEC2A: pop     esi
0x4BEC2B: retn    4
