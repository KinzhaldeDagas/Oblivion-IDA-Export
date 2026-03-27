0x73D350: push    esi
0x73D351: mov     esi, ecx
0x73D353: call    ??1NiAmbientLight@@UAE@XZ; NiAmbientLight::~NiAmbientLight(void)
0x73D358: test    byte ptr [esp+4+arg_0], 1
0x73D35D: jz      short loc_73D368
0x73D35F: push    esi
0x73D360: call    FormHeapFree
0x73D365: add     esp, 4
0x73D368: mov     eax, esi
0x73D36A: pop     esi
0x73D36B: retn    4
