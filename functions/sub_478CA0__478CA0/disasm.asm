0x478CA0: push    ebx
0x478CA1: mov     ebx, [esp+4+arg_0]
0x478CA5: test    ebx, ebx
0x478CA7: push    esi
0x478CA8: mov     esi, ecx
0x478CAA: jz      short loc_478CCF
0x478CAC: cmp     byte ptr [ebx+4], 21h ; '!'
0x478CB0: jnz     short loc_478CCF
0x478CB2: push    edi
0x478CB3: push    0
0x478CB5: push    1
0x478CB7: lea     edi, [esi+0DCh]
0x478CBD: push    edi
0x478CBE: call    sub_478780
0x478CC3: mov     [edi], ebx
0x478CC5: add     ebx, 30h ; '0'
0x478CC8: mov     [esi+0E0h], ebx
0x478CCE: pop     edi
0x478CCF: pop     esi
0x478CD0: pop     ebx
0x478CD1: retn    4
