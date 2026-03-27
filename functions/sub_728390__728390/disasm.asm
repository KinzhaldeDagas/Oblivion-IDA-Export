0x728390: mov     ax, [esp+arg_0]
0x728395: mov     edx, [esp+arg_8]
0x728399: push    esi
0x72839A: mov     esi, ecx
0x72839C: mov     ecx, [esp+4+arg_4]
0x7283A0: mov     [esi+8], ax
0x7283A4: mov     eax, [esi]
0x7283A6: mov     [esi+1Ch], ecx
0x7283A9: mov     [esi+20h], edx
0x7283AC: mov     edx, [eax+50h]
0x7283AF: mov     ecx, esi
0x7283B1: call    edx
0x7283B3: mov     eax, [esp+4+arg_C]
0x7283B7: mov     dx, [esi+2Ch]
0x7283BB: mov     ecx, [esp+4+arg_10]
0x7283BF: mov     [esi+24h], eax
0x7283C2: movzx   eax, [esp+4+arg_14]
0x7283C7: and     dx, 0FC0h
0x7283CC: and     eax, 3Fh
0x7283CF: or      dx, ax
0x7283D2: or      dx, [esp+4+arg_18]
0x7283D7: mov     [esi+28h], ecx
0x7283DA: mov     [esi+2Ch], dx
0x7283DE: pop     esi
0x7283DF: retn    1Ch
