0x8C5620: push    esi
0x8C5621: mov     esi, ecx
0x8C5623: call    ??1bhkPackedNiTriStripsShape@@UAE@XZ; bhkPackedNiTriStripsShape::~bhkPackedNiTriStripsShape(void)
0x8C5628: test    byte ptr [esp+4+arg_0], 1
0x8C562D: jz      short loc_8C5638
0x8C562F: push    esi
0x8C5630: call    FormHeapFree
0x8C5635: add     esp, 4
0x8C5638: mov     eax, esi
0x8C563A: pop     esi
0x8C563B: retn    4
