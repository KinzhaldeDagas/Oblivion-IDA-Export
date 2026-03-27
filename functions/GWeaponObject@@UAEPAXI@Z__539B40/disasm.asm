0x539B40: push    esi
0x539B41: mov     esi, ecx
0x539B43: call    ??1WeaponObject@@UAE@XZ; WeaponObject::~WeaponObject(void)
0x539B48: test    byte ptr [esp+4+arg_0], 1
0x539B4D: jz      short loc_539B58
0x539B4F: push    esi
0x539B50: call    FormHeapFree
0x539B55: add     esp, 4
0x539B58: mov     eax, esi
0x539B5A: pop     esi
0x539B5B: retn    4
