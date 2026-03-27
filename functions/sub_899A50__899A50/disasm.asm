0x899A50: sub     esp, 8
0x899A53: push    esi
0x899A54: mov     esi, ecx
0x899A56: mov     eax, [esi+88h]
0x899A5C: mov     ecx, [esi+8Ch]
0x899A62: add     ecx, eax
0x899A64: jz      short loc_899A8C
0x899A66: mov     edx, [esp+0Ch+arg_0]
0x899A6A: mov     ecx, [esi+80h]
0x899A70: lea     eax, [esp+0Ch+var_8]
0x899A74: push    eax
0x899A75: mov     [esp+10h+var_8], 0Dh
0x899A7A: mov     [esp+10h+var_4], edx
0x899A7E: call    sub_8D8830
0x899A83: xor     eax, eax
0x899A85: pop     esi
0x899A86: add     esp, 8
0x899A89: retn    4
0x899A8C: inc     eax
0x899A8D: push    edi
0x899A8E: mov     edi, [esp+10h+arg_0]
0x899A92: mov     [esi+88h], eax
0x899A98: mov     eax, [edi+1Ch]
0x899A9B: test    eax, eax
0x899A9D: jnz     short loc_899AA9
0x899A9F: mov     edx, [edi]
0x899AA1: mov     ecx, edi
0x899AA3: call    dword ptr [edx+0Ch]
0x899AA6: mov     [edi+1Ch], eax
0x899AA9: push    ebx
0x899AAA: mov     ecx, edi
0x899AAC: mov     [edi+8], esi
0x899AAF: call    sub_8BC720
0x899AB4: mov     eax, [esi+0C0h]
0x899ABA: mov     ecx, [esi+0BCh]
0x899AC0: lea     ebx, [esi+0B8h]
0x899AC6: and     eax, 3FFFFFFFh
0x899ACB: cmp     ecx, eax
0x899ACD: jnz     short loc_899ADA
0x899ACF: push    4
0x899AD1: push    ebx
0x899AD2: call    sub_8A6EE0
0x899AD7: add     esp, 8
0x899ADA: mov     ecx, [ebx+4]
0x899ADD: mov     edx, [ebx]
0x899ADF: mov     [edx+ecx*4], edi
0x899AE2: mov     eax, [ebx+4]
0x899AE5: inc     eax
0x899AE6: push    edi
0x899AE7: push    esi
0x899AE8: mov     [ebx+4], eax
0x899AEB: call    sub_8CC950
0x899AF0: push    edi
0x899AF1: push    esi
0x899AF2: call    sub_8DC530
0x899AF7: add     esp, 10h
0x899AFA: mov     ecx, edi
0x899AFC: call    sub_8DE590
0x899B01: dec     dword ptr [esi+88h]
0x899B07: pop     ebx
0x899B08: jnz     short loc_899B25
0x899B0A: mov     eax, [esi+84h]
0x899B10: test    eax, eax
0x899B12: jz      short loc_899B25
0x899B14: mov     al, [esi+90h]
0x899B1A: test    al, al
0x899B1C: jnz     short loc_899B25
0x899B1E: mov     ecx, esi
0x899B20: call    sub_899210
0x899B25: mov     eax, edi
0x899B27: pop     edi
0x899B28: pop     esi
0x899B29: add     esp, 8
0x899B2C: retn    4
