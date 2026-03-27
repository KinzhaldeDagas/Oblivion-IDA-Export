0x7C6FF0: push    esi
0x7C6FF1: push    edi
0x7C6FF2: mov     edi, [esp+8+arg_0]
0x7C6FF6: push    edi
0x7C6FF7: mov     esi, ecx
0x7C6FF9: call    sub_7C6230
0x7C6FFE: test    byte ptr [edi+18h], 1
0x7C7002: jz      short loc_7C7010
0x7C7004: mov     ecx, eax
0x7C7006: call    sub_7D21F0
0x7C700B: pop     edi
0x7C700C: pop     esi
0x7C700D: retn    4
0x7C7010: test    eax, eax
0x7C7012: jz      short loc_7C701C
0x7C7014: push    eax
0x7C7015: mov     ecx, esi
0x7C7017: call    sub_7C5F60
0x7C701C: pop     edi
0x7C701D: pop     esi
0x7C701E: retn    4
