0x52ED80: push    esi
0x52ED81: push    edi
0x52ED82: mov     edi, [esp+8+arg_0]
0x52ED86: mov     esi, ecx
0x52ED88: cmp     edi, [esi+8]
0x52ED8B: jb      short loc_52ED98
0x52ED8D: mov     eax, [esi+14h]
0x52ED90: add     eax, edi
0x52ED92: push    eax
0x52ED93: call    sub_452910
0x52ED98: mov     ecx, [esp+8+arg_4]
0x52ED9C: push    ecx
0x52ED9D: push    edi
0x52ED9E: mov     ecx, esi
0x52EDA0: call    sub_446C50
0x52EDA5: mov     eax, edi
0x52EDA7: pop     edi
0x52EDA8: pop     esi
0x52EDA9: retn    8
