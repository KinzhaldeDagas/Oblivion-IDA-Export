0x7339C0: push    esi
0x7339C1: mov     esi, ecx
0x7339C3: call    ??1NiNIFImageReader@@UAE@XZ; NiNIFImageReader::~NiNIFImageReader(void)
0x7339C8: test    byte ptr [esp+4+arg_0], 1
0x7339CD: jz      short loc_7339D8
0x7339CF: push    esi
0x7339D0: call    FormHeapFree
0x7339D5: add     esp, 4
0x7339D8: mov     eax, esi
0x7339DA: pop     esi
0x7339DB: retn    4
