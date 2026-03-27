0x6D8DF0: push    esi
0x6D8DF1: mov     esi, ecx
0x6D8DF3: call    ??1NiRotData@@UAE@XZ; NiRotData::~NiRotData(void)
0x6D8DF8: test    byte ptr [esp+4+arg_0], 1
0x6D8DFD: jz      short loc_6D8E08
0x6D8DFF: push    esi
0x6D8E00: call    FormHeapFree
0x6D8E05: add     esp, 4
0x6D8E08: mov     eax, esi
0x6D8E0A: pop     esi
0x6D8E0B: retn    4
