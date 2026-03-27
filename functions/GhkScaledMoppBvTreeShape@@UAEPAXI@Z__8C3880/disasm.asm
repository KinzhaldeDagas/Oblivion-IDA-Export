0x8C3880: push    esi
0x8C3881: mov     esi, ecx
0x8C3883: call    ??1hkScaledMoppBvTreeShape@@UAE@XZ; hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(void)
0x8C3888: test    byte ptr [esp+4+arg_0], 1
0x8C388D: jz      short loc_8C38A4
0x8C388F: movzx   edx, word ptr [esi+4]
0x8C3893: mov     ecx, ds:0BA7D98h
0x8C3899: mov     eax, [ecx]
0x8C389B: mov     eax, [eax+14h]
0x8C389E: push    24h ; '$'
0x8C38A0: push    edx
0x8C38A1: push    esi
0x8C38A2: call    eax
0x8C38A4: mov     eax, esi
0x8C38A6: pop     esi
0x8C38A7: retn    4
