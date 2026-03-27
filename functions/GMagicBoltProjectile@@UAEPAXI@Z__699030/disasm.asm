0x699030: push    esi
0x699031: mov     esi, ecx
0x699033: call    ??1MagicBoltProjectile@@UAE@XZ; MagicBoltProjectile::~MagicBoltProjectile(void)
0x699038: test    byte ptr [esp+4+arg_0], 1
0x69903D: jz      short loc_699048
0x69903F: push    esi
0x699040: call    FormHeapFree
0x699045: add     esp, 4
0x699048: mov     eax, esi
0x69904A: pop     esi
0x69904B: retn    4
