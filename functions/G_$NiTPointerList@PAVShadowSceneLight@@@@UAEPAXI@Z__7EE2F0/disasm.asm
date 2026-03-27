0x7EE2F0: push    esi
0x7EE2F1: mov     esi, ecx
0x7EE2F3: call    ??1?$NiTPointerList@PAVShadowSceneLight@@@@UAE@XZ; NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>(void)
0x7EE2F8: test    [esp+4+arg_0], 1
0x7EE2FD: jz      short loc_7EE308
0x7EE2FF: push    esi
0x7EE300: call    FormHeapFree
0x7EE305: add     esp, 4
0x7EE308: mov     eax, esi
0x7EE30A: pop     esi
0x7EE30B: retn    4
