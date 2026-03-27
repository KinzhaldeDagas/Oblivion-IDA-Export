0x70EAD0: push    esi
0x70EAD1: mov     esi, ecx
0x70EAD3: call    ??1NiPixelData@@UAE@XZ; NiPixelData::~NiPixelData(void)
0x70EAD8: test    byte ptr [esp+4+arg_0], 1
0x70EADD: jz      short loc_70EAE8
0x70EADF: push    esi
0x70EAE0: call    FormHeapFree
0x70EAE5: add     esp, 4
0x70EAE8: mov     eax, esi
0x70EAEA: pop     esi
0x70EAEB: retn    4
