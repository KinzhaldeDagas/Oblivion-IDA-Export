0x7C1F50: push    ecx
0x7C1F51: push    ebx
0x7C1F52: push    ebp
0x7C1F53: mov     ebp, ecx
0x7C1F55: mov     eax, [ebp+14h]
0x7C1F58: xor     ebx, ebx
0x7C1F5A: cmp     eax, ebx
0x7C1F5C: jz      short loc_7C1F72
0x7C1F5E: mov     edi, edi
0x7C1F60: cmp     [esp+0Ch+arg_4], bl
0x7C1F64: jnz     short loc_7C1F6C
0x7C1F66: mov     ecx, [eax+8]
0x7C1F69: mov     [ecx+10h], bl
0x7C1F6C: mov     eax, [eax]
0x7C1F6E: cmp     eax, ebx
0x7C1F70: jnz     short loc_7C1F60
0x7C1F72: mov     eax, [ebp+4]
0x7C1F75: cmp     eax, ebx
0x7C1F77: mov     [esp+0Ch+var_4], eax
0x7C1F7B: jz      short loc_7C1FE0
0x7C1F7D: push    esi
0x7C1F7E: push    edi
0x7C1F7F: nop
0x7C1F80: cmp     [esp+14h+arg_4], bl
0x7C1F84: mov     edi, [eax+8]
0x7C1F87: jnz     short loc_7C1FD4
0x7C1F89: cmp     [edi+10h], bl
0x7C1F8C: jnz     short loc_7C1FD1
0x7C1F8E: test    byte ptr [edi+0Ch], 20h
0x7C1F92: jnz     short loc_7C1FD1
0x7C1F94: lea     edx, [esp+14h+var_4]
0x7C1F98: push    edx
0x7C1F99: mov     ecx, ebp
0x7C1F9B: call    sub_7AA860
0x7C1FA0: mov     esi, [edi]
0x7C1FA2: cmp     esi, ebx
0x7C1FA4: jz      short loc_7C1FC2
0x7C1FA6: lea     eax, [esi+4]
0x7C1FA9: push    eax; lpAddend
0x7C1FAA: call    dword ptr ds:0A2807Ch
0x7C1FB0: test    eax, eax
0x7C1FB2: jnz     short loc_7C1FC2
0x7C1FB4: cmp     esi, ebx
0x7C1FB6: jz      short loc_7C1FC2
0x7C1FB8: mov     edx, [esi]
0x7C1FBA: mov     eax, [edx]
0x7C1FBC: push    1
0x7C1FBE: mov     ecx, esi
0x7C1FC0: call    eax
0x7C1FC2: push    edi
0x7C1FC3: call    FormHeapFree
0x7C1FC8: mov     eax, [esp+18h+var_4]
0x7C1FCC: add     esp, 4
0x7C1FCF: jmp     short loc_7C1FDA
0x7C1FD1: mov     [edi+10h], bl
0x7C1FD4: mov     eax, [eax]
0x7C1FD6: mov     [esp+14h+var_4], eax
0x7C1FDA: cmp     eax, ebx
0x7C1FDC: jnz     short loc_7C1F80
0x7C1FDE: pop     edi
0x7C1FDF: pop     esi
0x7C1FE0: pop     ebp
0x7C1FE1: pop     ebx
0x7C1FE2: pop     ecx
0x7C1FE3: retn    8
