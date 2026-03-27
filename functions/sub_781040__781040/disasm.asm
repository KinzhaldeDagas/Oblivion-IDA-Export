0x781040: push    esi
0x781041: mov     esi, [esp+4+arg_0]
0x781045: push    edi
0x781046: mov     edi, ecx
0x781048: mov     eax, [edi+40h]
0x78104B: cmp     eax, esi
0x78104D: jz      short loc_78106A
0x78104F: test    eax, eax
0x781051: jz      short loc_78105B
0x781053: mov     ecx, [eax]
0x781055: mov     edx, [ecx+8]
0x781058: push    eax
0x781059: call    edx
0x78105B: test    esi, esi
0x78105D: mov     [edi+40h], esi
0x781060: jz      short loc_78106A
0x781062: mov     eax, [esi]
0x781064: mov     ecx, [eax+4]
0x781067: push    esi
0x781068: call    ecx
0x78106A: pop     edi
0x78106B: pop     esi
0x78106C: retn    4
