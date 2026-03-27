0x7439C0: push    esi
0x7439C1: mov     esi, [eax+8]
0x7439C4: push    edi
0x7439C5: mov     edi, [eax+14h]
0x7439C8: mov     edx, ecx
0x7439CA: shr     edx, 8
0x7439CD: mov     [esi+edi], dl
0x7439D0: mov     edi, [eax+8]
0x7439D3: mov     esi, 1
0x7439D8: add     [eax+14h], esi
0x7439DB: mov     edx, [eax+14h]
0x7439DE: mov     [edx+edi], cl
0x7439E1: add     [eax+14h], esi
0x7439E4: pop     edi
0x7439E5: pop     esi
0x7439E6: retn
