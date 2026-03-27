0x522260: push    ebx
0x522261: mov     ebx, ds:0A2807Ch
0x522267: push    esi
0x522268: push    edi
0x522269: mov     edi, ecx
0x52226B: mov     esi, [edi+1D4h]
0x522271: test    esi, esi
0x522273: jz      short loc_522297
0x522275: lea     eax, [esi+4]
0x522278: push    eax; lpAddend
0x522279: call    ebx ; InterlockedDecrement
0x52227B: test    eax, eax
0x52227D: jnz     short loc_52228D
0x52227F: test    esi, esi
0x522281: jz      short loc_52228D
0x522283: mov     edx, [esi]
0x522285: mov     eax, [edx]
0x522287: push    1
0x522289: mov     ecx, esi
0x52228B: call    eax
0x52228D: mov     dword ptr [edi+1D4h], 0
0x522297: mov     esi, [edi+1D8h]
0x52229D: test    esi, esi
0x52229F: jz      short loc_5222C3
0x5222A1: lea     ecx, [esi+4]
0x5222A4: push    ecx; lpAddend
0x5222A5: call    ebx ; InterlockedDecrement
0x5222A7: test    eax, eax
0x5222A9: jnz     short loc_5222B9
0x5222AB: test    esi, esi
0x5222AD: jz      short loc_5222B9
0x5222AF: mov     edx, [esi]
0x5222B1: mov     eax, [edx]
0x5222B3: push    1
0x5222B5: mov     ecx, esi
0x5222B7: call    eax
0x5222B9: mov     dword ptr [edi+1D8h], 0
0x5222C3: pop     edi
0x5222C4: pop     esi
0x5222C5: pop     ebx
0x5222C6: retn
