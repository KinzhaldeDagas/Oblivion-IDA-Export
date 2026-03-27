0x9146B0: push    esi
0x9146B1: mov     esi, ecx
0x9146B3: call    ??1hkScaledMoppBvTreeShape@@UAE@XZ; hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(void)
0x9146B8: test    [esp+4+arg_0], 1
0x9146BD: jz      short loc_9146D2
0x9146BF: movzx   edx, word ptr [esi+4]
0x9146C3: mov     ecx, ds:0BA7D98h
0x9146C9: mov     eax, [ecx]
0x9146CB: push    24h ; '$'
0x9146CD: push    edx
0x9146CE: push    esi
0x9146CF: call    dword ptr [eax+14h]
0x9146D2: mov     eax, esi
0x9146D4: pop     esi
0x9146D5: retn    4
