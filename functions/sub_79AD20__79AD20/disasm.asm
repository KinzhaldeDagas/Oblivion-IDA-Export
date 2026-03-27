0x79AD20: push    esi
0x79AD21: xor     eax, eax
0x79AD23: push    edi
0x79AD24: mov     edi, [esp+8+arg_0]
0x79AD28: cmp     edi, eax
0x79AD2A: mov     esi, ecx
0x79AD2C: mov     [esi+4], eax
0x79AD2F: mov     [esi+8], eax
0x79AD32: mov     [esi+0Ch], eax
0x79AD35: jnz     short loc_79AD3E
0x79AD37: pop     edi
0x79AD38: xor     al, al
0x79AD3A: pop     esi
0x79AD3B: retn    4
0x79AD3E: cmp     edi, 5555555h
0x79AD44: jbe     short loc_79AD4B
0x79AD46: call    sub_790B90
0x79AD4B: push    eax
0x79AD4C: push    edi; char *
0x79AD4D: call    sub_799FA0
0x79AD52: lea     ecx, [edi+edi*2]
0x79AD55: add     esp, 8
0x79AD58: shl     ecx, 4
0x79AD5B: add     ecx, eax
0x79AD5D: mov     [esi+4], eax
0x79AD60: mov     [esi+8], eax
0x79AD63: pop     edi
0x79AD64: mov     [esi+0Ch], ecx
0x79AD67: mov     al, 1
0x79AD69: pop     esi
0x79AD6A: retn    4
