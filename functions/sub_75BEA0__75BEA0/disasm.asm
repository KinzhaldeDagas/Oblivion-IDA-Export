0x75BEA0: push    ebx
0x75BEA1: push    esi
0x75BEA2: push    edi
0x75BEA3: mov     edi, [esp+0Ch+arg_0]
0x75BEA7: push    edi
0x75BEA8: mov     esi, ecx
0x75BEAA: call    sub_752D80
0x75BEAF: mov     ecx, [edi]
0x75BEB1: lea     eax, [esp+0Ch+arg_0]
0x75BEB5: push    eax
0x75BEB6: push    esi
0x75BEB7: call    NiTMap_GetAt
0x75BEBC: mov     eax, [esi+1Ch]
0x75BEBF: test    eax, eax
0x75BEC1: mov     ebx, [esp+0Ch+arg_0]
0x75BEC5: jz      short loc_75BEEB
0x75BEC7: lea     ecx, [esp+0Ch+arg_0]
0x75BECB: push    ecx
0x75BECC: mov     ecx, [edi]
0x75BECE: push    eax
0x75BECF: call    NiTMap_GetAt
0x75BED4: test    al, al
0x75BED6: jz      short loc_75BEE5
0x75BED8: mov     edx, [esp+0Ch+arg_0]
0x75BEDC: pop     edi
0x75BEDD: pop     esi
0x75BEDE: mov     [ebx+1Ch], edx
0x75BEE1: pop     ebx
0x75BEE2: retn    4
0x75BEE5: mov     eax, [esi+1Ch]
0x75BEE8: mov     [ebx+1Ch], eax
0x75BEEB: pop     edi
0x75BEEC: pop     esi
0x75BEED: pop     ebx
0x75BEEE: retn    4
