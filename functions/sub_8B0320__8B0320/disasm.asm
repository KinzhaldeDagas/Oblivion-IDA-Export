0x8B0320: push    ecx
0x8B0321: push    ebx
0x8B0322: push    esi
0x8B0323: mov     esi, ecx
0x8B0325: mov     eax, [esi]
0x8B0327: mov     edx, [eax+74h]
0x8B032A: push    edi
0x8B032B: lea     ecx, [esp+10h+var_1]
0x8B032F: push    ecx
0x8B0330: mov     ecx, esi
0x8B0332: call    edx
0x8B0334: mov     ebx, [esp+10h+arg_0]
0x8B0338: mov     ecx, ebx
0x8B033A: mov     edi, eax
0x8B033C: call    sub_7124A0
0x8B0341: test    eax, eax
0x8B0343: jz      short loc_8B034B
0x8B0345: mov     eax, [eax+8]
0x8B0348: mov     [edi+4], eax
0x8B034B: push    ebx
0x8B034C: mov     ecx, esi
0x8B034E: call    sub_8A2600
0x8B0353: pop     edi
0x8B0354: pop     esi
0x8B0355: pop     ebx
0x8B0356: pop     ecx
0x8B0357: retn    4
