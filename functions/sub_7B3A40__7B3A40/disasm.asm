0x7B3A40: mov     ecx, ds:0B2C340h
0x7B3A46: sub     esp, 0Ch
0x7B3A49: xor     eax, eax
0x7B3A4B: test    ecx, ecx
0x7B3A4D: jbe     short loc_7B3A62
0x7B3A4F: mov     edx, ds:0B2C344h
0x7B3A55: cmp     dword ptr [edx+eax*4], 0
0x7B3A59: jnz     short loc_7B3AD2
0x7B3A5B: add     eax, 1
0x7B3A5E: cmp     eax, ecx
0x7B3A60: jb      short loc_7B3A55
0x7B3A62: xor     eax, eax
0x7B3A64: cmp     dword ptr ds:0B2C348h, 0
0x7B3A6B: mov     [esp+0Ch+var_8], eax
0x7B3A6F: mov     [esp+0Ch+var_C], 0
0x7B3A76: jbe     loc_7B3B63
0x7B3A7C: test    eax, eax
0x7B3A7E: jz      loc_7B3B63
0x7B3A84: push    ebx
0x7B3A85: push    ebp
0x7B3A86: mov     ebp, [esp+14h+arg_0]
0x7B3A8A: push    esi
0x7B3A8B: push    edi
0x7B3A8C: lea     esp, [esp+0]
0x7B3A90: lea     eax, [esp+1Ch+var_C]
0x7B3A94: push    eax
0x7B3A95: lea     ecx, [esp+20h+var_4]
0x7B3A99: push    ecx
0x7B3A9A: lea     edx, [esp+24h+var_8]
0x7B3A9E: push    edx
0x7B3A9F: mov     ecx, offset off_B2C33C
0x7B3AA4: call    sub_452600
0x7B3AA9: mov     ebx, [esp+1Ch+var_C]
0x7B3AAD: test    ebx, ebx
0x7B3AAF: jz      loc_7B3B54
0x7B3AB5: mov     eax, [ebx+24h]
0x7B3AB8: test    eax, eax
0x7B3ABA: jz      short loc_7B3B26
0x7B3ABC: lea     esp, [esp+0]
0x7B3AC0: cmp     ebp, [eax+8]
0x7B3AC3: lea     ecx, [eax+8]
0x7B3AC6: mov     edx, eax
0x7B3AC8: mov     eax, [eax]
0x7B3ACA: jz      short loc_7B3AD7
0x7B3ACC: test    eax, eax
0x7B3ACE: jnz     short loc_7B3AC0
0x7B3AD0: jmp     short loc_7B3B26
0x7B3AD2: mov     eax, [edx+eax*4]
0x7B3AD5: jmp     short loc_7B3A64
0x7B3AD7: test    edx, edx
0x7B3AD9: jz      short loc_7B3B26
0x7B3ADB: mov     esi, [ebx+10h]
0x7B3ADE: test    esi, esi
0x7B3AE0: jz      short loc_7B3B26
0x7B3AE2: mov     edi, [esi+8]
0x7B3AE5: test    edi, edi
0x7B3AE7: lea     eax, [esi+8]
0x7B3AEA: mov     [esp+1Ch+var_4], esi
0x7B3AEE: mov     esi, [esi]
0x7B3AF0: jz      short loc_7B3B22
0x7B3AF2: push    ebp
0x7B3AF3: mov     ecx, edi
0x7B3AF5: call    sub_802A60
0x7B3AFA: test    eax, eax
0x7B3AFC: jnz     short loc_7B3B22
0x7B3AFE: lea     eax, [esp+1Ch+var_4]
0x7B3B02: push    eax
0x7B3B03: lea     ecx, [ebx+0Ch]
0x7B3B06: call    sub_7AA860
0x7B3B0B: mov     ecx, edi
0x7B3B0D: call    sub_803210
0x7B3B12: push    edi
0x7B3B13: call    FormHeapFree
0x7B3B18: add     esp, 4
0x7B3B1B: sub     dword ptr ds:0B42D5Ch, 1
0x7B3B22: test    esi, esi
0x7B3B24: jnz     short loc_7B3AE2
0x7B3B26: mov     eax, [ebx+24h]
0x7B3B29: test    eax, eax
0x7B3B2B: lea     ecx, [ebx+20h]
0x7B3B2E: jz      short loc_7B3B40
0x7B3B30: cmp     ebp, [eax+8]
0x7B3B33: lea     edx, [eax+8]
0x7B3B36: mov     esi, eax
0x7B3B38: mov     eax, [eax]
0x7B3B3A: jz      short loc_7B3B42
0x7B3B3C: test    eax, eax
0x7B3B3E: jnz     short loc_7B3B30
0x7B3B40: xor     esi, esi
0x7B3B42: test    esi, esi
0x7B3B44: mov     [esp+1Ch+var_4], esi
0x7B3B48: jz      short loc_7B3B54
0x7B3B4A: lea     edx, [esp+1Ch+var_4]
0x7B3B4E: push    edx
0x7B3B4F: call    sub_7AA860
0x7B3B54: cmp     [esp+1Ch+var_8], 0
0x7B3B59: jnz     loc_7B3A90
0x7B3B5F: pop     edi
0x7B3B60: pop     esi
0x7B3B61: pop     ebp
0x7B3B62: pop     ebx
0x7B3B63: add     esp, 0Ch
0x7B3B66: retn
