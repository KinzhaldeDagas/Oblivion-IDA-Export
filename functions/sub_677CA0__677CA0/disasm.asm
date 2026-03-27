0x677CA0: push    ecx
0x677CA1: xor     eax, eax
0x677CA3: push    ebx
0x677CA4: mov     [esp+8+var_4], eax
0x677CA8: cmp     [ecx+4], eax
0x677CAB: push    esi
0x677CAC: jnz     short loc_677CBD
0x677CAE: xor     esi, esi
0x677CB0: cmp     [ecx], esi
0x677CB2: mov     eax, 1
0x677CB7: jnz     short loc_677CC1
0x677CB9: mov     bl, al
0x677CBB: jmp     short loc_677CC3
0x677CBD: mov     esi, [esp+0Ch+var_4]
0x677CC1: xor     bl, bl
0x677CC3: test    al, 1
0x677CC5: jz      short loc_677CE3
0x677CC7: test    esi, esi
0x677CC9: jz      short loc_677CE3
0x677CCB: lea     eax, [esi+4]
0x677CCE: push    eax; lpAddend
0x677CCF: call    dword ptr ds:0A2807Ch
0x677CD5: test    eax, eax
0x677CD7: jnz     short loc_677CE3
0x677CD9: mov     edx, [esi]
0x677CDB: mov     eax, [edx]
0x677CDD: push    1
0x677CDF: mov     ecx, esi
0x677CE1: call    eax
0x677CE3: pop     esi
0x677CE4: mov     al, bl
0x677CE6: pop     ebx
0x677CE7: pop     ecx
0x677CE8: retn
