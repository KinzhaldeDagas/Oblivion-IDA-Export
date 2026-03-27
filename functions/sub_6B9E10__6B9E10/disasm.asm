0x6B9E10: push    0FFFFFFFFh
0x6B9E12: push    offset SEH_6B9E10
0x6B9E17: mov     eax, large fs:0
0x6B9E1D: push    eax
0x6B9E1E: push    ecx
0x6B9E1F: push    ebx
0x6B9E20: push    esi
0x6B9E21: push    edi
0x6B9E22: mov     eax, ds:0B30AACh
0x6B9E27: xor     eax, esp
0x6B9E29: push    eax
0x6B9E2A: lea     eax, [esp+20h+var_C]
0x6B9E2E: mov     large fs:0, eax
0x6B9E34: mov     ebx, ecx
0x6B9E36: mov     eax, [ebx+1Ch]
0x6B9E39: test    eax, eax
0x6B9E3B: jbe     loc_6B9ED3
0x6B9E41: mov     esi, [ebx+14h]
0x6B9E44: test    esi, esi
0x6B9E46: mov     edi, [ebx+24h]
0x6B9E49: jz      short loc_6B9E61
0x6B9E4B: jmp     short loc_6B9E50
0x6B9E4D: align 10h
0x6B9E50: mov     ecx, [esi+8]
0x6B9E53: sub     edi, [ecx+24h]
0x6B9E56: call    sub_6B9E10
0x6B9E5B: mov     esi, [esi]
0x6B9E5D: test    esi, esi
0x6B9E5F: jnz     short loc_6B9E50
0x6B9E61: push    28h ; '('; Size
0x6B9E63: call    FormHeapAlloc
0x6B9E68: add     esp, 4
0x6B9E6B: mov     [esp+20h+var_10], eax
0x6B9E6F: test    eax, eax
0x6B9E71: mov     [esp+20h+var_4], 0
0x6B9E79: jz      short loc_6B9E8C
0x6B9E7B: push    ebx
0x6B9E7C: push    offset aOther; "Other"
0x6B9E81: mov     ecx, eax
0x6B9E83: call    sub_6B9BD0
0x6B9E88: mov     esi, eax
0x6B9E8A: jmp     short loc_6B9E8E
0x6B9E8C: xor     esi, esi
0x6B9E8E: test    esi, esi
0x6B9E90: mov     [esp+20h+var_10], esi
0x6B9E94: jz      short loc_6B9EA0
0x6B9E96: lea     eax, [esi+4]
0x6B9E99: push    eax; lpAddend
0x6B9E9A: call    dword ptr ds:0A28078h
0x6B9EA0: push    esi
0x6B9EA1: mov     ecx, ebx
0x6B9EA3: mov     [esp+24h+var_4], 1
0x6B9EAB: mov     [esi+24h], edi
0x6B9EAE: call    sub_6B9B40
0x6B9EB3: lea     ecx, [esi+4]
0x6B9EB6: push    ecx; lpAddend
0x6B9EB7: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6B9EBF: call    dword ptr ds:0A2807Ch
0x6B9EC5: test    eax, eax
0x6B9EC7: jnz     short loc_6B9ED3
0x6B9EC9: mov     edx, [esi]
0x6B9ECB: mov     eax, [edx]
0x6B9ECD: push    1
0x6B9ECF: mov     ecx, esi
0x6B9ED1: call    eax
0x6B9ED3: mov     ecx, dword ptr [esp+20h+var_C]
0x6B9ED7: mov     large fs:0, ecx
0x6B9EDE: pop     ecx
0x6B9EDF: pop     edi
0x6B9EE0: pop     esi
0x6B9EE1: pop     ebx
0x6B9EE2: add     esp, 10h
0x6B9EE5: retn
