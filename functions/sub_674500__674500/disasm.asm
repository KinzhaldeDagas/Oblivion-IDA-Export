0x674500: push    esi
0x674501: mov     esi, ecx
0x674503: lea     ecx, [esi+68h]; this
0x674506: call    sub_7616D0
0x67450B: test    eax, eax
0x67450D: mov     [esi+78h], eax
0x674510: jz      short loc_67454A
0x674512: push    edi
0x674513: mov     eax, [esi+78h]
0x674516: cmp     dword ptr [eax+4], 0
0x67451A: jnz     short loc_674521
0x67451C: cmp     dword ptr [eax], 0
0x67451F: jz      short loc_674549
0x674521: mov     edi, [eax]
0x674523: mov     eax, [edi]
0x674525: mov     edx, [eax+190h]
0x67452B: mov     ecx, edi
0x67452D: call    edx
0x67452F: test    al, al
0x674531: jz      short loc_67453C
0x674533: mov     ecx, [edi+58h]
0x674536: push    edi
0x674537: call    sub_6286B0
0x67453C: mov     eax, [esi+78h]
0x67453F: mov     ecx, [eax+4]
0x674542: test    ecx, ecx
0x674544: mov     [esi+78h], ecx
0x674547: jnz     short loc_674513
0x674549: pop     edi
0x67454A: pop     esi
0x67454B: retn
