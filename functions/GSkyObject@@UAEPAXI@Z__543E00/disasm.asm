0x543E00: push    esi
0x543E01: mov     esi, ecx
0x543E03: call    ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x543E08: test    byte ptr [esp+4+arg_0], 1
0x543E0D: jz      short loc_543E18
0x543E0F: push    esi
0x543E10: call    FormHeapFree
0x543E15: add     esp, 4
0x543E18: mov     eax, esi
0x543E1A: pop     esi
0x543E1B: retn    4
