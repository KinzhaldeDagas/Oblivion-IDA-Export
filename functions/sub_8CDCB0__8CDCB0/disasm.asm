0x8CDCB0: push    esi
0x8CDCB1: push    edi
0x8CDCB2: push    2
0x8CDCB4: xor     edi, edi
0x8CDCB6: push    edi
0x8CDCB7: mov     esi, ecx
0x8CDCB9: call    sub_8BC8F0
0x8CDCBE: mov     [esi+50h], edi
0x8CDCC1: mov     [esi+54h], edi
0x8CDCC4: lea     eax, [esi+14h]
0x8CDCC7: mov     ecx, 80000000h
0x8CDCCC: mov     [esi+58h], ecx
0x8CDCCF: mov     [esi+5Ch], edi
0x8CDCD2: mov     [esi+60h], edi
0x8CDCD5: mov     [esi+64h], ecx
0x8CDCD8: mov     edx, esi
0x8CDCDA: sub     edx, eax
0x8CDCDC: mov     [eax+10h], edx
0x8CDCDF: mov     eax, [esp+8+arg_0]
0x8CDCE3: mov     dword ptr [esi], offset off_A99BF0
0x8CDCE9: mov     [esi+90h], edi
0x8CDCEF: mov     [esi+94h], edi
0x8CDCF5: mov     [esi+98h], ecx
0x8CDCFB: movaps  xmm0, xmmword ptr [eax]
0x8CDCFE: movaps  xmmword ptr [esi+70h], xmm0
0x8CDD02: movaps  xmm0, xmmword ptr [eax+10h]
0x8CDD06: mov     eax, [esp+8+arg_4]
0x8CDD0A: movaps  xmmword ptr [esi+80h], xmm0
0x8CDD11: mov     [esi+30h], eax
0x8CDD14: pop     edi
0x8CDD15: mov     eax, esi
0x8CDD17: pop     esi
0x8CDD18: retn    8
