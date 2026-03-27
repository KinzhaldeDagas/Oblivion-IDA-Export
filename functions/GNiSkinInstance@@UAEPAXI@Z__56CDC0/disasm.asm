0x56CDC0: push    esi
0x56CDC1: mov     esi, ecx
0x56CDC3: call    ??1NiSkinInstance@@UAE@XZ; NiSkinInstance::~NiSkinInstance(void)
0x56CDC8: test    byte ptr [esp+4+arg_0], 1
0x56CDCD: jz      short loc_56CDD8
0x56CDCF: push    esi
0x56CDD0: call    FormHeapFree
0x56CDD5: add     esp, 4
0x56CDD8: mov     eax, esi
0x56CDDA: pop     esi
0x56CDDB: retn    4
