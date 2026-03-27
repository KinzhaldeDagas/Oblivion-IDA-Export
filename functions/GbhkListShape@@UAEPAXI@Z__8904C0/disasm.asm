0x8904C0: push    esi
0x8904C1: mov     esi, ecx
0x8904C3: call    ??1bhkListShape@@UAE@XZ; bhkListShape::~bhkListShape(void)
0x8904C8: test    byte ptr [esp+4+arg_0], 1
0x8904CD: jz      short loc_8904D8
0x8904CF: push    esi
0x8904D0: call    FormHeapFree
0x8904D5: add     esp, 4
0x8904D8: mov     eax, esi
0x8904DA: pop     esi
0x8904DB: retn    4
