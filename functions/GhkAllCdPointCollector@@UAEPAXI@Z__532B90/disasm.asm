0x532B90: push    esi
0x532B91: mov     esi, ecx
0x532B93: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x532B98: test    byte ptr [esp+4+arg_0], 1
0x532B9D: jz      short loc_532BB1
0x532B9F: mov     ecx, ds:0BA7D98h
0x532BA5: mov     eax, [ecx]
0x532BA7: mov     edx, [eax+14h]
0x532BAA: push    1Ch
0x532BAC: push    8
0x532BAE: push    esi
0x532BAF: call    edx
0x532BB1: mov     eax, esi
0x532BB3: pop     esi
0x532BB4: retn    4
