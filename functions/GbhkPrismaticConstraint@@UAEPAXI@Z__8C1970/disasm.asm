0x8C1970: push    esi
0x8C1971: mov     esi, ecx
0x8C1973: call    ??1bhkPrismaticConstraint@@UAE@XZ; bhkPrismaticConstraint::~bhkPrismaticConstraint(void)
0x8C1978: test    byte ptr [esp+4+arg_0], 1
0x8C197D: jz      short loc_8C1988
0x8C197F: push    esi
0x8C1980: call    FormHeapFree
0x8C1985: add     esp, 4
0x8C1988: mov     eax, esi
0x8C198A: pop     esi
0x8C198B: retn    4
