0x8B9D30: push    esi
0x8B9D31: mov     esi, ecx
0x8B9D33: call    ??1ahkCharacterProxy@@UAE@XZ; ahkCharacterProxy::~ahkCharacterProxy(void)
0x8B9D38: test    [esp+4+arg_0], 1
0x8B9D3D: jz      short loc_8B9D54
0x8B9D3F: movzx   edx, word ptr [esi+4]
0x8B9D43: mov     ecx, ds:0BA7D98h
0x8B9D49: mov     eax, [ecx]
0x8B9D4B: mov     eax, [eax+14h]
0x8B9D4E: push    31h ; '1'
0x8B9D50: push    edx
0x8B9D51: push    esi
0x8B9D52: call    eax
0x8B9D54: mov     eax, esi
0x8B9D56: pop     esi
0x8B9D57: retn    4
