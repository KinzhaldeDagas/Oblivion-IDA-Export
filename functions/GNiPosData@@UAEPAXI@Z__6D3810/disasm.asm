0x6D3810: push    esi
0x6D3811: mov     esi, ecx
0x6D3813: call    ??1NiPosData@@UAE@XZ; NiPosData::~NiPosData(void)
0x6D3818: test    byte ptr [esp+4+arg_0], 1
0x6D381D: jz      short loc_6D3828
0x6D381F: push    esi
0x6D3820: call    FormHeapFree
0x6D3825: add     esp, 4
0x6D3828: mov     eax, esi
0x6D382A: pop     esi
0x6D382B: retn    4
