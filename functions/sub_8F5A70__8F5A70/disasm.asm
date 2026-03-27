0x8F5A70: push    ebx
0x8F5A71: mov     ebx, [esp+4+arg_0]
0x8F5A75: push    esi
0x8F5A76: mov     esi, ecx
0x8F5A78: mov     eax, [esi+14h]
0x8F5A7B: sub     eax, [esi+10h]
0x8F5A7E: cmp     ebx, eax
0x8F5A80: push    edi
0x8F5A81: mov     edi, ebx
0x8F5A83: jle     short loc_8F5A9C
0x8F5A85: sub     edi, eax
0x8F5A87: mov     eax, [esi]
0x8F5A89: mov     ecx, esi
0x8F5A8B: call    dword ptr [eax+2Ch]
0x8F5A8E: test    eax, eax
0x8F5A90: jnz     short loc_8F5AAC
0x8F5A92: mov     eax, [esi+14h]
0x8F5A95: sub     eax, [esi+10h]
0x8F5A98: cmp     edi, eax
0x8F5A9A: jg      short loc_8F5A85
0x8F5A9C: mov     eax, [esi+10h]
0x8F5A9F: add     eax, edi
0x8F5AA1: pop     edi
0x8F5AA2: mov     [esi+10h], eax
0x8F5AA5: pop     esi
0x8F5AA6: mov     eax, ebx
0x8F5AA8: pop     ebx
0x8F5AA9: retn    4
0x8F5AAC: mov     eax, ebx
0x8F5AAE: sub     eax, edi
0x8F5AB0: pop     edi
0x8F5AB1: pop     esi
0x8F5AB2: pop     ebx
0x8F5AB3: retn    4
