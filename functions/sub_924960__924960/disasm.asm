0x924960: push    esi
0x924961: mov     esi, [esp+4+arg_0]
0x924965: test    esi, esi
0x924967: push    edi
0x924968: mov     edi, ecx
0x92496A: jz      short loc_924977
0x92496C: cmp     word ptr [esi+4], 0
0x924971: jz      short loc_924977
0x924973: inc     word ptr [esi+6]
0x924977: mov     ecx, [edi+98h]
0x92497D: test    ecx, ecx
0x92497F: jz      short loc_924999
0x924981: cmp     word ptr [ecx+4], 0
0x924986: jz      short loc_924999
0x924988: dec     word ptr [ecx+6]
0x92498C: cmp     word ptr [ecx+6], 0
0x924991: jnz     short loc_924999
0x924993: mov     eax, [ecx]
0x924995: push    1
0x924997: call    dword ptr [eax]
0x924999: mov     [edi+98h], esi
0x92499F: pop     edi
0x9249A0: pop     esi
0x9249A1: retn    4
