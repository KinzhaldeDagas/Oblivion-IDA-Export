0x75FFD0: push    18h; Size
0x75FFD2: call    FormHeapAlloc
0x75FFD7: xor     ecx, ecx
0x75FFD9: add     esp, 4
0x75FFDC: cmp     eax, ecx
0x75FFDE: jz      short loc_75FFFC
0x75FFE0: mov     edx, 8
0x75FFE5: mov     [eax], ecx
0x75FFE7: mov     [eax+4], ecx
0x75FFEA: mov     [eax+8], ecx
0x75FFED: mov     [eax+0Ch], edx
0x75FFF0: mov     [eax+10h], edx
0x75FFF3: mov     [eax+14h], ecx
0x75FFF6: mov     ds:0B42044h, eax
0x75FFFB: retn
0x75FFFC: mov     ds:0B42044h, ecx
0x760002: retn
