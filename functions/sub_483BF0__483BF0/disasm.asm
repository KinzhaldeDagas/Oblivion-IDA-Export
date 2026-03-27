0x483BF0: push    0FFFFFFFFh
0x483BF2: push    offset SEH_483BF0
0x483BF7: mov     eax, large fs:0
0x483BFD: push    eax
0x483BFE: sub     esp, 10h
0x483C01: push    ebx
0x483C02: push    ebp
0x483C03: push    esi
0x483C04: push    edi
0x483C05: mov     eax, ds:0B30AACh
0x483C0A: xor     eax, esp
0x483C0C: push    eax
0x483C0D: lea     eax, [esp+30h+var_C]
0x483C11: mov     large fs:0, eax
0x483C17: mov     esi, ecx
0x483C19: xor     edi, edi
0x483C1B: mov     [esp+30h+var_18], edi
0x483C1F: mov     eax, [esi+0Ch]
0x483C22: imul    eax, [esp+30h+arg_0]
0x483C27: add     eax, [esp+30h+arg_4]
0x483C2B: mov     [esp+30h+var_4], edi
0x483C2F: shl     eax, 4
0x483C32: add     eax, [esi+10h]
0x483C35: mov     cl, [eax]
0x483C37: mov     edx, [eax+8]
0x483C3A: mov     [esp+30h+var_1C], cl
0x483C3E: mov     ecx, [eax+0Ch]
0x483C41: mov     eax, [eax+4]
0x483C44: cmp     eax, edi
0x483C46: mov     [esp+30h+var_14], edx
0x483C4A: mov     [esp+30h+var_10], ecx
0x483C4E: jz      short loc_483C60
0x483C50: mov     edi, eax
0x483C52: lea     edx, [edi+4]
0x483C55: push    edx; lpAddend
0x483C56: mov     [esp+34h+var_18], edi
0x483C5A: call    dword ptr ds:0A28078h
0x483C60: mov     eax, [esi+0Ch]
0x483C63: mov     ebx, [esp+30h+arg_8]
0x483C67: mov     ebp, [esp+30h+arg_C]
0x483C6B: imul    eax, ebx
0x483C6E: mov     ecx, [esp+30h+arg_0]
0x483C72: add     eax, ebp
0x483C74: shl     eax, 4
0x483C77: add     eax, [esi+10h]
0x483C7A: push    eax
0x483C7B: mov     eax, [esp+34h+arg_4]
0x483C7F: push    eax
0x483C80: push    ecx
0x483C81: mov     ecx, esi
0x483C83: call    sub_483870
0x483C88: lea     edx, [esp+30h+var_1C]
0x483C8C: push    edx
0x483C8D: push    ebp
0x483C8E: push    ebx
0x483C8F: mov     ecx, esi
0x483C91: call    sub_483870
0x483C96: test    edi, edi
0x483C98: mov     [esp+30h+var_4], 0FFFFFFFFh
0x483CA0: jz      short loc_483CBA
0x483CA2: lea     eax, [edi+4]
0x483CA5: push    eax; lpAddend
0x483CA6: call    dword ptr ds:0A2807Ch
0x483CAC: test    eax, eax
0x483CAE: jnz     short loc_483CBA
0x483CB0: mov     edx, [edi]
0x483CB2: mov     eax, [edx]
0x483CB4: push    1
0x483CB6: mov     ecx, edi
0x483CB8: call    eax
0x483CBA: mov     ecx, dword ptr [esp+30h+var_C]
0x483CBE: mov     large fs:0, ecx
0x483CC5: pop     ecx
0x483CC6: pop     edi
0x483CC7: pop     esi
0x483CC8: pop     ebp
0x483CC9: pop     ebx
0x483CCA: add     esp, 1Ch
0x483CCD: retn    10h
