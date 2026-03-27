0x6D49F0: push    esi
0x6D49F1: mov     esi, ecx
0x6D49F3: call    ??1NiUVData@@UAE@XZ; NiUVData::~NiUVData(void)
0x6D49F8: test    byte ptr [esp+4+arg_0], 1
0x6D49FD: jz      short loc_6D4A08
0x6D49FF: push    esi
0x6D4A00: call    FormHeapFree
0x6D4A05: add     esp, 4
0x6D4A08: mov     eax, esi
0x6D4A0A: pop     esi
0x6D4A0B: retn    4
