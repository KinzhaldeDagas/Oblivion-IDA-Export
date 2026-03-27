0x6A33F0: push    esi
0x6A33F1: mov     esi, ecx
0x6A33F3: call    ??1NonActorMagicTarget@@UAE@XZ; NonActorMagicTarget::~NonActorMagicTarget(void)
0x6A33F8: test    byte ptr [esp+4+arg_0], 1
0x6A33FD: jz      short loc_6A3408
0x6A33FF: push    esi
0x6A3400: call    FormHeapFree
0x6A3405: add     esp, 4
0x6A3408: mov     eax, esi
0x6A340A: pop     esi
0x6A340B: retn    4
