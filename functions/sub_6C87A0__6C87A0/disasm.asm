0x6C87A0: push    0FFFFFFFFh
0x6C87A2: push    offset SEH_8C8970
0x6C87A7: mov     eax, large fs:0
0x6C87AD: push    eax
0x6C87AE: push    ecx
0x6C87AF: push    esi
0x6C87B0: push    edi
0x6C87B1: mov     eax, ds:0B30AACh
0x6C87B6: xor     eax, esp
0x6C87B8: push    eax
0x6C87B9: lea     eax, [esp+1Ch+var_C]
0x6C87BD: mov     large fs:0, eax
0x6C87C3: mov     edi, ecx
0x6C87C5: push    68h ; 'h'; Size
0x6C87C7: call    FormHeapAlloc
0x6C87CC: add     esp, 4
0x6C87CF: mov     [esp+1Ch+var_10], eax
0x6C87D3: xor     esi, esi
0x6C87D5: cmp     eax, esi
0x6C87D7: mov     [esp+1Ch+var_4], esi
0x6C87DB: jz      short loc_6C87E6
0x6C87DD: mov     ecx, eax
0x6C87DF: call    sub_6C6550
0x6C87E4: mov     esi, eax
0x6C87E6: mov     eax, [esp+1Ch+arg_0]
0x6C87EA: push    eax
0x6C87EB: push    esi
0x6C87EC: mov     ecx, edi
0x6C87EE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C87F6: call    sub_6C70A0
0x6C87FB: mov     eax, esi
0x6C87FD: mov     ecx, [esp+1Ch+var_C]
0x6C8801: mov     large fs:0, ecx
0x6C8808: pop     ecx
0x6C8809: pop     edi
0x6C880A: pop     esi
0x6C880B: add     esp, 10h
0x6C880E: retn    4
