0x5A1EA0: push    esi
0x5A1EA1: mov     esi, ecx
0x5A1EA3: call    ??1EnchantmentMenu@@UAE@XZ; EnchantmentMenu::~EnchantmentMenu(void)
0x5A1EA8: test    byte ptr [esp+4+arg_0], 1
0x5A1EAD: jz      short loc_5A1EB8
0x5A1EAF: push    esi
0x5A1EB0: call    FormHeapFree
0x5A1EB5: add     esp, 4
0x5A1EB8: mov     eax, esi
0x5A1EBA: pop     esi
0x5A1EBB: retn    4
