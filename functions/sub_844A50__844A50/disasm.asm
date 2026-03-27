0x844A50: push    0FFFFFFFFh
0x844A52: push    offset SEH_880560
0x844A57: mov     eax, large fs:0
0x844A5D: push    eax
0x844A5E: push    ebx
0x844A5F: push    ebp
0x844A60: push    esi
0x844A61: push    edi
0x844A62: mov     eax, ds:0B30AACh
0x844A67: xor     eax, esp
0x844A69: push    eax
0x844A6A: lea     eax, [esp+20h+var_C]
0x844A6E: mov     large fs:0, eax
0x844A74: mov     esi, ecx
0x844A76: mov     eax, [esp+20h+arg_8]
0x844A7A: mov     eax, [eax+10h]
0x844A7D: mov     edx, [esi]
0x844A7F: mov     edx, [edx+0BCh]
0x844A85: mov     edi, ds:0B45A38h
0x844A8B: push    eax
0x844A8C: mov     eax, [esp+24h+arg_0]
0x844A90: push    0
0x844A92: push    eax
0x844A93: call    edx
0x844A95: mov     ecx, [esp+20h+arg_C]
0x844A99: mov     eax, [edi+24h]
0x844A9C: mov     ebp, [eax]
0x844A9E: push    0
0x844AA0: push    ecx
0x844AA1: mov     ecx, esi
0x844AA3: call    sub_848FD0
0x844AA8: mov     ebx, [ebp+4]
0x844AAB: cmp     ebx, eax
0x844AAD: mov     [esp+20h+arg_8], eax
0x844AB1: jz      short loc_844AE8
0x844AB3: test    ebx, ebx
0x844AB5: jz      short loc_844AD7
0x844AB7: lea     edx, [ebx+4]
0x844ABA: push    edx; lpAddend
0x844ABB: call    dword ptr ds:0A2807Ch
0x844AC1: test    eax, eax
0x844AC3: jnz     short loc_844AD3
0x844AC5: test    ebx, ebx
0x844AC7: jz      short loc_844AD3
0x844AC9: mov     eax, [ebx]
0x844ACB: mov     edx, [eax]
0x844ACD: push    1
0x844ACF: mov     ecx, ebx
0x844AD1: call    edx
0x844AD3: mov     eax, [esp+20h+arg_8]
0x844AD7: test    eax, eax
0x844AD9: mov     [ebp+4], eax
0x844ADC: jz      short loc_844AE8
0x844ADE: add     eax, 4
0x844AE1: push    eax; lpAddend
0x844AE2: call    dword ptr ds:0A28078h
0x844AE8: mov     eax, [esp+20h+arg_C]
0x844AEC: push    eax
0x844AED: push    ebp
0x844AEE: mov     ecx, esi
0x844AF0: call    sub_848FA0
0x844AF5: mov     ebx, 1
0x844AFA: add     [edi+60h], ebx
0x844AFD: mov     [esp+20h+arg_C], edi
0x844B01: mov     edx, [esi+38h]
0x844B04: lea     ecx, [esp+20h+arg_C]
0x844B08: push    ecx
0x844B09: push    edx
0x844B0A: lea     ecx, [esi+40h]
0x844B0D: mov     [esp+28h+var_4], 0
0x844B15: call    sub_76CE40
0x844B1A: or      eax, 0FFFFFFFFh
0x844B1D: add     [edi+60h], eax
0x844B20: mov     [esp+20h+var_4], eax
0x844B24: jnz     short loc_844B2D
0x844B26: mov     ecx, edi
0x844B28: call    sub_7604D0
0x844B2D: add     [esi+38h], ebx
0x844B30: mov     ecx, dword ptr [esp+20h+var_C]
0x844B34: mov     large fs:0, ecx
0x844B3B: pop     ecx
0x844B3C: pop     edi
0x844B3D: pop     esi
0x844B3E: pop     ebp
0x844B3F: pop     ebx
0x844B40: add     esp, 0Ch
0x844B43: retn    10h
