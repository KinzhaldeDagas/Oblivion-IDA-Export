0x531DC0: push    esi
0x531DC1: mov     esi, ecx
0x531DC3: call    ??1bhkWorldObject@@UAE@XZ; bhkWorldObject::~bhkWorldObject(void)
0x531DC8: test    byte ptr [esp+4+arg_0], 1
0x531DCD: jz      short loc_531DD8
0x531DCF: push    esi
0x531DD0: call    FormHeapFree
0x531DD5: add     esp, 4
0x531DD8: mov     eax, esi
0x531DDA: pop     esi
0x531DDB: retn    4
