0x47DDC0: push    esi
0x47DDC1: mov     esi, ecx
0x47DDC3: call    ??1bhkAction@@UAE@XZ; bhkAction::~bhkAction(void)
0x47DDC8: test    byte ptr [esp+4+arg_0], 1
0x47DDCD: jz      short loc_47DDD8
0x47DDCF: push    esi
0x47DDD0: call    FormHeapFree
0x47DDD5: add     esp, 4
0x47DDD8: mov     eax, esi
0x47DDDA: pop     esi
0x47DDDB: retn    4
