0x8A6F90: push    ebx
0x8A6F91: mov     ebx, [esp+4+arg_8]
0x8A6F95: test    ebx, ebx
0x8A6F97: push    ebp
0x8A6F98: push    esi
0x8A6F99: mov     esi, [esp+0Ch+arg_0]
0x8A6F9D: push    edi
0x8A6F9E: jz      short loc_8A6FB0
0x8A6FA0: mov     edi, [esp+10h+arg_C]
0x8A6FA4: cmp     [esi+4], edi
0x8A6FA7: jge     short loc_8A6FB0
0x8A6FA9: mov     ebp, 80000000h
0x8A6FAE: jmp     short loc_8A6FEE
0x8A6FB0: mov     eax, large fs:2Ch
0x8A6FB6: mov     ecx, ds:0BA9DE4h
0x8A6FBC: mov     edi, [esi+8]
0x8A6FBF: mov     edx, [eax+ecx*4]
0x8A6FC2: mov     eax, [edx+19Ch]
0x8A6FC8: sar     edi, 1
0x8A6FCA: and     edi, 1FFFFFFFh
0x8A6FD0: test    eax, eax
0x8A6FD2: jnz     short loc_8A6FD9
0x8A6FD4: mov     eax, ds:0BA7D9Ch
0x8A6FD9: mov     ecx, edi
0x8A6FDB: imul    ecx, [esp+10h+arg_4]
0x8A6FE0: push    14h
0x8A6FE2: push    ecx
0x8A6FE3: mov     ecx, eax
0x8A6FE5: call    sub_8A7560
0x8A6FEA: mov     ebx, eax
0x8A6FEC: xor     ebp, ebp
0x8A6FEE: mov     edx, [esi+4]
0x8A6FF1: imul    edx, [esp+10h+arg_4]
0x8A6FF6: mov     eax, [esi]
0x8A6FF8: push    edx
0x8A6FF9: push    eax
0x8A6FFA: push    ebx
0x8A6FFB: call    sub_8B1890
0x8A7000: mov     ecx, large fs:2Ch
0x8A7007: mov     edx, ds:0BA9DE4h
0x8A700D: mov     eax, [ecx+edx*4]
0x8A7010: mov     eax, [eax+19Ch]
0x8A7016: add     esp, 0Ch
0x8A7019: test    eax, eax
0x8A701B: jnz     short loc_8A7022
0x8A701D: mov     eax, ds:0BA7D9Ch
0x8A7022: mov     ecx, [esi+8]
0x8A7025: mov     edx, [esi]
0x8A7027: and     ecx, 3FFFFFFFh
0x8A702D: imul    ecx, [esp+10h+arg_4]
0x8A7032: push    14h
0x8A7034: push    ecx
0x8A7035: push    edx
0x8A7036: mov     ecx, eax
0x8A7038: call    sub_8A75D0
0x8A703D: mov     eax, [esi+8]
0x8A7040: and     eax, 40000000h
0x8A7045: or      eax, ebp
0x8A7047: or      eax, edi
0x8A7049: pop     edi
0x8A704A: mov     [esi], ebx
0x8A704C: mov     [esi+8], eax
0x8A704F: pop     esi
0x8A7050: pop     ebp
0x8A7051: pop     ebx
0x8A7052: retn
