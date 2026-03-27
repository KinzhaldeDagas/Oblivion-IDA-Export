0x8C5720: push    esi
0x8C5721: mov     esi, ecx
0x8C5723: test    esi, esi
0x8C5725: push    edi
0x8C5726: jz      short loc_8C572D
0x8C5728: mov     eax, [esi+8]
0x8C572B: jmp     short loc_8C572F
0x8C572D: xor     eax, eax
0x8C572F: mov     ecx, [eax+10h]
0x8C5732: mov     eax, [ecx]
0x8C5734: mov     edi, [esp+8+arg_0]
0x8C5738: mov     edx, [eax+24h]
0x8C573B: push    edi
0x8C573C: call    edx
0x8C573E: push    edi
0x8C573F: mov     ecx, esi
0x8C5741: call    sub_6EC2C0
0x8C5746: pop     edi
0x8C5747: pop     esi
0x8C5748: retn    4
