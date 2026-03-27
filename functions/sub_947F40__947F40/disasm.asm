0x947F40: sub     esp, 8
0x947F43: push    esi
0x947F44: push    edi
0x947F45: lea     edx, [esp+10h+var_8]
0x947F49: push    edx
0x947F4A: mov     edi, ecx
0x947F4C: mov     ecx, [esp+14h+arg_0]
0x947F50: mov     eax, [ecx]
0x947F52: lea     edx, [esp+14h+var_4]
0x947F56: xor     esi, esi
0x947F58: push    edx
0x947F59: mov     [esp+18h+var_4], esi
0x947F5D: mov     [esp+18h+var_8], esi
0x947F61: call    dword ptr [eax+8]
0x947F64: cmp     [esp+10h+var_8], esi
0x947F68: jle     short loc_947F89
0x947F6A: add     edi, 8
0x947F6D: lea     ecx, [ecx+0]
0x947F70: mov     eax, [esp+10h+var_4]
0x947F74: movzx   ecx, byte ptr [esi+eax]
0x947F78: push    ecx
0x947F79: mov     ecx, edi
0x947F7B: call    sub_8B1570
0x947F80: mov     eax, [esp+10h+var_8]
0x947F84: inc     esi
0x947F85: cmp     esi, eax
0x947F87: jl      short loc_947F70
0x947F89: pop     edi
0x947F8A: pop     esi
0x947F8B: add     esp, 8
0x947F8E: retn    4
