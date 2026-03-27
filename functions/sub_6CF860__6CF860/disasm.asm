0x6CF860: push    0FFFFFFFFh
0x6CF862: push    offset SEH_8C8970
0x6CF867: mov     eax, large fs:0
0x6CF86D: push    eax
0x6CF86E: push    ecx
0x6CF86F: push    esi
0x6CF870: push    edi
0x6CF871: mov     eax, ds:0B30AACh
0x6CF876: xor     eax, esp
0x6CF878: push    eax
0x6CF879: lea     eax, [esp+1Ch+var_C]
0x6CF87D: mov     large fs:0, eax
0x6CF883: mov     edi, ecx
0x6CF885: push    58h ; 'X'; Size
0x6CF887: call    FormHeapAlloc
0x6CF88C: add     esp, 4
0x6CF88F: mov     [esp+1Ch+var_10], eax
0x6CF893: xor     esi, esi
0x6CF895: cmp     eax, esi
0x6CF897: mov     [esp+1Ch+var_4], esi
0x6CF89B: jz      short loc_6CF8A6
0x6CF89D: mov     ecx, eax
0x6CF89F: call    sub_6CE4C0
0x6CF8A4: mov     esi, eax
0x6CF8A6: mov     eax, [esp+1Ch+arg_0]
0x6CF8AA: push    eax
0x6CF8AB: push    esi
0x6CF8AC: mov     ecx, edi
0x6CF8AE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6CF8B6: call    sub_6CF490
0x6CF8BB: mov     eax, esi
0x6CF8BD: mov     ecx, [esp+1Ch+var_C]
0x6CF8C1: mov     large fs:0, ecx
0x6CF8C8: pop     ecx
0x6CF8C9: pop     edi
0x6CF8CA: pop     esi
0x6CF8CB: add     esp, 10h
0x6CF8CE: retn    4
