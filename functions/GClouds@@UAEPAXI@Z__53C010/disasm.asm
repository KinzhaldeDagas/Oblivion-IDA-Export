0x53C010: push    esi
0x53C011: mov     esi, ecx
0x53C013: call    ??1Clouds@@UAE@XZ; Clouds::~Clouds(void)
0x53C018: test    byte ptr [esp+4+arg_0], 1
0x53C01D: jz      short loc_53C028
0x53C01F: push    esi
0x53C020: call    FormHeapFree
0x53C025: add     esp, 4
0x53C028: mov     eax, esi
0x53C02A: pop     esi
0x53C02B: retn    4
