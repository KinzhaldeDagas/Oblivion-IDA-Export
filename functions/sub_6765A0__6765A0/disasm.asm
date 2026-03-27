0x6765A0: push    esi
0x6765A1: add     ecx, 68h ; 'h'; this
0x6765A4: call    sub_7616D0
0x6765A9: mov     esi, eax
0x6765AB: test    esi, esi
0x6765AD: jz      short loc_6765E4
0x6765AF: push    edi
0x6765B0: mov     edi, [esp+8+arg_0]
0x6765B4: mov     ecx, [esi]
0x6765B6: test    ecx, ecx
0x6765B8: jz      short loc_6765E3
0x6765BA: mov     eax, [ecx]
0x6765BC: mov     edx, [eax+190h]
0x6765C2: call    edx
0x6765C4: test    al, al
0x6765C6: jz      short loc_6765DC
0x6765C8: mov     eax, [esi]
0x6765CA: test    eax, eax
0x6765CC: jz      short loc_6765DC
0x6765CE: mov     ecx, [eax+58h]
0x6765D1: mov     eax, [ecx]
0x6765D3: mov     edx, [eax+1BCh]
0x6765D9: push    edi
0x6765DA: call    edx
0x6765DC: mov     esi, [esi+4]
0x6765DF: test    esi, esi
0x6765E1: jnz     short loc_6765B4
0x6765E3: pop     edi
0x6765E4: pop     esi
0x6765E5: retn    4
