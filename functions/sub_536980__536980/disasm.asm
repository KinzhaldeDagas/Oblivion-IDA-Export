0x536980: mov     eax, [esp+arg_0]
0x536984: cmp     ecx, eax
0x536986: jnz     short loc_53698E
0x536988: mov     eax, [ecx+4]
0x53698B: retn    4
0x53698E: test    eax, eax
0x536990: push    esi
0x536991: mov     esi, eax
0x536993: jz      short loc_5369AC
0x536995: mov     edx, [esi+4]
0x536998: cmp     ecx, edx
0x53699A: jz      short loc_5369A6
0x53699C: test    edx, edx
0x53699E: mov     esi, edx
0x5369A0: jnz     short loc_536995
0x5369A2: pop     esi
0x5369A3: retn    4
0x5369A6: mov     ecx, [edx+4]
0x5369A9: mov     [esi+4], ecx
0x5369AC: pop     esi
0x5369AD: retn    4
