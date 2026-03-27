0x6D43E0: push    edi
0x6D43E1: mov     edi, [esp+4+arg_0]
0x6D43E5: cmp     dword ptr [edi+0D8h], 0A010068h
0x6D43EF: jnb     short loc_6D4423
0x6D43F1: push    esi
0x6D43F2: mov     esi, [esp+8+arg_4]
0x6D43F6: test    esi, esi
0x6D43F8: jz      short loc_6D4422
0x6D43FA: mov     eax, [esi]
0x6D43FC: mov     edx, [eax+4]
0x6D43FF: mov     ecx, esi
0x6D4401: call    edx
0x6D4403: test    eax, eax
0x6D4405: jz      short loc_6D4422
0x6D4407: cmp     eax, offset dword_B3F584
0x6D440C: jz      short loc_6D4418
0x6D440E: mov     eax, [eax+4]
0x6D4411: test    eax, eax
0x6D4413: jnz     short loc_6D4407
0x6D4415: pop     esi
0x6D4416: pop     edi
0x6D4417: retn
0x6D4418: push    esi
0x6D4419: push    edi
0x6D441A: call    sub_6D42D0
0x6D441F: add     esp, 8
0x6D4422: pop     esi
0x6D4423: pop     edi
0x6D4424: retn
