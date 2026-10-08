0x4A31A0: push    esi
0x4A31A1: mov     esi, ecx
0x4A31A3: call    TESRegion_dtor; Verified: destroys the owned region-data list (which destroys each TESRegionData object) and each region-area payload/node before TESForm base destruction.
0x4A31A8: test    byte ptr [esp+4+arg_0], 1
0x4A31AD: jz      short loc_4A31B8
0x4A31AF: push    esi
0x4A31B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A31B5: add     esp, 4
0x4A31B8: mov     eax, esi
0x4A31BA: pop     esi
0x4A31BB: retn    4
