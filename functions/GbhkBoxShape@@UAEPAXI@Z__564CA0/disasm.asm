0x564CA0: push    esi
0x564CA1: mov     esi, ecx
0x564CA3: call    ??1bhkBoxShape@@UAE@XZ; bhkBoxShape::~bhkBoxShape(void)
0x564CA8: test    byte ptr [esp+4+arg_0], 1
0x564CAD: jz      short loc_564CB8
0x564CAF: push    esi
0x564CB0: call    FormHeapFree
0x564CB5: add     esp, 4
0x564CB8: mov     eax, esi
0x564CBA: pop     esi
0x564CBB: retn    4
