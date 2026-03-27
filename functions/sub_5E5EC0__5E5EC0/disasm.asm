0x5E5EC0: push    ecx
0x5E5EC1: push    ebp
0x5E5EC2: push    esi
0x5E5EC3: mov     esi, ecx
0x5E5EC5: mov     ecx, [esi+58h]
0x5E5EC8: push    edi
0x5E5EC9: xor     edi, edi
0x5E5ECB: test    ecx, ecx
0x5E5ECD: jz      short loc_5E5EDD
0x5E5ECF: mov     eax, [ecx]
0x5E5ED1: mov     edx, [eax+8]
0x5E5ED4: call    edx
0x5E5ED6: test    eax, eax
0x5E5ED8: jnz     short loc_5E5EDD
0x5E5EDA: mov     edi, [esi+58h]
0x5E5EDD: mov     ecx, ds:0B33B00h
0x5E5EE3: call    sub_45A500
0x5E5EE8: test    al, al
0x5E5EEA: jnz     short loc_5E5F0C
0x5E5EEC: test    edi, edi
0x5E5EEE: jz      short loc_5E5EFE
0x5E5EF0: mov     eax, [edi]
0x5E5EF2: mov     edx, [eax+31Ch]
0x5E5EF8: push    1
0x5E5EFA: mov     ecx, edi
0x5E5EFC: jmp     short loc_5E5F0A
0x5E5EFE: mov     eax, [esi]
0x5E5F00: mov     edx, [eax+150h]
0x5E5F06: push    0
0x5E5F08: mov     ecx, esi
0x5E5F0A: call    edx
0x5E5F0C: mov     eax, [esp+10h+arg_0]
0x5E5F10: push    eax
0x5E5F11: mov     ecx, esi
0x5E5F13: call    sub_4DDB00
0x5E5F18: mov     edx, [esi]
0x5E5F1A: mov     eax, [edx+170h]
0x5E5F20: mov     ecx, esi
0x5E5F22: call    eax
0x5E5F24: movzx   ecx, byte ptr [eax+4]
0x5E5F28: xor     edi, edi
0x5E5F2A: xor     ebp, ebp
0x5E5F2C: sub     ecx, 23h ; '#'
0x5E5F2F: jz      short loc_5E5F3A
0x5E5F31: sub     ecx, 1
0x5E5F34: jnz     short loc_5E5F3C
0x5E5F36: mov     ebp, eax
0x5E5F38: jmp     short loc_5E5F3C
0x5E5F3A: mov     edi, eax
0x5E5F3C: cmp     dword ptr [esi+58h], 0
0x5E5F40: mov     byte ptr [esp+10h+var_4], 1
0x5E5F45: mov     byte ptr [esp+10h+arg_0], 1
0x5E5F4A: jz      short loc_5E5F7B
0x5E5F4C: mov     ecx, [esi+58h]
0x5E5F4F: mov     edx, [ecx]
0x5E5F51: mov     eax, [edx+184h]
0x5E5F57: call    eax
0x5E5F59: test    eax, eax
0x5E5F5B: jz      short loc_5E5F7B
0x5E5F5D: mov     eax, [eax+1Ch]
0x5E5F60: mov     ecx, eax
0x5E5F62: shr     ecx, 14h
0x5E5F65: test    cl, 1
0x5E5F68: jz      short loc_5E5F6F
0x5E5F6A: mov     byte ptr [esp+10h+var_4], 0
0x5E5F6F: shr     eax, 15h
0x5E5F72: test    al, 1
0x5E5F74: jz      short loc_5E5F7B
0x5E5F76: mov     byte ptr [esp+10h+arg_0], 0
0x5E5F7B: test    edi, edi
0x5E5F7D: jz      short loc_5E5F9C
0x5E5F7F: mov     edx, [esp+10h+arg_0]
0x5E5F83: mov     eax, [esp+10h+var_4]
0x5E5F87: push    1; char
0x5E5F89: push    0; int
0x5E5F8B: push    edx; int
0x5E5F8C: push    eax; int
0x5E5F8D: push    esi; int
0x5E5F8E: mov     ecx, edi; int
0x5E5F90: call    sub_5227A0
0x5E5F95: pop     edi
0x5E5F96: pop     esi
0x5E5F97: pop     ebp
0x5E5F98: pop     ecx
0x5E5F99: retn    4
0x5E5F9C: test    ebp, ebp
0x5E5F9E: jz      short loc_5E5FB4
0x5E5FA0: mov     ecx, [esp+10h+arg_0]
0x5E5FA4: mov     edx, [esp+10h+var_4]
0x5E5FA8: push    1
0x5E5FAA: push    ecx
0x5E5FAB: push    edx
0x5E5FAC: push    esi
0x5E5FAD: mov     ecx, ebp
0x5E5FAF: call    sub_51E240
0x5E5FB4: pop     edi
0x5E5FB5: pop     esi
0x5E5FB6: pop     ebp
0x5E5FB7: pop     ecx
0x5E5FB8: retn    4
