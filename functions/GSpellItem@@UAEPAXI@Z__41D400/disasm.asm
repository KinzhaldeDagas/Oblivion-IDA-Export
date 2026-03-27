0x41D400: push    esi
0x41D401: mov     esi, ecx
0x41D403: call    ??1SpellItem@@UAE@XZ; SpellItem::~SpellItem(void)
0x41D408: test    byte ptr [esp+4+arg_0], 1
0x41D40D: jz      short ??_GSpellItem@@UAEPAXI@Z___Return_This
0x41D40F: push    esi
0x41D410: call    FormHeapFree
0x41D415: add     esp, 4
