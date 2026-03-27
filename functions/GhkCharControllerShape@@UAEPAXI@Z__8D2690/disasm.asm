0x8D2690: push    esi
0x8D2691: mov     esi, ecx
0x8D2693: call    ??1hkCharControllerShape@@UAE@XZ; hkCharControllerShape::~hkCharControllerShape(void)
0x8D2698: test    byte ptr [esp+4+arg_0], 1
0x8D269D: jz      short loc_8D26B4
0x8D269F: movzx   edx, word ptr [esi+4]
0x8D26A3: mov     ecx, ds:0BA7D98h
0x8D26A9: mov     eax, [ecx]
0x8D26AB: mov     eax, [eax+14h]
0x8D26AE: push    24h ; '$'
0x8D26B0: push    edx
0x8D26B1: push    esi
0x8D26B2: call    eax
0x8D26B4: mov     eax, esi
0x8D26B6: pop     esi
0x8D26B7: retn    4
