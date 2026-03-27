0x642B40: push    0FFFFFFFFh
0x642B42: push    offset SEH_438060
0x642B47: mov     eax, large fs:0
0x642B4D: push    eax
0x642B4E: push    ecx
0x642B4F: push    esi
0x642B50: push    edi
0x642B51: mov     eax, ds:0B30AACh
0x642B56: xor     eax, esp
0x642B58: push    eax
0x642B59: lea     eax, [esp+1Ch+var_C]
0x642B5D: mov     large fs:0, eax
0x642B63: mov     esi, ecx
0x642B65: mov     [esp+1Ch+var_10], 0
0x642B6D: mov     eax, [esi]
0x642B6F: mov     edi, [esp+1Ch+arg_0]
0x642B73: mov     edx, [eax+4]
0x642B76: lea     ecx, [esp+1Ch+var_10]
0x642B7A: push    ecx
0x642B7B: push    edi
0x642B7C: mov     ecx, esi
0x642B7E: mov     [esp+24h+var_4], 0
0x642B86: call    edx
0x642B88: test    al, al
0x642B8A: jz      short loc_642BA6
0x642B8C: mov     eax, [esi]
0x642B8E: mov     edx, [eax+10h]
0x642B91: push    edi
0x642B92: mov     ecx, esi
0x642B94: call    edx
0x642B96: mov     eax, [esp+1Ch+var_10]
0x642B9A: mov     ecx, ds:0B33A10h
0x642BA0: push    eax
0x642BA1: call    sub_432130
0x642BA6: mov     esi, [esp+1Ch+var_10]
0x642BAA: test    esi, esi
0x642BAC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x642BB4: jz      short loc_642BD2
0x642BB6: lea     ecx, [esi+8]
0x642BB9: push    ecx; lpAddend
0x642BBA: call    dword ptr ds:0A2807Ch
0x642BC0: test    eax, eax
0x642BC2: jnz     short loc_642BD2
0x642BC4: test    esi, esi
0x642BC6: jz      short loc_642BD2
0x642BC8: mov     edx, [esi]
0x642BCA: mov     eax, [edx]
0x642BCC: push    1
0x642BCE: mov     ecx, esi
0x642BD0: call    eax
0x642BD2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x642BD6: mov     large fs:0, ecx
0x642BDD: pop     ecx
0x642BDE: pop     edi
0x642BDF: pop     esi
0x642BE0: add     esp, 10h
0x642BE3: retn    4
