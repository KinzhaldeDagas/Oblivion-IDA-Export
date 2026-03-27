0x7A9740: push    0FFFFFFFFh
0x7A9742: push    offset SEH_7A9740
0x7A9747: mov     eax, large fs:0
0x7A974D: push    eax
0x7A974E: sub     esp, 18h
0x7A9751: push    ebx
0x7A9752: push    esi
0x7A9753: push    edi
0x7A9754: mov     eax, ds:0B30AACh
0x7A9759: xor     eax, esp
0x7A975B: push    eax
0x7A975C: lea     eax, [esp+34h+var_C]
0x7A9760: mov     large fs:0, eax
0x7A9766: mov     edi, ecx
0x7A9768: xor     ebx, ebx
0x7A976A: mov     [esp+34h+var_24], ebx
0x7A976E: mov     esi, [esp+34h+arg_0]
0x7A9772: mov     eax, 1
0x7A9777: mov     [esp+34h+var_4], eax
0x7A977B: mov     [esi+4], ebx
0x7A977E: mov     [esi+8], ebx
0x7A9781: mov     [esi+0Ch], ebx
0x7A9784: sub     esp, 10h
0x7A9787: mov     [esp+44h+var_24], eax
0x7A978B: lea     eax, [esp+44h+arg_4]
0x7A978F: mov     ecx, esp
0x7A9791: mov     [esp+44h+var_20], esp
0x7A9795: push    eax
0x7A9796: call    sub_7A3580
0x7A979B: mov     ecx, edi
0x7A979D: call    sub_7A9240
0x7A97A2: lea     ecx, [esp+34h+var_1C]
0x7A97A6: push    ecx
0x7A97A7: mov     ecx, edi
0x7A97A9: call    sub_7A8FC0
0x7A97AE: push    eax
0x7A97AF: mov     ecx, esi
0x7A97B1: mov     byte ptr [esp+38h+var_4], 2
0x7A97B6: call    sub_79B2F0
0x7A97BB: mov     eax, [esp+34h+var_18]
0x7A97BF: cmp     eax, ebx
0x7A97C1: jz      short loc_7A97CC
0x7A97C3: push    eax
0x7A97C4: call    FormHeapFree
0x7A97C9: add     esp, 4
0x7A97CC: mov     eax, [esp+34h+arg_8]
0x7A97D0: cmp     eax, ebx
0x7A97D2: jz      short loc_7A97DD
0x7A97D4: push    eax
0x7A97D5: call    FormHeapFree
0x7A97DA: add     esp, 4
0x7A97DD: mov     eax, esi
0x7A97DF: mov     ecx, [esp+34h+var_C]
0x7A97E3: mov     large fs:0, ecx
0x7A97EA: pop     ecx
0x7A97EB: pop     edi
0x7A97EC: pop     esi
0x7A97ED: pop     ebx
0x7A97EE: add     esp, 24h
0x7A97F1: retn    14h
