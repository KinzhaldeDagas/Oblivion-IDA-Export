0x6DB850: push    esi
0x6DB851: push    edi
0x6DB852: mov     edi, [esp+8+arg0]
0x6DB856: push    edi; arg0
0x6DB857: mov     esi, ecx
0x6DB859: call    sub_700750
0x6DB85E: mov     ecx, [esi+18h]
0x6DB861: test    ecx, ecx
0x6DB863: jz      short loc_6DB86D
0x6DB865: mov     eax, [ecx]
0x6DB867: mov     edx, [eax+38h]
0x6DB86A: push    edi
0x6DB86B: call    edx
0x6DB86D: mov     ecx, [esi+1Ch]
0x6DB870: test    ecx, ecx
0x6DB872: jz      short loc_6DB87C
0x6DB874: mov     eax, [ecx]
0x6DB876: mov     edx, [eax+38h]
0x6DB879: push    edi
0x6DB87A: call    edx
0x6DB87C: pop     edi
0x6DB87D: pop     esi
0x6DB87E: retn    4
