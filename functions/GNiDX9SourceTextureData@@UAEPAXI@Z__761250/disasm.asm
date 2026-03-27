0x761250: push    esi
0x761251: mov     esi, ecx
0x761253: call    ??1NiDX9SourceTextureData@@UAE@XZ; NiDX9SourceTextureData::~NiDX9SourceTextureData(void)
0x761258: test    byte ptr [esp+4+arg_0], 1
0x76125D: jz      short loc_761268
0x76125F: push    esi
0x761260: call    FormHeapFree
0x761265: add     esp, 4
0x761268: mov     eax, esi
0x76126A: pop     esi
0x76126B: retn    4
