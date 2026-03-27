0x52E820: push    esi
0x52E821: mov     esi, ecx
0x52E823: call    ??1TESSkill@@UAE@XZ; TESSkill::~TESSkill(void)
0x52E828: test    byte ptr [esp+4+arg_0], 1
0x52E82D: jz      short loc_52E838
0x52E82F: push    esi
0x52E830: call    FormHeapFree
0x52E835: add     esp, 4
0x52E838: mov     eax, esi
0x52E83A: pop     esi
0x52E83B: retn    4
