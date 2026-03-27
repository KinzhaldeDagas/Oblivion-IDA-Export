0x4FBF70: push    esi
0x4FBF71: mov     esi, ecx
0x4FBF73: call    ??1?$NiTPointerList@PAVScript@@@@UAE@XZ; NiTPointerList<Script *>::~NiTPointerList<Script *>(void)
0x4FBF78: test    [esp+4+arg_0], 1
0x4FBF7D: jz      short loc_4FBF88
0x4FBF7F: push    esi
0x4FBF80: call    FormHeapFree
0x4FBF85: add     esp, 4
0x4FBF88: mov     eax, esi
0x4FBF8A: pop     esi
0x4FBF8B: retn    4
