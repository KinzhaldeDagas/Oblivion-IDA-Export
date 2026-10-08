0x4A24D0: push    esi
0x4A24D1: mov     esi, ecx
0x4A24D3: call    ??1?$NiTStringPointerMap@V?$NiPointer@VNiTexture@@@@@@UAE@XZ; NiTStringPointerMap<NiPointer<NiTexture>>::~NiTStringPointerMap<NiPointer<NiTexture>>(void)
0x4A24D8: test    [esp+4+arg_0], 1
0x4A24DD: jz      short loc_4A24E8
0x4A24DF: push    esi
0x4A24E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A24E5: add     esp, 4
0x4A24E8: mov     eax, esi
0x4A24EA: pop     esi
0x4A24EB: retn    4
