0x4B2650: push    0FFFFFFFFh
0x4B2652: push    offset SEH_8C8970
0x4B2657: mov     eax, large fs:0
0x4B265D: push    eax
0x4B265E: push    ecx
0x4B265F: push    esi
0x4B2660: push    edi
0x4B2661: mov     eax, ds:0B30AACh
0x4B2666: xor     eax, esp
0x4B2668: push    eax
0x4B2669: lea     eax, [esp+1Ch+var_C]
0x4B266D: mov     large fs:0, eax
0x4B2673: mov     edi, ecx
0x4B2675: push    10h; Size
0x4B2677: call    FormHeapAlloc
0x4B267C: add     esp, 4
0x4B267F: mov     [esp+1Ch+var_10], eax
0x4B2683: xor     esi, esi
0x4B2685: cmp     eax, esi
0x4B2687: mov     [esp+1Ch+var_4], esi
0x4B268B: jz      short loc_4B2696
0x4B268D: mov     ecx, eax
0x4B268F: call    sub_4B2470
0x4B2694: mov     esi, eax
0x4B2696: mov     eax, [esp+1Ch+arg_0]
0x4B269A: push    eax
0x4B269B: push    esi
0x4B269C: mov     ecx, edi
0x4B269E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4B26A6: call    sub_7214A0
0x4B26AB: mov     ecx, [edi+0Ch]
0x4B26AE: mov     [esi+0Ch], ecx
0x4B26B1: mov     eax, esi
0x4B26B3: mov     ecx, [esp+1Ch+var_C]
0x4B26B7: mov     large fs:0, ecx
0x4B26BE: pop     ecx
0x4B26BF: pop     edi
0x4B26C0: pop     esi
0x4B26C1: add     esp, 10h
0x4B26C4: retn    4
