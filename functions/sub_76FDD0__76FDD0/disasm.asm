0x76FDD0: push    esi
0x76FDD1: push    edi
0x76FDD2: mov     edi, [esp+8+arg_0]
0x76FDD6: mov     esi, ecx
0x76FDD8: cmp     edi, [esi+20h]
0x76FDDB: jb      short loc_76FDE4
0x76FDDD: pop     edi
0x76FDDE: xor     eax, eax
0x76FDE0: pop     esi
0x76FDE1: retn    4
0x76FDE4: mov     eax, [esi]
0x76FDE6: mov     edx, [eax+74h]
0x76FDE9: call    edx
0x76FDEB: mov     eax, [esi+24h]
0x76FDEE: shl     edi, 4
0x76FDF1: mov     eax, [eax+edi+0Ch]
0x76FDF5: pop     edi
0x76FDF6: pop     esi
0x76FDF7: retn    4
