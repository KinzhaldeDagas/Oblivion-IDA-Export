0x8C5030: push    esi
0x8C5031: mov     esi, ecx
0x8C5033: call    ??1hkPackedNiTriStripsShape@@UAE@XZ; hkPackedNiTriStripsShape::~hkPackedNiTriStripsShape(void)
0x8C5038: test    byte ptr [esp+4+arg_0], 1
0x8C503D: jz      short loc_8C5054
0x8C503F: movzx   edx, word ptr [esi+4]
0x8C5043: mov     ecx, ds:0BA7D98h
0x8C5049: mov     eax, [ecx]
0x8C504B: mov     eax, [eax+14h]
0x8C504E: push    24h ; '$'
0x8C5050: push    edx
0x8C5051: push    esi
0x8C5052: call    eax
0x8C5054: mov     eax, esi
0x8C5056: pop     esi
0x8C5057: retn    4
