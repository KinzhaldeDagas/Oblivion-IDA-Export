0x75D8B0: push    esi
0x75D8B1: push    edi
0x75D8B2: mov     edi, [esp+8+arg_0]
0x75D8B6: push    edi
0x75D8B7: mov     esi, ecx
0x75D8B9: call    sub_71FDD0
0x75D8BE: test    al, al
0x75D8C0: jnz     short loc_75D8C7
0x75D8C2: pop     edi
0x75D8C3: pop     esi
0x75D8C4: retn    4
0x75D8C7: mov     ecx, [esi+68h]
0x75D8CA: mov     eax, [ecx]
0x75D8CC: mov     edx, [eax+24h]
0x75D8CF: push    edi
0x75D8D0: call    edx
0x75D8D2: pop     edi
0x75D8D3: mov     al, 1
0x75D8D5: pop     esi
0x75D8D6: retn    4
