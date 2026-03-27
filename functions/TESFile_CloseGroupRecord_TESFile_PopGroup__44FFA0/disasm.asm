0x44FFA0: push    esi
0x44FFA1: mov     esi, [ecx+284h]
0x44FFA7: test    esi, esi
0x44FFA9: jz      short loc_44FFED
0x44FFAB: mov     eax, [ecx+288h]
0x44FFB1: test    eax, eax
0x44FFB3: jz      short loc_44FFDA
0x44FFB5: mov     edx, [eax+4]
0x44FFB8: mov     [ecx+288h], edx
0x44FFBE: mov     edx, [eax]
0x44FFC0: push    eax
0x44FFC1: mov     [ecx+284h], edx
0x44FFC7: call    FormHeapFree
0x44FFCC: add     esp, 4
0x44FFCF: push    esi
0x44FFD0: call    FormHeapFree
0x44FFD5: add     esp, 4
0x44FFD8: pop     esi
0x44FFD9: retn
0x44FFDA: push    esi
0x44FFDB: mov     dword ptr [ecx+284h], 0
0x44FFE5: call    FormHeapFree
0x44FFEA: add     esp, 4
0x44FFED: pop     esi
0x44FFEE: retn
