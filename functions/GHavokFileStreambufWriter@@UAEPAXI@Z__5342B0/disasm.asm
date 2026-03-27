0x5342B0: push    esi
0x5342B1: mov     esi, ecx
0x5342B3: call    ??1HavokFileStreambufWriter@@UAE@XZ; HavokFileStreambufWriter::~HavokFileStreambufWriter(void)
0x5342B8: test    byte ptr [esp+4+arg_0], 1
0x5342BD: jz      short loc_5342D4
0x5342BF: movzx   edx, word ptr [esi+4]
0x5342C3: mov     ecx, ds:0BA7D98h
0x5342C9: mov     eax, [ecx]
0x5342CB: mov     eax, [eax+14h]
0x5342CE: push    17h
0x5342D0: push    edx
0x5342D1: push    esi
0x5342D2: call    eax
0x5342D4: mov     eax, esi
0x5342D6: pop     esi
0x5342D7: retn    4
