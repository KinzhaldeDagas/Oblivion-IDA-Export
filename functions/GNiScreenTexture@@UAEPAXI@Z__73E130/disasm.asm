0x73E130: push    esi
0x73E131: mov     esi, ecx
0x73E133: call    ??1NiScreenTexture@@UAE@XZ; NiScreenTexture::~NiScreenTexture(void)
0x73E138: test    byte ptr [esp+4+arg_0], 1
0x73E13D: jz      short loc_73E148
0x73E13F: push    esi
0x73E140: call    FormHeapFree
0x73E145: add     esp, 4
0x73E148: mov     eax, esi
0x73E14A: pop     esi
0x73E14B: retn    4
