0x948E80: push    esi
0x948E81: mov     esi, ecx
0x948E83: mov     eax, [esi+0Ch]
0x948E86: mov     ecx, [esi+8]
0x948E89: and     eax, 3FFFFFFFh
0x948E8E: add     ecx, 46h ; 'F'
0x948E91: cmp     eax, ecx
0x948E93: jle     loc_948F4D
0x948E99: mov     edx, [esp+4+arg_4]
0x948E9D: test    [esi+1Ch], edx
0x948EA0: jz      loc_948F4D
0x948EA6: push    ebx
0x948EA7: push    ebp
0x948EA8: mov     ebp, [esp+0Ch+arg_C]
0x948EAC: xor     ebx, ebx
0x948EAE: cmp     ebp, ebx
0x948EB0: push    edi
0x948EB1: mov     edi, [esp+10h+arg_10]
0x948EB5: jnz     short loc_948EBF
0x948EB7: cmp     edi, ebx
0x948EB9: jz      loc_948F4A
0x948EBF: mov     eax, [esp+10h+arg_0]
0x948EC3: cmp     eax, ebx
0x948EC5: mov     [esp+10h+arg_4], ebx
0x948EC9: jz      short loc_948EE9
0x948ECB: push    eax
0x948ECC: call    sub_8B1860
0x948ED1: mov     ebx, eax
0x948ED3: add     esp, 4
0x948ED6: inc     ebx
0x948ED7: mov     eax, ebx
0x948ED9: and     eax, 80000001h
0x948EDE: jns     short loc_948EE5
0x948EE0: dec     eax
0x948EE1: or      eax, 0FFFFFFFEh
0x948EE4: inc     eax
0x948EE5: mov     [esp+10h+arg_4], eax
0x948EE9: mov     eax, [esp+10h+arg_4]
0x948EED: add     eax, ebx
0x948EEF: push    eax
0x948EF0: add     esi, 4
0x948EF3: call    sub_948DF0
0x948EF8: mov     dl, byte ptr [esp+14h+arg_4]
0x948EFC: mov     esi, eax
0x948EFE: mov     cl, bl
0x948F00: add     cl, dl
0x948F02: add     esp, 4
0x948F05: test    edi, edi
0x948F07: mov     byte ptr [esi], 43h ; 'C'
0x948F0A: mov     [esi+1], cl
0x948F0D: mov     [esi+2], bp
0x948F11: jnz     short loc_948F17
0x948F13: xor     eax, eax
0x948F15: jmp     short loc_948F23
0x948F17: mov     ecx, ds:0BA7D98h
0x948F1D: mov     edx, [ecx]
0x948F1F: push    edi
0x948F20: call    dword ptr [edx+28h]
0x948F23: test    ebx, ebx
0x948F25: mov     [esi+4], ax
0x948F29: jle     short loc_948F4A
0x948F2B: mov     eax, [esp+10h+arg_0]
0x948F2F: push    ebx
0x948F30: push    eax
0x948F31: lea     ecx, [esi+6]
0x948F34: push    ecx
0x948F35: call    sub_8B1890
0x948F3A: mov     eax, [esp+1Ch+arg_4]
0x948F3E: add     esp, 0Ch
0x948F41: test    eax, eax
0x948F43: jz      short loc_948F4A
0x948F45: mov     byte ptr [esi+ebx+6], 0
0x948F4A: pop     edi
0x948F4B: pop     ebp
0x948F4C: pop     ebx
0x948F4D: pop     esi
0x948F4E: retn    14h
