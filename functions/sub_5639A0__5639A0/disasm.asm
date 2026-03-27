0x5639A0: push    esi
0x5639A1: mov     esi, ecx
0x5639A3: test    esi, esi
0x5639A5: jz      short loc_5639CA
0x5639A7: push    edi
0x5639A8: mov     edi, [esi+8]
0x5639AB: test    edi, edi
0x5639AD: jz      short loc_5639C9
0x5639AF: call    sub_89F570
0x5639B4: mov     ecx, [esp+8+arg_0]
0x5639B8: mov     eax, [edi]
0x5639BA: mov     edx, [eax+38h]
0x5639BD: push    ecx
0x5639BE: mov     ecx, edi
0x5639C0: call    edx
0x5639C2: mov     ecx, esi
0x5639C4: call    sub_89F570
0x5639C9: pop     edi
0x5639CA: pop     esi
0x5639CB: retn    4
