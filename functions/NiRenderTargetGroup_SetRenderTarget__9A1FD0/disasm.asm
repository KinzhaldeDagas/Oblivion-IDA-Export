0x9A1FD0: push    esi
0x9A1FD1: mov     esi, ecx
0x9A1FD3: mov     eax, [esi]
0x9A1FD5: mov     edx, [eax+7Ch]
0x9A1FD8: push    0
0x9A1FDA: call    edx
0x9A1FDC: mov     eax, [esp+4+arg_4]
0x9A1FE0: cmp     eax, [esi+18h]
0x9A1FE3: jnb     short loc_9A1FF9
0x9A1FE5: mov     ecx, [esp+4+a2]
0x9A1FE9: push    ecx; a2
0x9A1FEA: lea     ecx, [esi+eax*4+8]; this
0x9A1FEE: call    NiSmartPointer_Set??
0x9A1FF3: mov     al, 1
0x9A1FF5: pop     esi
0x9A1FF6: retn    8
0x9A1FF9: xor     al, al
0x9A1FFB: pop     esi
0x9A1FFC: retn    8
