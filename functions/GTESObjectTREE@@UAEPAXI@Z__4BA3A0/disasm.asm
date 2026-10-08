0x4BA3A0: push    esi
0x4BA3A1: mov     esi, ecx
0x4BA3A3: call    TESObjectTREE_dtor; Verified destructor releases the seed table's backing buffer from TESObjectTREE+0x4C after restoring the NiTArray<unsigned int> vtable at +0x48, then destroys TESIconTree, TESModelTree, and TESObject bases.
0x4BA3A8: test    byte ptr [esp+4+arg_0], 1
0x4BA3AD: jz      short loc_4BA3B8
0x4BA3AF: push    esi
0x4BA3B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BA3B5: add     esp, 4
0x4BA3B8: mov     eax, esi
0x4BA3BA: pop     esi
0x4BA3BB: retn    4
