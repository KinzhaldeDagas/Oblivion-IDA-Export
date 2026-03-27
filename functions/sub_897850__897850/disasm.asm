0x897850: push    esi
0x897851: mov     esi, ecx
0x897853: mov     ecx, [esi+10h]
0x897856: test    ecx, ecx
0x897858: push    edi
0x897859: mov     edi, [esp+8+arg_0]
0x89785D: jz      short loc_897867
0x89785F: mov     eax, [ecx]
0x897861: mov     edx, [eax+24h]
0x897864: push    edi
0x897865: call    edx
0x897867: push    edi
0x897868: mov     ecx, esi
0x89786A: call    sub_711CD0
0x89786F: pop     edi
0x897870: pop     esi
0x897871: retn    4
