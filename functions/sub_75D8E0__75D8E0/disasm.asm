0x75D8E0: push    esi
0x75D8E1: push    edi
0x75D8E2: mov     edi, [esp+8+arg_0]
0x75D8E6: push    edi
0x75D8E7: mov     esi, ecx
0x75D8E9: call    sub_759C90
0x75D8EE: test    al, al
0x75D8F0: jnz     short loc_75D8F7
0x75D8F2: pop     edi
0x75D8F3: pop     esi
0x75D8F4: retn    4
0x75D8F7: mov     ecx, [esi+68h]
0x75D8FA: mov     eax, [edi+68h]
0x75D8FD: mov     edx, [ecx]
0x75D8FF: push    eax
0x75D900: mov     eax, [edx+2Ch]
0x75D903: call    eax
0x75D905: test    al, al
0x75D907: pop     edi
0x75D908: setnz   al
0x75D90B: pop     esi
0x75D90C: retn    4
