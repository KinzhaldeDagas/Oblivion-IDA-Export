0x616980: sub     esp, 8
0x616983: push    ebx
0x616984: mov     ebx, [esp+0Ch+arg_4]
0x616988: push    ebp
0x616989: push    esi
0x61698A: push    edi
0x61698B: mov     edi, ecx
0x61698D: mov     eax, [edi+80h]
0x616993: xor     ebp, ebp
0x616995: xor     esi, esi
0x616997: cmp     eax, ebp
0x616999: mov     [esp+18h+var_5], 0
0x61699E: mov     [esp+18h+var_4], ebp
0x6169A2: jz      short loc_6169F8
0x6169A4: cmp     ebx, 4
0x6169A7: jnz     short loc_6169F8
0x6169A9: mov     ecx, [esp+18h+arg_8]
0x6169AD: push    1
0x6169AF: push    ecx
0x6169B0: push    eax
0x6169B1: mov     ecx, edi
0x6169B3: call    sub_613BB0
0x6169B8: test    al, al
0x6169BA: mov     edx, [edi+80h]
0x6169C0: jz      short loc_6169EF
0x6169C2: mov     eax, [edx]
0x6169C4: mov     ecx, [edi+3Ch]
0x6169C7: push    eax
0x6169C8: call    sub_5E0970
0x6169CD: push    ecx
0x6169CE: fstp    [esp+1Ch+var_1C]; float
0x6169D1: call    sub_546CA0
0x6169D6: mov     ecx, [esp+1Ch+arg_0]
0x6169DA: add     esp, 4
0x6169DD: fstp    dword ptr [ecx]
0x6169DF: mov     eax, [edi+80h]
0x6169E5: pop     edi
0x6169E6: pop     esi
0x6169E7: pop     ebp
0x6169E8: pop     ebx
0x6169E9: add     esp, 8
0x6169EC: retn    0Ch
0x6169EF: mov     [esp+18h+var_4], edx
0x6169F3: mov     [esp+18h+var_5], 1
0x6169F8: mov     eax, [edi+7Ch]
0x6169FB: cmp     eax, ebp
0x6169FD: jz      short loc_616A4F
0x6169FF: cmp     ebx, 3
0x616A02: jnz     short loc_616A4F
0x616A04: mov     ecx, [esp+18h+arg_8]
0x616A08: push    1
0x616A0A: push    ecx
0x616A0B: push    eax
0x616A0C: mov     ecx, edi
0x616A0E: call    sub_613BB0
0x616A13: test    al, al
0x616A15: mov     edx, [edi+7Ch]
0x616A18: jz      short loc_616A44
0x616A1A: mov     eax, [edx]
0x616A1C: mov     ecx, [edi+3Ch]
0x616A1F: push    eax
0x616A20: call    sub_5E0970
0x616A25: push    ecx
0x616A26: fstp    [esp+1Ch+var_1C]; float
0x616A29: call    sub_546CA0
0x616A2E: mov     ecx, [esp+1Ch+arg_0]
0x616A32: add     esp, 4
0x616A35: fstp    dword ptr [ecx]
0x616A37: mov     eax, [edi+7Ch]
0x616A3A: pop     edi
0x616A3B: pop     esi
0x616A3C: pop     ebp
0x616A3D: pop     ebx
0x616A3E: add     esp, 8
0x616A41: retn    0Ch
0x616A44: mov     [esp+18h+var_4], edx
0x616A48: mov     [esp+18h+var_5], 1
0x616A4D: jmp     short loc_616A62
0x616A4F: cmp     ebx, 4
0x616A52: jnz     short loc_616A59
0x616A54: mov     ebx, [edi+5Ch]
0x616A57: jmp     short loc_616A65
0x616A59: cmp     ebx, 3
0x616A5C: jnz     loc_616B89
0x616A62: mov     ebx, [edi+60h]
0x616A65: cmp     ebx, ebp
0x616A67: jz      loc_616B89
0x616A6D: mov     eax, ebx
0x616A6F: nop
0x616A70: cmp     [eax], esi
0x616A72: jz      short loc_616A77
0x616A74: add     ebp, 1
0x616A77: mov     eax, [eax+4]
0x616A7A: test    eax, eax
0x616A7C: jnz     short loc_616A70
0x616A7E: cmp     ebp, 1
0x616A81: jnz     short loc_616A8A
0x616A83: mov     esi, [ebx]
0x616A85: jmp     loc_616B1F
0x616A8A: test    ebp, ebp
0x616A8C: jz      loc_616B89
0x616A92: push    0; Seed
0x616A94: call    GetRandomLargeInteger?
0x616A99: cdq
0x616A9A: lea     ecx, [ebp+ebp+0]
0x616A9E: idiv    ecx
0x616AA0: add     esp, 4
0x616AA3: cmp     edx, ebp
0x616AA5: jge     short loc_616AFD
0x616AA7: test    edx, edx
0x616AA9: jnz     short loc_616AC8
0x616AAB: mov     edx, [esp+18h+arg_8]
0x616AAF: mov     eax, [ebx]
0x616AB1: push    1
0x616AB3: push    edx
0x616AB4: push    eax
0x616AB5: mov     ecx, edi
0x616AB7: call    sub_613BB0
0x616ABC: test    al, al
0x616ABE: jz      short loc_616AC4
0x616AC0: mov     esi, [ebx]
0x616AC2: jmp     short loc_616AF9
0x616AC4: xor     esi, esi
0x616AC6: jmp     short loc_616AF9
0x616AC8: xor     eax, eax
0x616ACA: test    edx, edx
0x616ACC: mov     esi, ebx
0x616ACE: jle     short loc_616ADE
0x616AD0: test    esi, esi
0x616AD2: jz      short loc_616AFD
0x616AD4: mov     esi, [esi+4]
0x616AD7: add     eax, 1
0x616ADA: cmp     eax, edx
0x616ADC: jl      short loc_616AD0
0x616ADE: test    esi, esi
0x616AE0: jz      short loc_616AFD
0x616AE2: mov     ecx, [esp+18h+arg_8]
0x616AE6: mov     eax, [esi]
0x616AE8: push    1
0x616AEA: push    ecx
0x616AEB: push    eax
0x616AEC: mov     ecx, edi
0x616AEE: call    sub_613BB0
0x616AF3: test    al, al
0x616AF5: jz      short loc_616AFD
0x616AF7: mov     esi, [esi]
0x616AF9: test    esi, esi
0x616AFB: jnz     short loc_616B23
0x616AFD: mov     esi, ebx
0x616AFF: mov     ebx, [esp+18h+arg_8]
0x616B03: mov     eax, [esi]
0x616B05: test    eax, eax
0x616B07: jz      short loc_616B3E
0x616B09: push    1
0x616B0B: push    ebx
0x616B0C: push    eax
0x616B0D: mov     ecx, edi
0x616B0F: call    sub_613BB0
0x616B14: test    al, al
0x616B16: jnz     short loc_616B3E
0x616B18: mov     esi, [esi+4]
0x616B1B: test    esi, esi
0x616B1D: jnz     short loc_616B03
0x616B1F: test    esi, esi
0x616B21: jz      short loc_616B89
0x616B23: cmp     esi, [esp+18h+var_4]
0x616B27: jnz     short loc_616B42
0x616B29: cmp     [esp+18h+var_5], 0
0x616B2E: jz      short loc_616B42
0x616B30: xor     esi, esi
0x616B32: pop     edi
0x616B33: mov     eax, esi
0x616B35: pop     esi
0x616B36: pop     ebp
0x616B37: pop     ebx
0x616B38: add     esp, 8
0x616B3B: retn    0Ch
0x616B3E: mov     esi, [esi]
0x616B40: jmp     short loc_616B1F
0x616B42: test    esi, esi
0x616B44: jz      short loc_616B89
0x616B46: mov     edx, [esi]
0x616B48: mov     ecx, [edi+3Ch]
0x616B4B: push    edx
0x616B4C: call    sub_5E0970
0x616B51: cmp     [esp+18h+arg_4], 4
0x616B56: push    ecx
0x616B57: fstp    [esp+1Ch+var_1C]; float
0x616B5A: jnz     short loc_616B63
0x616B5C: call    sub_546CA0
0x616B61: jmp     short loc_616B68
0x616B63: call    sub_546CA0
0x616B68: mov     eax, [esp+1Ch+arg_0]
0x616B6C: fstp    dword ptr [eax]
0x616B6E: mov     ecx, [esi]
0x616B70: add     esp, 4
0x616B73: test    ecx, ecx
0x616B75: jz      short loc_616B89
0x616B77: call    sub_419D90
0x616B7C: test    al, al
0x616B7E: jnz     short loc_616B89
0x616B80: mov     ecx, [esi]
0x616B82: push    0
0x616B84: call    sub_41A610
0x616B89: pop     edi
0x616B8A: mov     eax, esi
0x616B8C: pop     esi
0x616B8D: pop     ebp
0x616B8E: pop     ebx
0x616B8F: add     esp, 8
0x616B92: retn    0Ch
