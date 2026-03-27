0x59FEC0: push    esi
0x59FEC1: mov     esi, ecx
0x59FEC3: mov     eax, [esi+8Ch]
0x59FEC9: push    edi
0x59FECA: mov     edi, [esp+8+arg_0]
0x59FECE: push    eax
0x59FECF: mov     ecx, edi
0x59FED1: call    EffectItem_SetRange
0x59FED6: mov     ecx, [esi+90h]
0x59FEDC: mov     [edi+14h], ecx
0x59FEDF: mov     edx, [esi+88h]
0x59FEE5: push    edx
0x59FEE6: mov     ecx, edi
0x59FEE8: call    EffectItem_SetDuration
0x59FEED: mov     eax, [esi+84h]
0x59FEF3: push    eax
0x59FEF4: mov     ecx, edi
0x59FEF6: call    EffectItem_SetMagnitude
0x59FEFB: mov     ecx, [esi+80h]
0x59FF01: push    ecx
0x59FF02: mov     ecx, edi
0x59FF04: call    EffectItem_SetArea
0x59FF09: pop     edi
0x59FF0A: pop     esi
0x59FF0B: retn    4
