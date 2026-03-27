0x8C41C0: push    esi
0x8C41C1: push    edi
0x8C41C2: mov     edi, [esp+8+arg_0]
0x8C41C6: push    edi
0x8C41C7: mov     esi, ecx
0x8C41C9: call    sub_8A2690
0x8C41CE: test    esi, esi
0x8C41D0: jz      short loc_8C41FD
0x8C41D2: mov     esi, [esi+8]
0x8C41D5: test    esi, esi
0x8C41D7: jz      short loc_8C41FD
0x8C41D9: lea     eax, [esi+20h]
0x8C41DC: push    eax
0x8C41DD: lea     ecx, [edi+30h]
0x8C41E0: call    sub_47DCD0
0x8C41E5: lea     ecx, [esi+30h]
0x8C41E8: push    ecx
0x8C41E9: lea     ecx, [edi+20h]
0x8C41EC: call    sub_47DCD0
0x8C41F1: add     esi, 10h
0x8C41F4: push    esi
0x8C41F5: lea     ecx, [edi+10h]
0x8C41F8: call    sub_47DCD0
0x8C41FD: pop     edi
0x8C41FE: pop     esi
0x8C41FF: retn    4
