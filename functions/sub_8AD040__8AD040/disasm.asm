0x8AD040: push    esi
0x8AD041: mov     esi, ecx
0x8AD043: call    ??1ahkCharacterProxy@@UAE@XZ; ahkCharacterProxy::~ahkCharacterProxy(void)
0x8AD048: test    [esp+4+arg_0], 1
0x8AD04D: jz      short loc_8AD062
0x8AD04F: movzx   edx, word ptr [esi+4]
0x8AD053: mov     ecx, ds:0BA7D98h
0x8AD059: mov     eax, [ecx]
0x8AD05B: push    31h ; '1'
0x8AD05D: push    edx
0x8AD05E: push    esi
0x8AD05F: call    dword ptr [eax+14h]
0x8AD062: mov     eax, esi
0x8AD064: pop     esi
0x8AD065: retn    4
