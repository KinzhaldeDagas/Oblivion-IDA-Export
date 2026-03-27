0x8A2EB0: push    esi
0x8A2EB1: push    edi
0x8A2EB2: mov     edi, [esp+8+arg_0]
0x8A2EB6: push    edi
0x8A2EB7: mov     esi, ecx
0x8A2EB9: call    sub_89FA50
0x8A2EBE: test    al, al
0x8A2EC0: jz      short loc_8A2ECB
0x8A2EC2: mov     eax, [esi+18h]
0x8A2EC5: cmp     eax, [edi+18h]
0x8A2EC8: setz    al
0x8A2ECB: pop     edi
0x8A2ECC: pop     esi
0x8A2ECD: retn    4
