0x728C80: sub     esp, 18h
0x728C83: push    ebx
0x728C84: xor     ebx, ebx
0x728C86: cmp     [ecx+3Ch], bl
0x728C89: jz      short loc_728CF2
0x728C8B: push    esi
0x728C8C: mov     esi, [ecx+34h]
0x728C8F: cmp     esi, ebx
0x728C91: mov     [esp+20h+var_14], ebx
0x728C95: mov     [esp+20h+var_C], ebx
0x728C99: mov     [esp+20h+var_18], ebx
0x728C9D: jz      short loc_728CDD
0x728C9F: mov     eax, [esi]
0x728CA1: mov     edx, [eax+4Ch]
0x728CA4: mov     ecx, esi
0x728CA6: call    edx
0x728CA8: test    al, al
0x728CAA: jz      short loc_728CDD
0x728CAC: test    byte ptr [esi+2Ch], 1
0x728CB0: jz      short loc_728CDD
0x728CB2: lea     eax, [esp+20h+var_14]
0x728CB6: push    eax
0x728CB7: lea     ecx, [esp+24h+var_10]
0x728CBB: push    ecx
0x728CBC: lea     edx, [esp+28h+var_8]
0x728CC0: push    edx
0x728CC1: lea     eax, [esp+2Ch+var_C]
0x728CC5: push    eax
0x728CC6: lea     ecx, [esp+30h+var_4]
0x728CCA: push    ecx
0x728CCB: lea     edx, [esp+34h+var_18]
0x728CCF: push    edx
0x728CD0: push    2
0x728CD2: mov     ecx, esi
0x728CD4: mov     [esp+3Ch+var_10], ebx
0x728CD8: call    sub_726320
0x728CDD: mov     eax, [esp+20h+arg_0]
0x728CE1: mov     ecx, [esp+20h+var_18]
0x728CE5: mov     edx, [esp+20h+var_14]
0x728CE9: mov     [eax], ecx
0x728CEB: mov     [eax+4], edx
0x728CEE: mov     [eax+8], bl
0x728CF1: pop     esi
0x728CF2: pop     ebx
0x728CF3: add     esp, 18h
0x728CF6: retn    4
