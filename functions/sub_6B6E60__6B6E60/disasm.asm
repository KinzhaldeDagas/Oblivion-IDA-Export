0x6B6E60: push    esi
0x6B6E61: mov     esi, ecx
0x6B6E63: mov     eax, [esi]
0x6B6E65: mov     ecx, eax
0x6B6E67: shr     ecx, 2
0x6B6E6A: and     cl, 1
0x6B6E6D: neg     cl
0x6B6E6F: push    edi
0x6B6E70: sbb     ecx, ecx
0x6B6E72: and     ecx, 0FFFFFFFCh
0x6B6E75: add     ecx, 8
0x6B6E78: mov     edi, ecx
0x6B6E7A: mov     ecx, [esi+50h]
0x6B6E7D: test    ecx, ecx
0x6B6E7F: jz      loc_6B6F13
0x6B6E85: cmp     [esp+8+arg_0], 0
0x6B6E8A: jz      short loc_6B6EE4
0x6B6E8C: or      eax, 10h
0x6B6E8F: cmp     dword ptr [esi+8], 0
0x6B6E93: mov     [esi], eax
0x6B6E95: jz      short loc_6B6EB4
0x6B6E97: push    ebx
0x6B6E98: mov     ebx, [ecx]
0x6B6E9A: push    0; Seed
0x6B6E9C: call    GetRandomLargeInteger?
0x6B6EA1: xor     edx, edx
0x6B6EA3: div     dword ptr [esi+8]
0x6B6EA6: mov     eax, [ebx+34h]
0x6B6EA9: add     esp, 4
0x6B6EAC: push    edx
0x6B6EAD: mov     edx, [esi+50h]
0x6B6EB0: push    edx
0x6B6EB1: call    eax
0x6B6EB3: pop     ebx
0x6B6EB4: mov     eax, [esi+50h]
0x6B6EB7: mov     ecx, [eax]
0x6B6EB9: mov     edx, [ecx+30h]
0x6B6EBC: or      edi, 1
0x6B6EBF: push    edi
0x6B6EC0: push    0
0x6B6EC2: push    0
0x6B6EC4: push    eax
0x6B6EC5: call    edx
0x6B6EC7: cmp     eax, 80070057h
0x6B6ECC: jnz     short loc_6B6F18
0x6B6ECE: mov     esi, [esi+50h]
0x6B6ED1: mov     eax, [esi]
0x6B6ED3: mov     ecx, [eax+30h]
0x6B6ED6: push    1
0x6B6ED8: push    0
0x6B6EDA: push    0
0x6B6EDC: push    esi
0x6B6EDD: call    ecx
0x6B6EDF: pop     edi
0x6B6EE0: pop     esi
0x6B6EE1: retn    4
0x6B6EE4: push    edi
0x6B6EE5: and     eax, 0FFFFFFEFh
0x6B6EE8: push    0
0x6B6EEA: mov     [esi], eax
0x6B6EEC: mov     edx, [ecx]
0x6B6EEE: mov     eax, [edx+30h]
0x6B6EF1: push    0
0x6B6EF3: push    ecx
0x6B6EF4: call    eax
0x6B6EF6: cmp     eax, 80070057h
0x6B6EFB: jnz     short loc_6B6F18
0x6B6EFD: mov     esi, [esi+50h]
0x6B6F00: mov     ecx, [esi]
0x6B6F02: mov     edx, [ecx+30h]
0x6B6F05: push    0
0x6B6F07: push    0
0x6B6F09: push    0
0x6B6F0B: push    esi
0x6B6F0C: call    edx
0x6B6F0E: pop     edi
0x6B6F0F: pop     esi
0x6B6F10: retn    4
0x6B6F13: mov     eax, 80004005h
0x6B6F18: pop     edi
0x6B6F19: pop     esi
0x6B6F1A: retn    4
