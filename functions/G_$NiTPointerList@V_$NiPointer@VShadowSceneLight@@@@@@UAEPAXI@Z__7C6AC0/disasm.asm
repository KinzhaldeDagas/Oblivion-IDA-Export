0x7C6AC0: push    esi
0x7C6AC1: mov     esi, ecx
0x7C6AC3: call    ??1?$NiTPointerList@V?$NiPointer@VShadowSceneLight@@@@@@UAE@XZ; NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(void)
0x7C6AC8: test    [esp+4+arg_0], 1
0x7C6ACD: jz      short loc_7C6AD8
0x7C6ACF: push    esi
0x7C6AD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C6AD5: add     esp, 4
0x7C6AD8: mov     eax, esi
0x7C6ADA: pop     esi
0x7C6ADB: retn    4
