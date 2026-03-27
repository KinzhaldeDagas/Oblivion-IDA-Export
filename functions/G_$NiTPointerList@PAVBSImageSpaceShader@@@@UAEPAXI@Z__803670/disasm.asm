0x803670: push    esi
0x803671: mov     esi, ecx
0x803673: call    ??1?$NiTPointerList@PAVBSImageSpaceShader@@@@UAE@XZ; NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(void)
0x803678: test    [esp+4+arg_0], 1
0x80367D: jz      short loc_803688
0x80367F: push    esi
0x803680: call    FormHeapFree
0x803685: add     esp, 4
0x803688: mov     eax, esi
0x80368A: pop     esi
0x80368B: retn    4
