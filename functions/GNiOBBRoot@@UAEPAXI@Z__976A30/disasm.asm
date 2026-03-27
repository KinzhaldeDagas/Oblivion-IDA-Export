0x976A30: push    esi
0x976A31: mov     esi, ecx
0x976A33: call    ??1NiOBBRoot@@UAE@XZ; NiOBBRoot::~NiOBBRoot(void)
0x976A38: test    byte ptr [esp+4+arg_0], 1
0x976A3D: jz      short loc_976A48
0x976A3F: push    esi
0x976A40: call    FormHeapFree
0x976A45: add     esp, 4
0x976A48: mov     eax, esi
0x976A4A: pop     esi
0x976A4B: retn    4
