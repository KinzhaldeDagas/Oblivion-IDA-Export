0x5352E0: push    esi
0x5352E1: mov     esi, ecx
0x5352E3: call    ??1HavokStreambufWriter@@UAE@XZ; HavokStreambufWriter::~HavokStreambufWriter(void)
0x5352E8: test    byte ptr [esp+4+arg_0], 1
0x5352ED: jz      short loc_535304
0x5352EF: movzx   edx, word ptr [esi+4]
0x5352F3: mov     ecx, ds:0BA7D98h
0x5352F9: mov     eax, [ecx]
0x5352FB: mov     eax, [eax+14h]
0x5352FE: push    17h
0x535300: push    edx
0x535301: push    esi
0x535302: call    eax
0x535304: mov     eax, esi
0x535306: pop     esi
0x535307: retn    4
