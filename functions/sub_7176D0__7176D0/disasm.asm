0x7176D0: push    esi
0x7176D1: mov     esi, [esp+4+arg_0]
0x7176D5: push    edi
0x7176D6: push    esi
0x7176D7: mov     edi, ecx
0x7176D9: call    NiGeometry__Render
0x7176DE: mov     eax, 1
0x7176E3: cmp     [esi+200h], eax
0x7176E9: jz      short loc_7176F3
0x7176EB: cmp     [esi+204h], eax
0x7176F1: jnz     short loc_717708
0x7176F3: cmp     [esi+20Ch], al
0x7176F9: jnz     short loc_717708
0x7176FB: mov     eax, [esi]
0x7176FD: mov     edx, [eax+168h]
0x717703: push    edi
0x717704: mov     ecx, esi
0x717706: call    edx
0x717708: pop     edi
0x717709: pop     esi
0x71770A: retn    4
