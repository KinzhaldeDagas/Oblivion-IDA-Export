0x7786C0: sub     esp, 10h
0x7786C3: push    esi
0x7786C4: push    edi
0x7786C5: mov     edi, ecx
0x7786C7: mov     ecx, [edi+20h]
0x7786CA: xor     eax, eax
0x7786CC: test    ecx, ecx
0x7786CE: mov     [esp+18h+var_8], edi
0x7786D2: jbe     short loc_7786F3
0x7786D4: mov     esi, [edi+24h]
0x7786D7: mov     edx, esi
0x7786D9: lea     esp, [esp+0]
0x7786E0: cmp     dword ptr [edx], 0
0x7786E3: jnz     loc_7787A6
0x7786E9: add     eax, 1
0x7786EC: add     edx, 4
0x7786EF: cmp     eax, ecx
0x7786F1: jb      short loc_7786E0
0x7786F3: xor     eax, eax
0x7786F5: test    eax, eax
0x7786F7: mov     [esp+18h+var_10], eax
0x7786FB: jz      short loc_77876C
0x7786FD: push    ebx
0x7786FE: push    ebp
0x7786FF: nop
0x778700: lea     eax, [esp+20h+var_C]
0x778704: push    eax
0x778705: lea     ecx, [esp+24h+var_4]
0x778709: push    ecx
0x77870A: lea     edx, [esp+28h+var_10]
0x77870E: push    edx
0x77870F: lea     ecx, [edi+1Ch]
0x778712: call    sub_452600
0x778717: mov     ebp, [esp+20h+var_C]
0x77871B: test    ebp, ebp
0x77871D: jz      short loc_778763
0x77871F: lea     edi, [ebp+8]
0x778722: mov     ebx, 5
0x778727: mov     esi, [edi]
0x778729: test    esi, esi
0x77872B: jz      short loc_77874E
0x77872D: cmp     dword ptr [esi+20h], 0
0x778731: jz      short loc_77873E
0x778733: mov     eax, [esi+20h]
0x778736: mov     ecx, [eax]
0x778738: mov     edx, [ecx+8]
0x77873B: push    eax
0x77873C: call    edx
0x77873E: mov     ecx, esi
0x778740: call    sub_77D1D0
0x778745: push    esi
0x778746: call    FormHeapFree
0x77874B: add     esp, 4
0x77874E: add     edi, 4
0x778751: sub     ebx, 1
0x778754: jnz     short loc_778727
0x778756: push    ebp
0x778757: call    FormHeapFree
0x77875C: mov     edi, [esp+24h+var_8]
0x778760: add     esp, 4
0x778763: cmp     [esp+20h+var_10], 0
0x778768: jnz     short loc_778700
0x77876A: pop     ebp
0x77876B: pop     ebx
0x77876C: lea     ecx, [edi+1Ch]
0x77876F: call    NiTMap_Clear
0x778774: mov     eax, [edi+0Ch]
0x778777: test    eax, eax
0x778779: jz      short loc_77878A
0x77877B: mov     ecx, [eax]
0x77877D: mov     edx, [ecx+8]
0x778780: push    eax
0x778781: call    edx
0x778783: mov     dword ptr [edi+0Ch], 0
0x77878A: mov     eax, [edi+14h]
0x77878D: test    eax, eax
0x77878F: jz      short loc_7787A0
0x778791: mov     ecx, [eax]
0x778793: mov     edx, [ecx+8]
0x778796: push    eax
0x778797: call    edx
0x778799: mov     dword ptr [edi+14h], 0
0x7787A0: pop     edi
0x7787A1: pop     esi
0x7787A2: add     esp, 10h
0x7787A5: retn
0x7787A6: mov     eax, [esi+eax*4]
0x7787A9: jmp     loc_7786F5
