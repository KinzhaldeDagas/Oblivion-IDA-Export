0x54D950: mov     ecx, [esp+arg_0]
0x54D954: mov     edx, [esp+arg_8]
0x54D958: push    esi
0x54D959: mov     esi, [esp+4+arg_4]
0x54D95D: mov     eax, esi
0x54D95F: sub     eax, ecx
0x54D961: sar     eax, 4
0x54D964: shl     eax, 4
0x54D967: add     eax, edx
0x54D969: cmp     ecx, esi
0x54D96B: jz      short loc_54D992
0x54D96D: sub     edx, ecx
0x54D96F: push    edi
0x54D970: mov     edi, [ecx]
0x54D972: mov     [edx+ecx], edi
0x54D975: mov     edi, [ecx+4]
0x54D978: mov     [edx+ecx+4], edi
0x54D97C: mov     edi, [ecx+8]
0x54D97F: mov     [edx+ecx+8], edi
0x54D983: mov     edi, [ecx+0Ch]
0x54D986: mov     [edx+ecx+0Ch], edi
0x54D98A: add     ecx, 10h
0x54D98D: cmp     ecx, esi
0x54D98F: jnz     short loc_54D970
0x54D991: pop     edi
0x54D992: pop     esi
0x54D993: retn
