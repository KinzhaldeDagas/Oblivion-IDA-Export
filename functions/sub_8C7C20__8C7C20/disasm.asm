0x8C7C20: push    0FFFFFFFFh
0x8C7C22: push    offset SEH_8C7C20
0x8C7C27: mov     eax, large fs:0
0x8C7C2D: push    eax
0x8C7C2E: sub     esp, 18h
0x8C7C31: push    ebx
0x8C7C32: push    ebp
0x8C7C33: push    esi
0x8C7C34: push    edi
0x8C7C35: mov     eax, ds:0B30AACh
0x8C7C3A: xor     eax, esp
0x8C7C3C: push    eax
0x8C7C3D: lea     eax, [esp+38h+var_C]
0x8C7C41: mov     large fs:0, eax
0x8C7C47: mov     esi, ecx
0x8C7C49: mov     [esp+38h+var_1C], esi
0x8C7C4D: mov     eax, [esi]
0x8C7C4F: mov     edx, [eax+74h]
0x8C7C52: lea     ecx, [esp+38h+var_21]
0x8C7C56: push    ecx
0x8C7C57: mov     ecx, esi
0x8C7C59: call    edx
0x8C7C5B: mov     ebx, eax
0x8C7C5D: xor     ebp, ebp
0x8C7C5F: cmp     ebx, ebp
0x8C7C61: mov     [esp+38h+var_18], ebx
0x8C7C65: jz      loc_8C7D3C
0x8C7C6B: mov     esi, [esp+38h+arg_0]
0x8C7C6F: mov     ecx, esi
0x8C7C71: call    sub_7124D0
0x8C7C76: cmp     dword ptr [esi+4], 2
0x8C7C7A: mov     edi, eax
0x8C7C7C: mov     [esp+38h+var_20], edi
0x8C7C80: jnb     short loc_8C7CDB
0x8C7C82: lea     esi, [ebx+8]
0x8C7C85: push    edi
0x8C7C86: mov     ecx, esi
0x8C7C88: call    sub_8C69C0
0x8C7C8D: cmp     edi, ebp
0x8C7C8F: jbe     short loc_8C7CDB
0x8C7C91: mov     [esp+38h+var_14], ebp
0x8C7C95: mov     [esp+38h+var_10], ebp
0x8C7C99: mov     ebp, edi
0x8C7C9B: jmp     short loc_8C7CA0
0x8C7C9D: align 10h
0x8C7CA0: mov     edi, [esi+0Ch]
0x8C7CA3: cmp     edi, [esi+8]
0x8C7CA6: mov     [esp+38h+var_4], 0
0x8C7CAE: jb      short loc_8C7CBD
0x8C7CB0: mov     eax, [esi+14h]
0x8C7CB3: add     eax, edi
0x8C7CB5: push    eax
0x8C7CB6: mov     ecx, esi
0x8C7CB8: call    sub_8C69C0
0x8C7CBD: lea     ecx, [esp+38h+var_14]
0x8C7CC1: push    ecx
0x8C7CC2: push    edi
0x8C7CC3: mov     ecx, esi
0x8C7CC5: call    sub_8C68D0
0x8C7CCA: sub     ebp, 1
0x8C7CCD: mov     [esp+38h+var_4], 0FFFFFFFFh
0x8C7CD5: jnz     short loc_8C7CA0
0x8C7CD7: mov     edi, [esp+38h+var_20]
0x8C7CDB: xor     ebp, ebp
0x8C7CDD: test    edi, edi
0x8C7CDF: jbe     short loc_8C7D38
0x8C7CE1: jmp     short loc_8C7CE7
0x8C7CE3: mov     ebx, [esp+38h+var_18]
0x8C7CE7: mov     ecx, [esp+38h+arg_0]
0x8C7CEB: call    sub_7124A0
0x8C7CF0: mov     edx, [ebx+0Ch]
0x8C7CF3: mov     esi, [edx+ebp*8]
0x8C7CF6: lea     ebx, [edx+ebp*8]
0x8C7CF9: mov     edi, eax
0x8C7CFB: cmp     esi, edi
0x8C7CFD: jz      short loc_8C7D2F
0x8C7CFF: test    esi, esi
0x8C7D01: jz      short loc_8C7D1F
0x8C7D03: lea     eax, [esi+4]
0x8C7D06: push    eax; lpAddend
0x8C7D07: call    dword ptr ds:0A2807Ch
0x8C7D0D: test    eax, eax
0x8C7D0F: jnz     short loc_8C7D1F
0x8C7D11: test    esi, esi
0x8C7D13: jz      short loc_8C7D1F
0x8C7D15: mov     edx, [esi]
0x8C7D17: mov     eax, [edx]
0x8C7D19: push    1
0x8C7D1B: mov     ecx, esi
0x8C7D1D: call    eax
0x8C7D1F: test    edi, edi
0x8C7D21: mov     [ebx], edi
0x8C7D23: jz      short loc_8C7D2F
0x8C7D25: add     edi, 4
0x8C7D28: push    edi; lpAddend
0x8C7D29: call    dword ptr ds:0A28078h
0x8C7D2F: add     ebp, 1
0x8C7D32: cmp     ebp, [esp+38h+var_20]
0x8C7D36: jb      short loc_8C7CE3
0x8C7D38: mov     esi, [esp+38h+var_1C]
0x8C7D3C: mov     ecx, [esp+38h+arg_0]
0x8C7D40: push    ecx
0x8C7D41: mov     ecx, esi
0x8C7D43: call    sub_8A2600
0x8C7D48: mov     ecx, dword ptr [esp+38h+var_C]
0x8C7D4C: mov     large fs:0, ecx
0x8C7D53: pop     ecx
0x8C7D54: pop     edi
0x8C7D55: pop     esi
0x8C7D56: pop     ebp
0x8C7D57: pop     ebx
0x8C7D58: add     esp, 24h
0x8C7D5B: retn    4
