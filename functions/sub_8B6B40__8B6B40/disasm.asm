0x8B6B40: push    esi
0x8B6B41: mov     esi, ecx
0x8B6B43: cmp     dword ptr [esi+0Ch], 0
0x8B6B47: jnz     short loc_8B6B81
0x8B6B49: push    30h ; '0'; Size
0x8B6B4B: call    FormHeapAlloc
0x8B6B50: add     esp, 4
0x8B6B53: test    eax, eax
0x8B6B55: jz      short loc_8B6B60
0x8B6B57: mov     ecx, eax
0x8B6B59: call    sub_564030
0x8B6B5E: jmp     short loc_8B6B62
0x8B6B60: xor     eax, eax
0x8B6B62: cmp     dword ptr [esi+8], 0
0x8B6B66: mov     [esi+0Ch], eax
0x8B6B69: jz      short loc_8B6B73
0x8B6B6B: push    eax
0x8B6B6C: mov     ecx, esi
0x8B6B6E: call    sub_8B6730
0x8B6B73: mov     eax, [esp+4+arg_0]
0x8B6B77: mov     byte ptr [eax], 1
0x8B6B7A: mov     eax, [esi+0Ch]
0x8B6B7D: pop     esi
0x8B6B7E: retn    4
0x8B6B81: mov     ecx, [esp+4+arg_0]
0x8B6B85: mov     byte ptr [ecx], 0
0x8B6B88: mov     eax, [esi+0Ch]
0x8B6B8B: pop     esi
0x8B6B8C: retn    4
