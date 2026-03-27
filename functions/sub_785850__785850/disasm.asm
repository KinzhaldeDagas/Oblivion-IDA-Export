0x785850: lea     edx, [edi+edi*2]
0x785853: lea     edi, [ebx+edx*8]
0x785856: cmp     edi, [esi+8]
0x785859: mov     [esp+arg_1C], ebx
0x78585D: ja      short loc_785864
0x78585F: cmp     edi, [esi+4]
0x785862: jnb     short loc_785869
0x785864: call    __invalid_parameter_noinfo
0x785869: mov     eax, [esp+arg_14]
0x78586D: mov     [eax+4], edi
0x785870: pop     edi
0x785871: mov     [eax], esi
0x785873: pop     esi
0x785874: pop     ebp
0x785875: pop     ebx
0x785876: pop     ecx
0x785877: retn    10h
