0x9176F0: push    esi
0x9176F1: mov     esi, ecx
0x9176F3: call    ??1hkCharControllerShape@@UAE@XZ; hkCharControllerShape::~hkCharControllerShape(void)
0x9176F8: test    [esp+4+arg_0], 1
0x9176FD: jz      short loc_917712
0x9176FF: movzx   edx, word ptr [esi+4]
0x917703: mov     ecx, ds:0BA7D98h
0x917709: mov     eax, [ecx]
0x91770B: push    24h ; '$'
0x91770D: push    edx
0x91770E: push    esi
0x91770F: call    dword ptr [eax+14h]
0x917712: mov     eax, esi
0x917714: pop     esi
0x917715: retn    4
