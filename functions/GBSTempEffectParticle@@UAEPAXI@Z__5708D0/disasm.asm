0x5708D0: push    esi
0x5708D1: mov     esi, ecx
0x5708D3: call    ??1BSTempEffectParticle@@UAE@XZ; BSTempEffectParticle::~BSTempEffectParticle(void)
0x5708D8: test    byte ptr [esp+4+arg_0], 1
0x5708DD: jz      short loc_5708E8
0x5708DF: push    esi
0x5708E0: call    FormHeapFree
0x5708E5: add     esp, 4
0x5708E8: mov     eax, esi
0x5708EA: pop     esi
0x5708EB: retn    4
