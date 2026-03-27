0x432C30: push    0FFFFFFFFh
0x432C32: push    offset SEH_43C220
0x432C37: mov     eax, large fs:0
0x432C3D: push    eax
0x432C3E: sub     esp, 10h
0x432C41: push    ebx
0x432C42: push    ebp
0x432C43: push    esi
0x432C44: push    edi
0x432C45: mov     eax, ___security_cookie
0x432C4A: xor     eax, esp
0x432C4C: push    eax
0x432C4D: lea     eax, [esp+30h+var_C]
0x432C51: mov     large fs:0, eax
0x432C57: mov     esi, ecx
0x432C59: mov     eax, [esi]
0x432C5B: mov     ecx, [eax+0Ch]
0x432C5E: mov     edx, [esp+30h+Comperand]
0x432C62: lea     eax, [ecx+edx*4]
0x432C65: mov     [esp+30h+var_10], eax
0x432C69: xor     ebx, ebx
0x432C6B: mov     ecx, [esp+30h+var_10]
0x432C6F: mov     [esi+10h], ecx
0x432C72: mov     edx, ecx
0x432C74: mov     eax, [edx]
0x432C76: mov     [esi+14h], eax
0x432C79: mov     ecx, [esi+14h]
0x432C7C: mov     edx, [esi+8]
0x432C7F: and     ecx, 0FFFFFFFEh
0x432C82: mov     [edx], ecx
0x432C84: mov     eax, [esi+14h]
0x432C87: and     eax, 0FFFFFFFEh
0x432C8A: mov     [esp+30h+var_18], eax
0x432C8E: mov     eax, [esp+30h+var_18]
0x432C92: and     eax, 0FFFFFFFEh
0x432C95: mov     [esp+30h+var_18], eax
0x432C99: mov     eax, [esi+10h]
0x432C9C: mov     eax, [eax]
0x432C9E: mov     ecx, [esp+30h+var_18]
0x432CA2: cmp     eax, ecx
0x432CA4: jnz     short loc_432C6B
0x432CA6: mov     edx, [esi+14h]
0x432CA9: test    edx, 0FFFFFFFEh
0x432CAF: jz      loc_432E86
0x432CB5: mov     eax, [esi+14h]
0x432CB8: and     eax, 0FFFFFFFEh
0x432CBB: mov     ecx, [eax+0Ch]
0x432CBE: mov     [esi+18h], ecx
0x432CC1: mov     edx, [esi+18h]
0x432CC4: mov     eax, [esi+4]
0x432CC7: and     edx, 0FFFFFFFEh
0x432CCA: mov     [eax], edx
0x432CCC: mov     ecx, [esi+18h]
0x432CCF: mov     eax, [esi+14h]
0x432CD2: and     eax, 0FFFFFFFEh
0x432CD5: mov     edx, [eax+0Ch]
0x432CD8: cmp     ecx, edx
0x432CDA: jnz     short loc_432C6B
0x432CDC: mov     eax, [esi+14h]
0x432CDF: and     eax, 0FFFFFFFEh
0x432CE2: mov     eax, [eax+8]
0x432CE5: cmp     eax, ebx
0x432CE7: mov     [esp+30h+var_1C], eax
0x432CEB: jz      short loc_432CF7
0x432CED: add     eax, 8
0x432CF0: push    eax; lpAddend
0x432CF1: call    ds:InterlockedIncrement
0x432CF7: mov     eax, [esi+14h]
0x432CFA: and     eax, 0FFFFFFFEh
0x432CFD: mov     [esp+30h+Comperand], eax
0x432D01: mov     eax, [esp+30h+Comperand]
0x432D05: and     eax, 0FFFFFFFEh
0x432D08: mov     [esp+30h+Comperand], eax
0x432D0C: mov     eax, [esi+10h]
0x432D0F: mov     eax, [eax]
0x432D11: mov     ecx, [esp+30h+Comperand]
0x432D15: cmp     eax, ecx
0x432D17: mov     [esp+30h+var_4], ebx
0x432D1B: jnz     loc_432E1C
0x432D21: mov     edx, [esi+18h]
0x432D24: test    dl, 1
0x432D27: jnz     short loc_432D55
0x432D29: mov     edi, [esp+30h+var_1C]
0x432D2D: mov     eax, [esp+30h+arg_4]
0x432D31: cmp     edi, [eax]
0x432D33: jz      loc_432E8A
0x432D39: mov     ecx, [esi+14h]
0x432D3C: and     ecx, 0FFFFFFFEh
0x432D3F: add     ecx, 0Ch
0x432D42: mov     [esi+10h], ecx
0x432D45: mov     edx, [esi+14h]
0x432D48: mov     eax, [esi+0Ch]
0x432D4B: and     edx, 0FFFFFFFEh
0x432D4E: mov     [eax], edx
0x432D50: jmp     loc_432DD6
0x432D55: mov     eax, [esi+18h]
0x432D58: and     eax, 0FFFFFFFEh
0x432D5B: mov     [esp+30h+Exchange], eax
0x432D5F: mov     ecx, [esp+30h+Exchange]
0x432D63: mov     edi, [esp+30h+Comperand]
0x432D67: and     ecx, 0FFFFFFFEh
0x432D6A: mov     [esp+30h+Exchange], ecx
0x432D6E: mov     eax, [esp+30h+Exchange]
0x432D72: mov     ecx, [esi+10h]
0x432D75: push    edi; Comperand
0x432D76: push    eax; Exchange
0x432D77: push    ecx; Destination
0x432D78: call    ds:InterlockedCompareExchange
0x432D7E: cmp     eax, edi
0x432D80: setz    al
0x432D83: cmp     al, bl
0x432D85: jz      loc_432E51
0x432D8B: mov     edi, [esi+14h]
0x432D8E: and     edi, 0FFFFFFFEh
0x432D91: mov     ebp, [edi+8]
0x432D94: cmp     ebp, ebx
0x432D96: jz      short loc_432DB8
0x432D98: lea     edx, [ebp+8]
0x432D9B: push    edx; lpAddend
0x432D9C: call    ds:InterlockedDecrement
0x432DA2: test    eax, eax
0x432DA4: jnz     short loc_432DB5
0x432DA6: cmp     ebp, ebx
0x432DA8: jz      short loc_432DB5
0x432DAA: mov     eax, [ebp+0]
0x432DAD: mov     edx, [eax]
0x432DAF: push    1
0x432DB1: mov     ecx, ebp
0x432DB3: call    edx
0x432DB5: mov     [edi+8], ebx
0x432DB8: mov     eax, [esi+1Ch]
0x432DBB: mov     [edi+8], eax
0x432DBE: add     dword ptr [esi+20h], 1
0x432DC2: mov     eax, [esi+20h]
0x432DC5: mov     ecx, [esi]
0x432DC7: mov     [esi+1Ch], edi
0x432DCA: cmp     eax, [ecx+10h]
0x432DCD: jnz     short loc_432DD6
0x432DCF: mov     ecx, esi
0x432DD1: call    sub_4328B0
0x432DD6: mov     edx, [esi+18h]
0x432DD9: mov     [esi+14h], edx
0x432DDC: mov     eax, [esi+18h]
0x432DDF: mov     edi, [esp+30h+var_1C]
0x432DE3: mov     ecx, [esi+8]
0x432DE6: and     eax, 0FFFFFFFEh
0x432DE9: cmp     edi, ebx
0x432DEB: mov     [ecx], eax
0x432DED: mov     [esp+30h+var_4], 0FFFFFFFFh
0x432DF5: jz      loc_432CA6
0x432DFB: lea     edx, [edi+8]
0x432DFE: push    edx; lpAddend
0x432DFF: call    ds:InterlockedDecrement
0x432E05: test    eax, eax
0x432E07: jnz     loc_432CA6
0x432E0D: mov     eax, [edi]
0x432E0F: mov     edx, [eax]
0x432E11: push    1
0x432E13: mov     ecx, edi
0x432E15: call    edx
0x432E17: jmp     loc_432CA6
0x432E1C: mov     edi, [esp+30h+var_1C]
0x432E20: cmp     edi, ebx
0x432E22: mov     [esp+30h+var_4], 0FFFFFFFFh
0x432E2A: jz      loc_432C6B
0x432E30: lea     eax, [edi+8]
0x432E33: push    eax; lpAddend
0x432E34: call    ds:InterlockedDecrement
0x432E3A: test    eax, eax
0x432E3C: jnz     loc_432C6B
0x432E42: mov     edx, [edi]
0x432E44: mov     eax, [edx]
0x432E46: push    1
0x432E48: mov     ecx, edi
0x432E4A: call    eax
0x432E4C: jmp     loc_432C6B
0x432E51: mov     edi, [esp+30h+var_1C]
0x432E55: cmp     edi, ebx
0x432E57: mov     [esp+30h+var_4], 0FFFFFFFFh
0x432E5F: jz      loc_432C6B
0x432E65: lea     ecx, [edi+8]
0x432E68: push    ecx; lpAddend
0x432E69: call    ds:InterlockedDecrement
0x432E6F: test    eax, eax
0x432E71: jnz     loc_432C6B
0x432E77: mov     edx, [edi]
0x432E79: mov     eax, [edx]
0x432E7B: push    1
0x432E7D: mov     ecx, edi
0x432E7F: call    eax
0x432E81: jmp     loc_432C6B
0x432E86: xor     al, al
0x432E88: jmp     short loc_432EB0
0x432E8A: cmp     edi, ebx
0x432E8C: mov     [esp+30h+var_4], 0FFFFFFFFh
0x432E94: jz      short loc_432EAE
0x432E96: lea     ecx, [edi+8]
0x432E99: push    ecx; lpAddend
0x432E9A: call    ds:InterlockedDecrement
0x432EA0: test    eax, eax
0x432EA2: jnz     short loc_432EAE
0x432EA4: mov     edx, [edi]
0x432EA6: mov     eax, [edx]
0x432EA8: push    1
0x432EAA: mov     ecx, edi
0x432EAC: call    eax
0x432EAE: mov     al, 1
0x432EB0: mov     ecx, dword ptr [esp+30h+var_C]
0x432EB4: mov     large fs:0, ecx
0x432EBB: pop     ecx
0x432EBC: pop     edi
0x432EBD: pop     esi
0x432EBE: pop     ebp
0x432EBF: pop     ebx
0x432EC0: add     esp, 1Ch
0x432EC3: retn    8
