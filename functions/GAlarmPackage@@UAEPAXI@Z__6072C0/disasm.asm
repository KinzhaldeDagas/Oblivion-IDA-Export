0x6072C0: push    esi
0x6072C1: mov     esi, ecx
0x6072C3: call    ??1AlarmPackage@@UAE@XZ; AlarmPackage::~AlarmPackage(void)
0x6072C8: test    byte ptr [esp+4+arg_0], 1
0x6072CD: jz      short loc_6072D8
0x6072CF: push    esi
0x6072D0: call    FormHeapFree
0x6072D5: add     esp, 4
0x6072D8: mov     eax, esi
0x6072DA: pop     esi
0x6072DB: retn    4
