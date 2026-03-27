0x722720: push    esi
0x722721: mov     esi, ecx
0x722723: mov     dword ptr [esi], offset ??_7NiTriBasedGeom@@6B@; const NiTriBasedGeom::`vftable'
0x722729: call    ??1NiParticles@@UAE@XZ; NiParticles::~NiParticles(void)
0x72272E: test    byte ptr [esp+4+arg_0], 1
0x722733: jz      short loc_72273E
0x722735: push    esi
0x722736: call    FormHeapFree
0x72273B: add     esp, 4
0x72273E: mov     eax, esi
0x722740: pop     esi
0x722741: retn    4
