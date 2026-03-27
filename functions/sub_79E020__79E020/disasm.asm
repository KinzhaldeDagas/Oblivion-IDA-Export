0x79E020: push    ebx
0x79E021: push    ebp
0x79E022: mov     ebp, [esp+8+arg_4]
0x79E026: test    ebp, ebp
0x79E028: push    esi
0x79E029: mov     esi, ecx
0x79E02B: jz      short loc_79E033
0x79E02D: cmp     ebp, [esp+0Ch+arg_C]
0x79E031: jz      short loc_79E038
0x79E033: call    __invalid_parameter_noinfo
0x79E038: mov     ebx, [esp+0Ch+arg_8]
0x79E03C: mov     eax, [esp+0Ch+arg_10]
0x79E040: cmp     ebx, eax
0x79E042: jz      short loc_79E069
0x79E044: mov     ecx, [esi+8]
0x79E047: push    edi
0x79E048: push    ebx
0x79E049: push    ecx
0x79E04A: push    eax
0x79E04B: call    sub_79BDF0
0x79E050: mov     edx, [esp+1Ch+arg_0]
0x79E054: push    edx
0x79E055: mov     edi, eax
0x79E057: mov     eax, [esi+8]
0x79E05A: push    esi
0x79E05B: push    eax
0x79E05C: push    edi
0x79E05D: call    sub_79B120
0x79E062: add     esp, 1Ch
0x79E065: mov     [esi+8], edi
0x79E068: pop     edi
0x79E069: mov     eax, [esp+0Ch+arg_0]
0x79E06D: pop     esi
0x79E06E: mov     [eax], ebp
0x79E070: pop     ebp
0x79E071: mov     [eax+4], ebx
0x79E074: pop     ebx
0x79E075: retn    14h
