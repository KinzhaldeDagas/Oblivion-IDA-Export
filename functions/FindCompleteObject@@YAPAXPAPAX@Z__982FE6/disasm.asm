0x982FE6: mov     eax, [ecx]
0x982FE8: mov     edx, [eax-4]
0x982FEB: mov     eax, ecx
0x982FED: sub     eax, [edx+4]
0x982FF0: mov     edx, [edx+8]
0x982FF3: test    edx, edx
0x982FF5: jz      short locret_982FFB
0x982FF7: sub     ecx, edx
0x982FF9: sub     eax, [ecx]
0x982FFB: retn
