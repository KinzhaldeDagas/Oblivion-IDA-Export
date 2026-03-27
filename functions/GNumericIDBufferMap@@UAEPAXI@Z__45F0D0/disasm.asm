0x45F0D0: push    esi
0x45F0D1: mov     esi, ecx
0x45F0D3: call    ??1NumericIDBufferMap@@UAE@XZ; NumericIDBufferMap::~NumericIDBufferMap(void)
0x45F0D8: test    byte ptr [esp+4+arg_0], 1
0x45F0DD: jz      short loc_45F0E8
0x45F0DF: push    esi
0x45F0E0: call    FormHeapFree
0x45F0E5: add     esp, 4
0x45F0E8: mov     eax, esi
0x45F0EA: pop     esi
0x45F0EB: retn    4
