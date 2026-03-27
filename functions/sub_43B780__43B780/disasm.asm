0x43B780: push    0FFFFFFFFh
0x43B782: push    offset SEH_43B780
0x43B787: mov     eax, large fs:0
0x43B78D: push    eax
0x43B78E: sub     esp, 8
0x43B791: push    esi
0x43B792: mov     eax, ___security_cookie
0x43B797: xor     eax, esp
0x43B799: push    eax
0x43B79A: lea     eax, [esp+1Ch+var_C]
0x43B79E: mov     large fs:0, eax
0x43B7A4: push    40h ; '@'; Size
0x43B7A6: mov     [esp+20h+var_4], 0
0x43B7AE: mov     [esp+20h+var_14], 0
0x43B7B6: call    FormHeapAlloc
0x43B7BB: add     esp, 4
0x43B7BE: mov     [esp+1Ch+var_10], eax
0x43B7C2: test    eax, eax
0x43B7C4: mov     [esp+1Ch+var_4], 1
0x43B7CC: jz      short loc_43B7EB
0x43B7CE: mov     ecx, [esp+1Ch+arg_14]
0x43B7D2: mov     edx, [esp+1Ch+arg_C]
0x43B7D6: push    ecx
0x43B7D7: mov     ecx, [esp+20h+arg_8]
0x43B7DB: push    edx
0x43B7DC: mov     edx, [esp+24h+arg_4]
0x43B7E0: push    ecx
0x43B7E1: push    edx
0x43B7E2: mov     ecx, eax
0x43B7E4: call    sub_4376A0
0x43B7E9: jmp     short loc_43B7ED
0x43B7EB: xor     eax, eax
0x43B7ED: test    eax, eax
0x43B7EF: mov     esi, [esp+1Ch+arg_0]
0x43B7F3: mov     [esi], eax
0x43B7F5: jz      short loc_43B801
0x43B7F7: add     eax, 8
0x43B7FA: push    eax; lpAddend
0x43B7FB: call    ds:InterlockedIncrement
0x43B801: mov     eax, [esp+1Ch+arg_10]
0x43B805: mov     ecx, [esi]
0x43B807: push    eax
0x43B808: mov     [esp+20h+var_4], 0
0x43B810: mov     [esp+20h+var_14], 1
0x43B818: call    sub_43AC40
0x43B81D: mov     ecx, [esi]
0x43B81F: mov     edx, [ecx]
0x43B821: mov     eax, [edx+20h]
0x43B824: call    eax
0x43B826: mov     eax, esi
0x43B828: mov     ecx, [esp+1Ch+var_C]
0x43B82C: mov     large fs:0, ecx
0x43B833: pop     ecx
0x43B834: pop     esi
0x43B835: add     esp, 14h
0x43B838: retn    18h
