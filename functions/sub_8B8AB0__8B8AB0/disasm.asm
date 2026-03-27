0x8B8AB0: push    esi
0x8B8AB1: mov     esi, ecx
0x8B8AB3: call    ??1hkMotorAction@@UAE@XZ; hkMotorAction::~hkMotorAction(void)
0x8B8AB8: test    [esp+4+arg_0], 1
0x8B8ABD: jz      short loc_8B8AD2
0x8B8ABF: movzx   edx, word ptr [esi+4]
0x8B8AC3: mov     ecx, ds:0BA7D98h
0x8B8AC9: mov     eax, [ecx]
0x8B8ACB: push    26h ; '&'
0x8B8ACD: push    edx
0x8B8ACE: push    esi
0x8B8ACF: call    dword ptr [eax+14h]
0x8B8AD2: mov     eax, esi
0x8B8AD4: pop     esi
0x8B8AD5: retn    4
