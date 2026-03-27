0x563C60: push    esi
0x563C61: mov     esi, ecx
0x563C63: call    ??1bhkCapsuleShape@@UAE@XZ; bhkCapsuleShape::~bhkCapsuleShape(void)
0x563C68: test    byte ptr [esp+4+arg_0], 1
0x563C6D: jz      short loc_563C78
0x563C6F: push    esi
0x563C70: call    FormHeapFree
0x563C75: add     esp, 4
0x563C78: mov     eax, esi
0x563C7A: pop     esi
0x563C7B: retn    4
