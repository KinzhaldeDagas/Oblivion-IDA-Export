0x741370: push    esi
0x741371: mov     esi, ecx
0x741373: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x741378: test    byte ptr [esp+4+arg_0], 1
0x74137D: jz      short loc_741388
0x74137F: push    esi
0x741380: call    FormHeapFree
0x741385: add     esp, 4
0x741388: mov     eax, esi
0x74138A: pop     esi
0x74138B: retn    4
