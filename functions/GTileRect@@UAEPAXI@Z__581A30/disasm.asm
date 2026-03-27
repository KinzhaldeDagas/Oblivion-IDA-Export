0x581A30: push    esi
0x581A31: mov     esi, ecx
0x581A33: call    ??1TileRect@@UAE@XZ; TileRect::~TileRect(void)
0x581A38: test    byte ptr [esp+4+arg_0], 1
0x581A3D: jz      short loc_581A48
0x581A3F: push    esi
0x581A40: call    FormHeapFree
0x581A45: add     esp, 4
0x581A48: mov     eax, esi
0x581A4A: pop     esi
0x581A4B: retn    4
