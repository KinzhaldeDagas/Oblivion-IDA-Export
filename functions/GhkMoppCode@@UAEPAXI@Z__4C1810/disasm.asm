0x4C1810: push    esi
0x4C1811: mov     esi, ecx
0x4C1813: call    ??1hkMoppCode@@UAE@XZ; hkMoppCode::~hkMoppCode(void)
0x4C1818: test    byte ptr [esp+4+arg_0], 1
0x4C181D: jz      short loc_4C1834
0x4C181F: movzx   edx, word ptr [esi+4]
0x4C1823: mov     ecx, ds:0BA7D98h
0x4C1829: mov     eax, [ecx]
0x4C182B: mov     eax, [eax+14h]
0x4C182E: push    25h ; '%'
0x4C1830: push    edx
0x4C1831: push    esi
0x4C1832: call    eax
0x4C1834: mov     eax, esi
0x4C1836: pop     esi
0x4C1837: retn    4
