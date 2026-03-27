0x42ADD0: push    esi
0x42ADD1: mov     esi, ecx
0x42ADD3: call    ??1ExtraTeleport@@UAE@XZ; ExtraTeleport::~ExtraTeleport(void)
0x42ADD8: test    byte ptr [esp+4+arg_0], 1
0x42ADDD: jz      short loc_42ADE8
0x42ADDF: push    esi
0x42ADE0: call    FormHeapFree
0x42ADE5: add     esp, 4
0x42ADE8: mov     eax, esi
0x42ADEA: pop     esi
0x42ADEB: retn    4
