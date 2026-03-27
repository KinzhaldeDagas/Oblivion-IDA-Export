0x794FC0: push    ebx
0x794FC1: mov     ebx, [esp+4+arg_4]
0x794FC5: push    esi
0x794FC6: mov     esi, [esp+8+arg_0]
0x794FCA: cmp     esi, ebx
0x794FCC: jz      short loc_794FF2
0x794FCE: push    edi
0x794FCF: xor     edi, edi
0x794FD1: mov     eax, [esi+4]
0x794FD4: cmp     eax, edi
0x794FD6: jz      short loc_794FE1
0x794FD8: push    eax
0x794FD9: call    FormHeapFree
0x794FDE: add     esp, 4
0x794FE1: mov     [esi+4], edi
0x794FE4: mov     [esi+8], edi
0x794FE7: mov     [esi+0Ch], edi
0x794FEA: add     esi, 10h
0x794FED: cmp     esi, ebx
0x794FEF: jnz     short loc_794FD1
0x794FF1: pop     edi
0x794FF2: pop     esi
0x794FF3: pop     ebx
0x794FF4: retn
