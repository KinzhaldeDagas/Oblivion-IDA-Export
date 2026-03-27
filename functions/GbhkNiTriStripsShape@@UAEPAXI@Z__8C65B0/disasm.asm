0x8C65B0: push    esi
0x8C65B1: mov     esi, ecx
0x8C65B3: call    ??1bhkNiTriStripsShape@@UAE@XZ; bhkNiTriStripsShape::~bhkNiTriStripsShape(void)
0x8C65B8: test    byte ptr [esp+4+arg_0], 1
0x8C65BD: jz      short loc_8C65C8
0x8C65BF: push    esi
0x8C65C0: call    FormHeapFree
0x8C65C5: add     esp, 4
0x8C65C8: mov     eax, esi
0x8C65CA: pop     esi
0x8C65CB: retn    4
