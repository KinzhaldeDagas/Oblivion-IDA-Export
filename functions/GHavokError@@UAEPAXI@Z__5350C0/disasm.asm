0x5350C0: push    esi
0x5350C1: mov     esi, ecx
0x5350C3: call    ??1HavokError@@UAE@XZ; HavokError::~HavokError(void)
0x5350C8: test    byte ptr [esp+4+arg_0], 1
0x5350CD: jz      short loc_5350E4
0x5350CF: movzx   edx, word ptr [esi+4]
0x5350D3: mov     ecx, ds:0BA7D98h
0x5350D9: mov     eax, [ecx]
0x5350DB: mov     eax, [eax+14h]
0x5350DE: push    15h
0x5350E0: push    edx
0x5350E1: push    esi
0x5350E2: call    eax
0x5350E4: mov     eax, esi
0x5350E6: pop     esi
0x5350E7: retn    4
