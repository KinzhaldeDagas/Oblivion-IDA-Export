0x4F29F0: push    esi
0x4F29F1: mov     esi, ecx
0x4F29F3: call    ??1?$NiTPointerMap@HPAVTESObjectCELL@@@@UAE@XZ; NiTPointerMap<int,TESObjectCELL *>::~NiTPointerMap<int,TESObjectCELL *>(void)
0x4F29F8: test    [esp+4+arg_0], 1
0x4F29FD: jz      short loc_4F2A08
0x4F29FF: push    esi
0x4F2A00: call    FormHeapFree
0x4F2A05: add     esp, 4
0x4F2A08: mov     eax, esi
0x4F2A0A: pop     esi
0x4F2A0B: retn    4
