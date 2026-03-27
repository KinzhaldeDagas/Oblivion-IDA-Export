0x8000F0: push    esi
0x8000F1: mov     esi, ecx
0x8000F3: mov     eax, [esi]
0x8000F5: mov     edx, [eax+0B0h]
0x8000FB: call    edx
0x8000FD: mov     eax, [esi]
0x8000FF: mov     edx, [eax+0B8h]
0x800105: mov     ecx, esi
0x800107: pop     esi
0x800108: jmp     edx
