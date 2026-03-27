0x7F1C30: mov     eax, [esp+arg_4]
0x7F1C34: push    ebx
0x7F1C35: push    esi
0x7F1C36: push    edi
0x7F1C37: mov     edi, [esp+0Ch+arg_0]
0x7F1C3B: push    eax
0x7F1C3C: push    edi
0x7F1C3D: mov     esi, ecx
0x7F1C3F: call    sub_7ECB10
0x7F1C44: mov     edx, [edi]
0x7F1C46: mov     eax, [esi+9Ch]
0x7F1C4C: mov     edx, [edx+7Ch]
0x7F1C4F: push    eax
0x7F1C50: mov     ecx, edi
0x7F1C52: call    edx
0x7F1C54: mov     ebx, [edi+0A8h]
0x7F1C5A: cmp     ebx, [esi+0A8h]
0x7F1C60: jz      short loc_7F1CC4
0x7F1C62: test    ebx, ebx
0x7F1C64: jz      short loc_7F1C82
0x7F1C66: lea     eax, [ebx+4]
0x7F1C69: push    eax; lpAddend
0x7F1C6A: call    dword ptr ds:0A2807Ch
0x7F1C70: test    eax, eax
0x7F1C72: jnz     short loc_7F1C82
0x7F1C74: test    ebx, ebx
0x7F1C76: jz      short loc_7F1C82
0x7F1C78: mov     edx, [ebx]
0x7F1C7A: mov     eax, [edx]
0x7F1C7C: push    1
0x7F1C7E: mov     ecx, ebx
0x7F1C80: call    eax
0x7F1C82: mov     eax, [esi+0A8h]
0x7F1C88: test    eax, eax
0x7F1C8A: mov     [edi+0A8h], eax
0x7F1C90: jz      short loc_7F1CB0
0x7F1C92: add     eax, 4
0x7F1C95: push    eax; lpAddend
0x7F1C96: call    dword ptr ds:0A28078h
0x7F1C9C: mov     cx, [esi+0ACh]
0x7F1CA3: mov     [edi+0ACh], cx
0x7F1CAA: pop     edi
0x7F1CAB: pop     esi
0x7F1CAC: pop     ebx
0x7F1CAD: retn    8
0x7F1CB0: mov     dx, [esi+0ACh]
0x7F1CB7: mov     [edi+0ACh], dx
0x7F1CBE: pop     edi
0x7F1CBF: pop     esi
0x7F1CC0: pop     ebx
0x7F1CC1: retn    8
0x7F1CC4: mov     ax, [esi+0ACh]
0x7F1CCB: mov     [edi+0ACh], ax
0x7F1CD2: pop     edi
0x7F1CD3: pop     esi
0x7F1CD4: pop     ebx
0x7F1CD5: retn    8
