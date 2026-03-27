0x532070: push    esi
0x532071: mov     esi, ecx
0x532073: call    ??1bhkSimpleShapePhantom@@UAE@XZ; bhkSimpleShapePhantom::~bhkSimpleShapePhantom(void)
0x532078: test    byte ptr [esp+4+arg_0], 1
0x53207D: jz      short loc_532088
0x53207F: push    esi
0x532080: call    FormHeapFree
0x532085: add     esp, 4
0x532088: mov     eax, esi
0x53208A: pop     esi
0x53208B: retn    4
