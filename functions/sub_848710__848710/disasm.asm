0x848710: push    0FFFFFFFFh
0x848712: push    offset SEH_852030
0x848717: mov     eax, large fs:0
0x84871D: push    eax
0x84871E: push    ecx
0x84871F: push    ebx
0x848720: push    esi
0x848721: push    edi
0x848722: mov     eax, ds:0B30AACh
0x848727: xor     eax, esp
0x848729: push    eax
0x84872A: lea     eax, [esp+20h+var_C]
0x84872E: mov     large fs:0, eax
0x848734: mov     esi, ecx
0x848736: mov     edi, ds:0B45B30h
0x84873C: test    edi, edi
0x84873E: mov     [esp+20h+var_10], edi
0x848742: mov     ebx, 1
0x848747: jz      short loc_84874C
0x848749: add     [edi+60h], ebx
0x84874C: mov     ecx, [esi+38h]
0x84874F: lea     eax, [esp+20h+var_10]
0x848753: push    eax
0x848754: push    ecx
0x848755: lea     ecx, [esi+40h]
0x848758: mov     [esp+28h+var_4], 0
0x848760: call    sub_76CE40
0x848765: or      eax, 0FFFFFFFFh
0x848768: test    edi, edi
0x84876A: mov     [esp+20h+var_4], eax
0x84876E: jz      short loc_84877C
0x848770: add     [edi+60h], eax
0x848773: jnz     short loc_84877C
0x848775: mov     ecx, edi
0x848777: call    sub_7604D0
0x84877C: add     [esi+38h], ebx
0x84877F: mov     ecx, [esp+20h+var_C]
0x848783: mov     large fs:0, ecx
0x84878A: pop     ecx
0x84878B: pop     edi
0x84878C: pop     esi
0x84878D: pop     ebx
0x84878E: add     esp, 10h
0x848791: retn    10h
