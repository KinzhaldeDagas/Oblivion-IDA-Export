0x531D60: push    esi
0x531D61: mov     esi, ecx
0x531D63: call    ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x531D68: test    byte ptr [esp+4+arg_0], 1
0x531D6D: jz      short loc_531D78
0x531D6F: push    esi
0x531D70: call    FormHeapFree
0x531D75: add     esp, 4
0x531D78: mov     eax, esi
0x531D7A: pop     esi
0x531D7B: retn    4
