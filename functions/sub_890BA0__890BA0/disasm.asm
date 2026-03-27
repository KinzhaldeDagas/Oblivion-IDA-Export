0x890BA0: push    ecx
0x890BA1: xor     edx, edx
0x890BA3: mov     [esp+4+var_4], edx
0x890BA6: mov     eax, [ecx+36Ch]
0x890BAC: cmp     eax, 2
0x890BAF: push    esi
0x890BB0: push    edi
0x890BB1: jge     short loc_890BC0
0x890BB3: mov     esi, [esp+0Ch+var_4]
0x890BB7: lea     eax, [ecx+eax*4+374h]
0x890BBE: jmp     short loc_890BCF
0x890BC0: xor     esi, esi
0x890BC2: mov     [esp+0Ch+var_4], esi
0x890BC6: lea     eax, [esp+0Ch+var_4]
0x890BCA: mov     edx, 1
0x890BCF: test    dl, 1
0x890BD2: mov     edi, [eax]
0x890BD4: jz      short loc_890BF2
0x890BD6: test    esi, esi
0x890BD8: jz      short loc_890BF2
0x890BDA: lea     eax, [esi+4]
0x890BDD: push    eax; lpAddend
0x890BDE: call    dword ptr ds:0A2807Ch
0x890BE4: test    eax, eax
0x890BE6: jnz     short loc_890BF2
0x890BE8: mov     edx, [esi]
0x890BEA: mov     eax, [edx]
0x890BEC: push    1
0x890BEE: mov     ecx, esi
0x890BF0: call    eax
0x890BF2: mov     eax, edi
0x890BF4: pop     edi
0x890BF5: pop     esi
0x890BF6: pop     ecx
0x890BF7: retn
