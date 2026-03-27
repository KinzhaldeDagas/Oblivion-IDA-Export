0x88E6C0: push    esi
0x88E6C1: mov     esi, ecx
0x88E6C3: call    ??1hkAvoidBox@@UAE@XZ; hkAvoidBox::~hkAvoidBox(void)
0x88E6C8: test    byte ptr [esp+4+arg_0], 1
0x88E6CD: jz      short loc_88E6E4
0x88E6CF: movzx   edx, word ptr [esi+4]
0x88E6D3: mov     ecx, ds:0BA7D98h
0x88E6D9: mov     eax, [ecx]
0x88E6DB: mov     eax, [eax+14h]
0x88E6DE: push    2Eh ; '.'
0x88E6E0: push    edx
0x88E6E1: push    esi
0x88E6E2: call    eax
0x88E6E4: mov     eax, esi
0x88E6E6: pop     esi
0x88E6E7: retn    4
