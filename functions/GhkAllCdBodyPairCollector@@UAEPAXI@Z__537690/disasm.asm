0x537690: push    esi
0x537691: mov     esi, ecx
0x537693: call    ??1hkAllCdBodyPairCollector@@UAE@XZ; hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(void)
0x537698: test    byte ptr [esp+4+arg_0], 1
0x53769D: jz      short loc_5376B1
0x53769F: mov     ecx, ds:0BA7D98h
0x5376A5: mov     eax, [ecx]
0x5376A7: mov     edx, [eax+14h]
0x5376AA: push    1Ch
0x5376AC: push    8
0x5376AE: push    esi
0x5376AF: call    edx
0x5376B1: mov     eax, esi
0x5376B3: pop     esi
0x5376B4: retn    4
