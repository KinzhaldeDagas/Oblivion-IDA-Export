0x918E90: push    ebp
0x918E91: mov     ebp, esp
0x918E93: and     esp, 0FFFFFFF0h
0x918E96: sub     esp, 14h
0x918E99: push    ebx
0x918E9A: push    esi
0x918E9B: mov     esi, ecx
0x918E9D: mov     ecx, [ebp+arg_4]
0x918EA0: mov     eax, ecx
0x918EA2: and     eax, 3
0x918EA5: xor     edx, edx
0x918EA7: cmp     eax, 3
0x918EAA: push    edi
0x918EAB: jnz     loc_918F5B
0x918EB1: test    edx, edx
0x918EB3: jnz     loc_918F5B
0x918EB9: mov     eax, [ebp+arg_8]
0x918EBC: and     ecx, 0FFFFFFFCh
0x918EBF: mov     [ebp+arg_8], eax
0x918EC2: cmp     byte ptr [ecx+18h], 1
0x918EC6: jnz     loc_918F4C
0x918ECC: mov     edi, [ecx+10h]
0x918ECF: add     edi, ecx
0x918ED1: jz      short loc_918F4C
0x918ED3: mov     ecx, [edi+8]
0x918ED6: mov     [esi+28h], ecx
0x918ED9: mov     al, [edi+91h]
0x918EDF: test    al, al
0x918EE1: jnz     short loc_918F4C
0x918EE3: mov     edx, [edi+8]
0x918EE6: mov     eax, ecx
0x918EE8: cmp     edx, eax
0x918EEA: jnz     short loc_918F4C
0x918EEC: mov     eax, [edi+50h]
0x918EEF: mov     ebx, [ebp+arg_C]
0x918EF2: push    ebx
0x918EF3: add     eax, 10h
0x918EF6: push    eax
0x918EF7: lea     ecx, [esp+28h+var_10]
0x918EFB: call    sub_88FD10
0x918F00: mov     ecx, ds:0BA7D98h
0x918F06: mov     edx, [ecx]
0x918F08: push    26h ; '&'
0x918F0A: push    50h ; 'P'
0x918F0C: call    dword ptr [edx+10h]
0x918F0F: push    edi
0x918F10: push    3F733333h
0x918F15: push    3E99999Ah
0x918F1A: push    3F000000h
0x918F1F: push    ebx
0x918F20: lea     ecx, [esp+34h+var_10]
0x918F24: push    ecx
0x918F25: mov     ecx, eax
0x918F27: mov     word ptr [eax+4], 50h ; 'P'
0x918F2D: call    sub_8B89C0
0x918F32: mov     edx, [esi+30h]
0x918F35: push    edx
0x918F36: mov     ecx, eax
0x918F38: mov     [esi+2Ch], eax
0x918F3B: call    sub_8B8A80
0x918F40: mov     eax, [esi+2Ch]
0x918F43: mov     ecx, [esi+28h]
0x918F46: push    eax
0x918F47: call    sub_89BAE0
0x918F4C: mov     eax, [ebp+arg_0]
0x918F4F: mov     byte ptr [eax], 1
0x918F52: pop     edi
0x918F53: pop     esi
0x918F54: pop     ebx
0x918F55: mov     esp, ebp
0x918F57: pop     ebp
0x918F58: retn    10h
0x918F5B: or      eax, edx
0x918F5D: jz      loc_918EC2
0x918F63: mov     eax, [ebp+arg_0]
0x918F66: pop     edi
0x918F67: pop     esi
0x918F68: mov     byte ptr [eax], 0
0x918F6B: pop     ebx
0x918F6C: mov     esp, ebp
0x918F6E: pop     ebp
0x918F6F: retn    10h
