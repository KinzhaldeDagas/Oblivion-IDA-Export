0x660880: push    esi
0x660881: mov     esi, ecx
0x660883: mov     eax, [esi]
0x660885: mov     edx, [eax+1BCh]
0x66088B: push    0
0x66088D: mov     byte ptr [esi+71Dh], 1
0x660894: call    edx
0x660896: mov     ecx, esi; int
0x660898: pop     esi
0x660899: jmp     sub_5F7EC0
