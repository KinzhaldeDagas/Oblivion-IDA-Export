0x4B8A20: push    esi
0x4B8A21: mov     esi, ecx
0x4B8A23: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x4B8A28: test    [esp+4+arg_0], 1
0x4B8A2D: jz      short loc_4B8A38
0x4B8A2F: push    esi
0x4B8A30: call    FormHeapFree
0x4B8A35: add     esp, 4
0x4B8A38: mov     eax, esi
0x4B8A3A: pop     esi
0x4B8A3B: retn    4
