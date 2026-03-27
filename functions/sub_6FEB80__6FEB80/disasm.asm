0x6FEB80: push    0FFFFFFFFh
0x6FEB82: push    offset SEH_8C8970
0x6FEB87: mov     eax, large fs:0
0x6FEB8D: push    eax
0x6FEB8E: push    ecx
0x6FEB8F: push    esi
0x6FEB90: push    edi
0x6FEB91: mov     eax, ds:0B30AACh
0x6FEB96: xor     eax, esp
0x6FEB98: push    eax
0x6FEB99: lea     eax, [esp+1Ch+var_C]
0x6FEB9D: mov     large fs:0, eax
0x6FEBA3: mov     edi, ecx
0x6FEBA5: push    68h ; 'h'; Size
0x6FEBA7: call    FormHeapAlloc
0x6FEBAC: add     esp, 4
0x6FEBAF: mov     [esp+1Ch+var_10], eax
0x6FEBB3: xor     esi, esi
0x6FEBB5: cmp     eax, esi
0x6FEBB7: mov     [esp+1Ch+var_4], esi
0x6FEBBB: jz      short loc_6FEBC6
0x6FEBBD: mov     ecx, eax
0x6FEBBF: call    sub_6FE760
0x6FEBC4: mov     esi, eax
0x6FEBC6: mov     eax, [esp+1Ch+arg_0]
0x6FEBCA: push    eax
0x6FEBCB: push    esi
0x6FEBCC: mov     ecx, edi
0x6FEBCE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FEBD6: call    sub_6FE860
0x6FEBDB: mov     eax, esi
0x6FEBDD: mov     ecx, [esp+1Ch+var_C]
0x6FEBE1: mov     large fs:0, ecx
0x6FEBE8: pop     ecx
0x6FEBE9: pop     edi
0x6FEBEA: pop     esi
0x6FEBEB: add     esp, 10h
0x6FEBEE: retn    4
