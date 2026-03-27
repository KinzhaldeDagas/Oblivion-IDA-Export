0x7E5B50: push    0FFFFFFFFh
0x7E5B52: push    offset SEH_7E5B50
0x7E5B57: mov     eax, large fs:0
0x7E5B5D: push    eax
0x7E5B5E: push    ebx
0x7E5B5F: push    ebp
0x7E5B60: push    esi
0x7E5B61: push    edi
0x7E5B62: mov     eax, ds:0B30AACh
0x7E5B67: xor     eax, esp
0x7E5B69: push    eax
0x7E5B6A: lea     eax, [esp+20h+var_C]
0x7E5B6E: mov     large fs:0, eax
0x7E5B74: mov     ebp, ecx
0x7E5B76: mov     esi, [esp+20h+arg_0]
0x7E5B7A: test    esi, esi
0x7E5B7C: jz      loc_7E5C16
0x7E5B82: mov     eax, [esi]
0x7E5B84: mov     edx, [eax+8]
0x7E5B87: mov     ebx, [esi+0A8h]
0x7E5B8D: mov     ecx, esi
0x7E5B8F: call    edx
0x7E5B91: test    ebx, ebx
0x7E5B93: mov     edi, eax
0x7E5B95: jz      short loc_7E5BDE
0x7E5B97: test    edi, edi
0x7E5B99: jz      short loc_7E5C16
0x7E5B9B: lea     ebx, [esi+4]
0x7E5B9E: push    ebx; lpAddend
0x7E5B9F: mov     [esp+24h+arg_0], esi
0x7E5BA3: call    dword ptr ds:0A28078h
0x7E5BA9: lea     eax, [esp+20h+arg_0]
0x7E5BAD: push    eax
0x7E5BAE: lea     ecx, [ebp+110h]
0x7E5BB4: mov     [esp+24h+var_4], 0
0x7E5BBC: call    NiTArray_AddItem
0x7E5BC1: push    ebx; lpAddend
0x7E5BC2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E5BCA: call    dword ptr ds:0A2807Ch
0x7E5BD0: test    eax, eax
0x7E5BD2: jnz     short loc_7E5BDE
0x7E5BD4: mov     edx, [esi]
0x7E5BD6: mov     eax, [edx]
0x7E5BD8: push    1
0x7E5BDA: mov     ecx, esi
0x7E5BDC: call    eax
0x7E5BDE: test    edi, edi
0x7E5BE0: jz      short loc_7E5C16
0x7E5BE2: movzx   eax, word ptr [edi+0B6h]
0x7E5BE9: xor     esi, esi
0x7E5BEB: test    eax, eax
0x7E5BED: jbe     short loc_7E5C16
0x7E5BEF: cmp     eax, esi
0x7E5BF1: ja      short loc_7E5BF7
0x7E5BF3: xor     eax, eax
0x7E5BF5: jmp     short loc_7E5C00
0x7E5BF7: mov     ecx, [edi+0B0h]
0x7E5BFD: mov     eax, [ecx+esi*4]
0x7E5C00: push    eax
0x7E5C01: mov     ecx, ebp
0x7E5C03: call    sub_7E5B50
0x7E5C08: movzx   eax, word ptr [edi+0B6h]
0x7E5C0F: add     esi, 1
0x7E5C12: cmp     eax, esi
0x7E5C14: ja      short loc_7E5BF7
0x7E5C16: mov     ecx, dword ptr [esp+20h+var_C]
0x7E5C1A: mov     large fs:0, ecx
0x7E5C21: pop     ecx
0x7E5C22: pop     edi
0x7E5C23: pop     esi
0x7E5C24: pop     ebp
0x7E5C25: pop     ebx
0x7E5C26: add     esp, 0Ch
0x7E5C29: retn    4
