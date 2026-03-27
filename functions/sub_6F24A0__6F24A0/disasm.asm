0x6F24A0: push    ebp
0x6F24A1: mov     ebp, [esp+4+arg_4]
0x6F24A5: push    esi
0x6F24A6: mov     esi, [esp+8+arg_0]
0x6F24AA: cmp     esi, ebp
0x6F24AC: jz      short loc_6F24E3
0x6F24AE: push    ebx
0x6F24AF: push    edi
0x6F24B0: mov     edi, [esp+10h+arg_8]
0x6F24B4: lea     ebx, [edi+10h]
0x6F24B7: mov     eax, [edi]
0x6F24B9: mov     [esi], eax
0x6F24BB: mov     ecx, [edi+4]
0x6F24BE: mov     [esi+4], ecx
0x6F24C1: mov     edx, [edi+8]
0x6F24C4: push    0FFFFFFFFh
0x6F24C6: mov     [esi+8], edx
0x6F24C9: mov     eax, [edi+0Ch]
0x6F24CC: push    0
0x6F24CE: push    ebx
0x6F24CF: lea     ecx, [esi+10h]
0x6F24D2: mov     [esi+0Ch], eax
0x6F24D5: call    sub_414420
0x6F24DA: add     esi, 2Ch ; ','
0x6F24DD: cmp     esi, ebp
0x6F24DF: jnz     short loc_6F24B7
0x6F24E1: pop     edi
0x6F24E2: pop     ebx
0x6F24E3: pop     esi
0x6F24E4: pop     ebp
0x6F24E5: retn
