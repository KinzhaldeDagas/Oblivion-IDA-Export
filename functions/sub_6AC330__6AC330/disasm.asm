0x6AC330: sub     esp, 8
0x6AC333: push    esi
0x6AC334: mov     esi, ecx
0x6AC336: mov     ecx, [esi+300h]
0x6AC33C: mov     edx, [ecx+4]
0x6AC33F: xor     eax, eax
0x6AC341: test    edx, edx
0x6AC343: push    edi
0x6AC344: mov     [esp+10h+var_8], 0
0x6AC34C: jbe     short loc_6AC362
0x6AC34E: mov     edi, [ecx+8]
0x6AC351: mov     ecx, edi
0x6AC353: cmp     dword ptr [ecx], 0
0x6AC356: jnz     short loc_6AC3B2
0x6AC358: add     eax, 1
0x6AC35B: add     ecx, 4
0x6AC35E: cmp     eax, edx
0x6AC360: jb      short loc_6AC353
0x6AC362: xor     eax, eax
0x6AC364: test    eax, eax
0x6AC366: mov     [esp+10h+var_4], eax
0x6AC36A: jz      short loc_6AC3AA
0x6AC36C: mov     edi, [esp+10h+arg_0]
0x6AC370: lea     eax, [esp+10h+var_8]
0x6AC374: push    eax
0x6AC375: lea     ecx, [esp+14h+arg_0]
0x6AC379: push    ecx
0x6AC37A: mov     ecx, [esi+300h]
0x6AC380: lea     edx, [esp+18h+var_4]
0x6AC384: push    edx
0x6AC385: call    sub_452600
0x6AC38A: mov     ecx, [esp+10h+var_8]
0x6AC38E: test    [ecx], edi
0x6AC390: jz      short loc_6AC3A3
0x6AC392: call    sub_6B6AC0
0x6AC397: lea     eax, [esp+10h+var_8]
0x6AC39B: push    eax
0x6AC39C: mov     ecx, esi
0x6AC39E: call    sub_6AA9C0
0x6AC3A3: cmp     [esp+10h+var_4], 0
0x6AC3A8: jnz     short loc_6AC370
0x6AC3AA: pop     edi
0x6AC3AB: pop     esi
0x6AC3AC: add     esp, 8
0x6AC3AF: retn    4
0x6AC3B2: mov     eax, [edi+eax*4]
0x6AC3B5: jmp     short loc_6AC364
