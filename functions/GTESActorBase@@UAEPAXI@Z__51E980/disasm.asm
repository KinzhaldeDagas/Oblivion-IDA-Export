0x51E980: push    esi
0x51E981: mov     esi, ecx
0x51E983: call    ??1TESActorBase@@UAE@XZ; TESActorBase::~TESActorBase(void)
0x51E988: test    byte ptr [esp+4+arg_0], 1
0x51E98D: jz      short loc_51E998
0x51E98F: push    esi
0x51E990: call    FormHeapFree
0x51E995: add     esp, 4
0x51E998: mov     eax, esi
0x51E99A: pop     esi
0x51E99B: retn    4
