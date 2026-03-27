0x4E7DC0: push    esi
0x4E7DC1: mov     esi, ecx
0x4E7DC3: call    ??1TESPathGrid@@UAE@XZ; TESPathGrid::~TESPathGrid(void)
0x4E7DC8: test    byte ptr [esp+4+arg_0], 1
0x4E7DCD: jz      short loc_4E7DD8
0x4E7DCF: push    esi
0x4E7DD0: call    FormHeapFree
0x4E7DD5: add     esp, 4
0x4E7DD8: mov     eax, esi
0x4E7DDA: pop     esi
0x4E7DDB: retn    4
