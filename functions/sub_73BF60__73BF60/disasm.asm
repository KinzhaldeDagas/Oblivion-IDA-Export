0x73BF60: push    esi
0x73BF61: push    edi
0x73BF62: mov     edi, [esp+8+arg_0]
0x73BF66: push    edi
0x73BF67: mov     esi, ecx
0x73BF69: call    sub_708C30
0x73BF6E: test    al, al
0x73BF70: jz      loc_73C005
0x73BF76: lea     eax, [esi+0DCh]
0x73BF7C: push    eax
0x73BF7D: lea     ecx, [edi+0DCh]
0x73BF83: call    sub_70FF20
0x73BF88: test    al, al
0x73BF8A: jz      short loc_73C005
0x73BF8C: lea     ecx, [esi+100h]
0x73BF92: push    ecx
0x73BF93: lea     ecx, [edi+100h]
0x73BF99: call    sub_8AA390
0x73BF9E: test    al, al
0x73BFA0: jnz     short loc_73C005
0x73BFA2: mov     edx, [edi+140h]
0x73BFA8: cmp     edx, [esi+140h]
0x73BFAE: jnz     short loc_73C005
0x73BFB0: mov     eax, [edi+144h]
0x73BFB6: cmp     eax, [esi+144h]
0x73BFBC: jnz     short loc_73C005
0x73BFBE: mov     ecx, [edi+148h]
0x73BFC4: cmp     ecx, [esi+148h]
0x73BFCA: jnz     short loc_73C005
0x73BFCC: mov     edx, [edi+14Ch]
0x73BFD2: cmp     edx, [esi+14Ch]
0x73BFD8: jnz     short loc_73C005
0x73BFDA: mov     al, [edi+150h]
0x73BFE0: cmp     al, [esi+150h]
0x73BFE6: jnz     short loc_73C005
0x73BFE8: add     esi, 154h
0x73BFEE: push    esi
0x73BFEF: lea     ecx, [edi+154h]
0x73BFF5: call    sub_632310
0x73BFFA: test    al, al
0x73BFFC: jnz     short loc_73C005
0x73BFFE: pop     edi
0x73BFFF: mov     al, 1
0x73C001: pop     esi
0x73C002: retn    4
0x73C005: pop     edi
0x73C006: xor     al, al
0x73C008: pop     esi
0x73C009: retn    4
