0x7E3130: push    esi
0x7E3131: mov     esi, ecx
0x7E3133: cmp     dword ptr [esi+24h], 0
0x7E3137: jz      short loc_7E3153
0x7E3139: mov     ecx, [esi+88h]
0x7E313F: mov     eax, [ecx]
0x7E3141: mov     edx, [eax+5Ch]
0x7E3144: call    edx
0x7E3146: mov     ecx, [esi+8Ch]
0x7E314C: mov     eax, [ecx]
0x7E314E: mov     edx, [eax+44h]
0x7E3151: call    edx
0x7E3153: mov     ecx, esi
0x7E3155: pop     esi
0x7E3156: jmp     sub_77A4A0
