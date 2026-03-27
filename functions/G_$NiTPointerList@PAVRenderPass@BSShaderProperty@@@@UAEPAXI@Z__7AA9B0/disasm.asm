0x7AA9B0: push    esi
0x7AA9B1: mov     esi, ecx
0x7AA9B3: call    ??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x7AA9B8: test    [esp+4+arg_0], 1
0x7AA9BD: jz      short loc_7AA9C8
0x7AA9BF: push    esi
0x7AA9C0: call    FormHeapFree
0x7AA9C5: add     esp, 4
0x7AA9C8: mov     eax, esi
0x7AA9CA: pop     esi
0x7AA9CB: retn    4
