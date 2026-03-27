0x7601C0: push    esi
0x7601C1: mov     esi, ecx
0x7601C3: call    ??1?$NiTArray@V?$NiPointer@VNiD3DTextureStage@@@@@@UAE@XZ; NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(void)
0x7601C8: test    [esp+4+arg_0], 1
0x7601CD: jz      short loc_7601D8
0x7601CF: push    esi
0x7601D0: call    FormHeapFree
0x7601D5: add     esp, 4
0x7601D8: mov     eax, esi
0x7601DA: pop     esi
0x7601DB: retn    4
