0x7D7030: mov     eax, ds:0B45D74h
0x7D7035: test    eax, eax
0x7D7037: jz      short locret_7D7079
0x7D7039: push    esi
0x7D703A: sub     eax, 1
0x7D703D: mov     esi, ds:0B45D78h[eax*4]
0x7D7044: test    esi, esi
0x7D7046: push    edi
0x7D7047: lea     edi, ds:0B45D78h[eax*4]
0x7D704E: mov     ds:0B45D74h, eax
0x7D7053: jz      short loc_7D7077
0x7D7055: lea     eax, [esi+4]
0x7D7058: push    eax; lpAddend
0x7D7059: call    dword ptr ds:0A2807Ch
0x7D705F: test    eax, eax
0x7D7061: jnz     short loc_7D7071
0x7D7063: test    esi, esi
0x7D7065: jz      short loc_7D7071
0x7D7067: mov     edx, [esi]
0x7D7069: mov     eax, [edx]
0x7D706B: push    1
0x7D706D: mov     ecx, esi
0x7D706F: call    eax
0x7D7071: mov     dword ptr [edi], 0
0x7D7077: pop     edi
0x7D7078: pop     esi
0x7D7079: retn
