0x8A2F80: push    esi
0x8A2F81: mov     esi, ecx
0x8A2F83: test    esi, esi
0x8A2F85: jz      short loc_8A2FA8
0x8A2F87: push    edi
0x8A2F88: mov     edi, [esi+8]
0x8A2F8B: test    edi, edi
0x8A2F8D: jz      short loc_8A2FA7
0x8A2F8F: call    sub_89F570
0x8A2F94: mov     eax, [esp+8+arg_0]
0x8A2F98: push    eax
0x8A2F99: mov     ecx, edi
0x8A2F9B: call    sub_8A9E00
0x8A2FA0: mov     ecx, esi
0x8A2FA2: call    sub_89F570
0x8A2FA7: pop     edi
0x8A2FA8: pop     esi
0x8A2FA9: retn    4
