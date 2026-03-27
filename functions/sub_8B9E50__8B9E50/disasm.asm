0x8B9E50: push    0FFFFFFFFh
0x8B9E52: push    offset SEH_8B9E50
0x8B9E57: mov     eax, large fs:0
0x8B9E5D: push    eax
0x8B9E5E: push    ecx
0x8B9E5F: push    ebx
0x8B9E60: push    esi
0x8B9E61: push    edi
0x8B9E62: mov     eax, ds:0B30AACh
0x8B9E67: xor     eax, esp
0x8B9E69: push    eax
0x8B9E6A: lea     eax, [esp+20h+var_C]
0x8B9E6E: mov     large fs:0, eax
0x8B9E74: mov     edi, ecx
0x8B9E76: mov     ecx, ds:0BA7D98h
0x8B9E7C: mov     eax, [ecx]
0x8B9E7E: mov     edx, [eax+10h]
0x8B9E81: push    31h ; '1'
0x8B9E83: push    0C0h ; 'À'
0x8B9E88: call    edx
0x8B9E8A: mov     word ptr [eax+4], 0C0h ; 'À'
0x8B9E90: mov     [esp+20h+var_10], eax
0x8B9E94: mov     ebx, [esp+20h+arg_0]
0x8B9E98: push    ebx
0x8B9E99: mov     ecx, eax
0x8B9E9B: mov     [esp+24h+var_4], 0
0x8B9EA3: call    sub_8B9CA0
0x8B9EA8: mov     esi, eax
0x8B9EAA: mov     eax, [edi]
0x8B9EAC: mov     edx, [eax+4Ch]
0x8B9EAF: push    esi
0x8B9EB0: mov     ecx, edi
0x8B9EB2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B9EBA: call    edx
0x8B9EBC: cmp     word ptr [esi+4], 0
0x8B9EC1: jz      short loc_8B9EDB
0x8B9EC3: add     word ptr [esi+6], 0FFFFh
0x8B9EC8: movzx   eax, word ptr [esi+6]
0x8B9ECC: test    ax, ax
0x8B9ECF: jnz     short loc_8B9EDB
0x8B9ED1: mov     eax, [esi]
0x8B9ED3: mov     edx, [eax]
0x8B9ED5: push    1
0x8B9ED7: mov     ecx, esi
0x8B9ED9: call    edx
0x8B9EDB: mov     eax, [edi]
0x8B9EDD: mov     edx, [eax+7Ch]
0x8B9EE0: push    ebx
0x8B9EE1: mov     ecx, edi
0x8B9EE3: call    edx
0x8B9EE5: mov     ecx, [esp+20h+var_C]
0x8B9EE9: mov     large fs:0, ecx
0x8B9EF0: pop     ecx
0x8B9EF1: pop     edi
0x8B9EF2: pop     esi
0x8B9EF3: pop     ebx
0x8B9EF4: add     esp, 10h
0x8B9EF7: retn    4
