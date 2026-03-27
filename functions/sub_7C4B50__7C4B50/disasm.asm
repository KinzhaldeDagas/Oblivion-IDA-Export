0x7C4B50: push    0FFFFFFFFh
0x7C4B52: push    offset SEH_7C4B50
0x7C4B57: mov     eax, large fs:0
0x7C4B5D: push    eax
0x7C4B5E: push    ecx
0x7C4B5F: push    ebx
0x7C4B60: push    ebp
0x7C4B61: push    esi
0x7C4B62: push    edi
0x7C4B63: mov     eax, ds:0B30AACh
0x7C4B68: xor     eax, esp
0x7C4B6A: push    eax
0x7C4B6B: lea     eax, [esp+24h+var_C]
0x7C4B6F: mov     large fs:0, eax
0x7C4B75: mov     esi, [esp+24h+arg_0]
0x7C4B79: mov     ebx, [esp+24h+arg_C]
0x7C4B7D: xor     ebp, ebp
0x7C4B7F: push    esi
0x7C4B80: mov     [ebx], ebp
0x7C4B82: call    sub_7C3C50
0x7C4B87: mov     edi, eax
0x7C4B89: add     esp, 4
0x7C4B8C: cmp     edi, ebp
0x7C4B8E: mov     [esp+24h+var_10], edi
0x7C4B92: jnz     short loc_7C4BAB
0x7C4B94: xor     ax, ax
0x7C4B97: mov     ecx, [esp+24h+var_C]
0x7C4B9B: mov     large fs:0, ecx
0x7C4BA2: pop     ecx
0x7C4BA3: pop     edi
0x7C4BA4: pop     esi
0x7C4BA5: pop     ebp
0x7C4BA6: pop     ebx
0x7C4BA7: add     esp, 10h
0x7C4BAA: retn
0x7C4BAB: mov     ecx, [esi+4]
0x7C4BAE: lea     eax, [esp+24h+arg_C]
0x7C4BB2: push    eax
0x7C4BB3: push    ecx
0x7C4BB4: mov     ecx, offset off_B2CBC4
0x7C4BB9: mov     [esp+2Ch+arg_C], ebp
0x7C4BBD: call    NiTMap_GetAt
0x7C4BC2: test    al, al
0x7C4BC4: jnz     short loc_7C4C04
0x7C4BC6: push    44h ; 'D'; Size
0x7C4BC8: call    FormHeapAlloc
0x7C4BCD: add     esp, 4
0x7C4BD0: cmp     eax, ebp
0x7C4BD2: jz      short loc_7C4BDD
0x7C4BD4: mov     ecx, eax
0x7C4BD6: call    sub_7C3C10
0x7C4BDB: mov     ebp, eax
0x7C4BDD: push    edi; a2
0x7C4BDE: lea     ecx, [ebp+30h]; this
0x7C4BE1: call    NiSmartPointer_Set??
0x7C4BE6: mov     edx, [esp+24h+arg_0]
0x7C4BEA: mov     ecx, 8
0x7C4BEF: mov     edi, ebp
0x7C4BF1: rep movsd
0x7C4BF3: mov     eax, [edx+4]
0x7C4BF6: push    ebp; a3
0x7C4BF7: push    eax; a2
0x7C4BF8: mov     ecx, offset off_B2CBC4; this
0x7C4BFD: call    NiTMap_SetAt
0x7C4C02: jmp     short loc_7C4C08
0x7C4C04: mov     ebp, [esp+24h+arg_C]
0x7C4C08: mov     eax, [ebx]
0x7C4C0A: test    eax, eax
0x7C4C0C: mov     ecx, [ebp+24h]
0x7C4C0F: mov     esi, [esp+24h+arg_4]
0x7C4C13: lea     edi, [ebp+20h]
0x7C4C16: mov     ebp, [esp+24h+arg_8]
0x7C4C1A: jnz     short loc_7C4C4E
0x7C4C1C: lea     esp, [esp+0]
0x7C4C20: test    ecx, ecx
0x7C4C22: jz      short loc_7C4C48
0x7C4C24: lea     eax, [ecx+8]
0x7C4C27: mov     eax, [eax]
0x7C4C29: mov     dx, [eax+0Eh]
0x7C4C2D: cmp     dx, [eax+0Ch]
0x7C4C31: mov     ecx, [ecx]
0x7C4C33: jz      short loc_7C4C3F
0x7C4C35: cmp     esi, [eax+38h]
0x7C4C38: jnz     short loc_7C4C3F
0x7C4C3A: cmp     ebp, [eax+3Ch]
0x7C4C3D: jz      short loc_7C4C46
0x7C4C3F: cmp     dword ptr [ebx], 0
0x7C4C42: jz      short loc_7C4C20
0x7C4C44: jmp     short loc_7C4C48
0x7C4C46: mov     [ebx], eax
0x7C4C48: mov     eax, [ebx]
0x7C4C4A: test    eax, eax
0x7C4C4C: jz      short loc_7C4C58
0x7C4C4E: mov     cx, [eax+0Ch]
0x7C4C52: sub     cx, [eax+0Eh]
0x7C4C56: jnz     short loc_7C4CC0
0x7C4C58: push    44h ; 'D'; Size
0x7C4C5A: call    FormHeapAlloc
0x7C4C5F: add     esp, 4
0x7C4C62: mov     [esp+24h+arg_C], eax
0x7C4C66: test    eax, eax
0x7C4C68: mov     [esp+24h+var_4], 0
0x7C4C70: jz      short loc_7C4C84
0x7C4C72: mov     edx, [esp+24h+var_10]
0x7C4C76: push    0
0x7C4C78: push    ebp
0x7C4C79: push    esi
0x7C4C7A: push    edx
0x7C4C7B: mov     ecx, eax
0x7C4C7D: call    sub_8129F0
0x7C4C82: jmp     short loc_7C4C86
0x7C4C84: xor     eax, eax
0x7C4C86: mov     [ebx], eax
0x7C4C88: mov     eax, [esp+24h+arg_0]
0x7C4C8C: add     dword ptr ds:0B43348h, 1
0x7C4C93: mov     ecx, [ebx]
0x7C4C95: push    eax
0x7C4C96: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7C4C9E: call    sub_812660
0x7C4CA3: push    ebx
0x7C4CA4: mov     ecx, edi
0x7C4CA6: call    sub_5B1E20
0x7C4CAB: mov     ecx, [esp+24h+arg_10]
0x7C4CAF: mov     eax, [ebx]
0x7C4CB1: mov     edx, [ecx]
0x7C4CB3: mov     eax, [eax]
0x7C4CB5: mov     edx, [edx+84h]
0x7C4CBB: push    1
0x7C4CBD: push    eax
0x7C4CBE: call    edx
0x7C4CC0: mov     ebx, [ebx]
0x7C4CC2: movzx   ecx, word ptr [ebx+0Eh]
0x7C4CC6: movzx   eax, word ptr [ebx+0Ch]
0x7C4CCA: sub     eax, ecx
0x7C4CCC: mov     ecx, [esp+24h+var_C]
0x7C4CD0: mov     large fs:0, ecx
0x7C4CD7: pop     ecx
0x7C4CD8: pop     edi
0x7C4CD9: pop     esi
0x7C4CDA: pop     ebp
0x7C4CDB: pop     ebx
0x7C4CDC: add     esp, 10h
0x7C4CDF: retn
