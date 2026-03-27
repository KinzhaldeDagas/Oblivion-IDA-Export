0x568E90: push    esi
0x568E91: mov     esi, ecx
0x568E93: call    ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x568E98: test    byte ptr [esp+4+arg_0], 1
0x568E9D: jz      short loc_568EA8
0x568E9F: push    esi
0x568EA0: call    FormHeapFree
0x568EA5: add     esp, 4
0x568EA8: mov     eax, esi
0x568EAA: pop     esi
0x568EAB: retn    4
