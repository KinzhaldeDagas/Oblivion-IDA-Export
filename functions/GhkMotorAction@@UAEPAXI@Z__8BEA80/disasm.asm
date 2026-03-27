0x8BEA80: push    esi
0x8BEA81: mov     esi, ecx
0x8BEA83: call    ??1hkMotorAction@@UAE@XZ; hkMotorAction::~hkMotorAction(void)
0x8BEA88: test    byte ptr [esp+4+arg_0], 1
0x8BEA8D: jz      short loc_8BEAA4
0x8BEA8F: movzx   edx, word ptr [esi+4]
0x8BEA93: mov     ecx, ds:0BA7D98h
0x8BEA99: mov     eax, [ecx]
0x8BEA9B: mov     eax, [eax+14h]
0x8BEA9E: push    26h ; '&'
0x8BEAA0: push    edx
0x8BEAA1: push    esi
0x8BEAA2: call    eax
0x8BEAA4: mov     eax, esi
0x8BEAA6: pop     esi
0x8BEAA7: retn    4
