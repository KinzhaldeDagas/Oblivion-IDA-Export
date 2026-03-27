0x452590: mov     eax, [edi+4]
0x452593: mov     edx, [esi]
0x452595: mov     edx, [edx+8]
0x452598: push    eax
0x452599: push    ebx
0x45259A: mov     ecx, esi
0x45259C: call    edx
0x45259E: test    al, al
0x4525A0: jnz     short NiTMap_SetAt___Done
0x4525A2: mov     edi, [edi]
0x4525A4: test    edi, edi
0x4525A6: jnz     short NiTMap_SetAt___BucketLoop
