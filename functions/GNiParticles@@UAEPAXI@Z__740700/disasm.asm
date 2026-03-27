0x740700: push    esi
0x740701: mov     esi, ecx
0x740703: call    ??1NiParticles@@UAE@XZ; NiParticles::~NiParticles(void)
0x740708: test    byte ptr [esp+4+arg_0], 1
0x74070D: jz      short loc_740718
0x74070F: push    esi
0x740710: call    FormHeapFree
0x740715: add     esp, 4
0x740718: mov     eax, esi
0x74071A: pop     esi
0x74071B: retn    4
