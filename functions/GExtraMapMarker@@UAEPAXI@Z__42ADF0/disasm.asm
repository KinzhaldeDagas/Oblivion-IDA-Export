0x42ADF0: push    esi
0x42ADF1: mov     esi, ecx
0x42ADF3: call    ??1ExtraMapMarker@@UAE@XZ; ExtraMapMarker::~ExtraMapMarker(void)
0x42ADF8: test    byte ptr [esp+4+arg_0], 1
0x42ADFD: jz      short loc_42AE08
0x42ADFF: push    esi
0x42AE00: call    FormHeapFree
0x42AE05: add     esp, 4
0x42AE08: mov     eax, esi
0x42AE0A: pop     esi
0x42AE0B: retn    4
