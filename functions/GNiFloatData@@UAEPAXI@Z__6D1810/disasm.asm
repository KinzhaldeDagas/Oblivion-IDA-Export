0x6D1810: push    esi
0x6D1811: mov     esi, ecx
0x6D1813: call    ??1NiFloatData@@UAE@XZ; NiFloatData::~NiFloatData(void)
0x6D1818: test    byte ptr [esp+4+arg_0], 1
0x6D181D: jz      short loc_6D1828
0x6D181F: push    esi
0x6D1820: call    FormHeapFree
0x6D1825: add     esp, 4
0x6D1828: mov     eax, esi
0x6D182A: pop     esi
0x6D182B: retn    4
