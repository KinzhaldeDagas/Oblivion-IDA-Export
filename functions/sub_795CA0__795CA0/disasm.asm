0x795CA0: push    ebx
0x795CA1: mov     ebx, [esp+4+arg_4]
0x795CA5: push    ebp
0x795CA6: mov     ebp, [esp+8+arg_8]
0x795CAA: push    esi
0x795CAB: mov     esi, [esp+0Ch+arg_0]
0x795CAF: push    edi
0x795CB0: mov     edi, ebx
0x795CB2: sub     edi, esi
0x795CB4: sar     edi, 4
0x795CB7: shl     edi, 4
0x795CBA: add     edi, ebp
0x795CBC: cmp     esi, ebx
0x795CBE: jz      short loc_795CD2
0x795CC0: sub     ebp, esi
0x795CC2: push    esi
0x795CC3: lea     ecx, [esi+ebp]
0x795CC6: call    sub_795510
0x795CCB: add     esi, 10h
0x795CCE: cmp     esi, ebx
0x795CD0: jnz     short loc_795CC2
0x795CD2: mov     eax, edi
0x795CD4: pop     edi
0x795CD5: pop     esi
0x795CD6: pop     ebp
0x795CD7: pop     ebx
0x795CD8: retn
