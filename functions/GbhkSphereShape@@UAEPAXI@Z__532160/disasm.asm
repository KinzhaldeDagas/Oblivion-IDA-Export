0x532160: push    esi
0x532161: mov     esi, ecx
0x532163: call    ??1bhkSphereShape@@UAE@XZ; bhkSphereShape::~bhkSphereShape(void)
0x532168: test    byte ptr [esp+4+arg_0], 1
0x53216D: jz      short loc_532178
0x53216F: push    esi
0x532170: call    FormHeapFree
0x532175: add     esp, 4
0x532178: mov     eax, esi
0x53217A: pop     esi
0x53217B: retn    4
