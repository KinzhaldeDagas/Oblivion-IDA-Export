0x487B60: push    ecx
0x487B61: push    ebx
0x487B62: push    ebp
0x487B63: push    esi
0x487B64: mov     esi, ecx
0x487B66: mov     ecx, [esi+4]; this
0x487B69: xor     bl, bl
0x487B6B: test    ecx, ecx
0x487B6D: push    edi
0x487B6E: mov     [esp+14h+var_4], esi
0x487B72: jz      short loc_487B7B
0x487B74: call    TESObjectREFR_GetContainer
0x487B79: jmp     short loc_487B7D
0x487B7B: xor     eax, eax
0x487B7D: lea     ebp, [eax+8]
0x487B80: test    ebp, ebp
0x487B82: jz      short loc_487BF0
0x487B84: mov     esi, [ebp+0]
0x487B87: test    esi, esi
0x487B89: jz      short loc_487BE8
0x487B8B: test    bl, bl
0x487B8D: jnz     loc_487C28
0x487B93: mov     ecx, [esi+4]
0x487B96: mov     eax, [ecx]
0x487B98: mov     edx, [eax+78h]
0x487B9B: call    edx
0x487B9D: test    al, al
0x487B9F: jz      short loc_487BE1
0x487BA1: mov     eax, [esp+14h+var_4]
0x487BA5: mov     eax, [eax]
0x487BA7: test    eax, eax
0x487BA9: mov     edi, [esi+4]
0x487BAC: mov     bl, 1
0x487BAE: mov     dl, bl
0x487BB0: jz      short loc_487BE1
0x487BB2: test    dl, dl
0x487BB4: jz      short loc_487BCE
0x487BB6: mov     ecx, [eax]
0x487BB8: test    ecx, ecx
0x487BBA: jz      short loc_487BC5
0x487BBC: cmp     [ecx+8], edi
0x487BBF: jnz     short loc_487BC5
0x487BC1: xor     dl, dl
0x487BC3: jmp     short loc_487BC8
0x487BC5: mov     eax, [eax+4]
0x487BC8: test    eax, eax
0x487BCA: jnz     short loc_487BB2
0x487BCC: jmp     short loc_487BE1
0x487BCE: test    eax, eax
0x487BD0: jz      short loc_487BE1
0x487BD2: mov     eax, [eax]
0x487BD4: test    eax, eax
0x487BD6: jz      short loc_487BE1
0x487BD8: mov     ecx, [eax+4]
0x487BDB: add     ecx, [esi]
0x487BDD: jnz     short loc_487BE1
0x487BDF: xor     bl, bl
0x487BE1: mov     ebp, [ebp+4]
0x487BE4: test    ebp, ebp
0x487BE6: jnz     short loc_487B84
0x487BE8: test    bl, bl
0x487BEA: jnz     short loc_487C28
0x487BEC: mov     esi, [esp+14h+var_4]
0x487BF0: mov     esi, [esi]
0x487BF2: test    esi, esi
0x487BF4: jz      short loc_487C28
0x487BF6: cmp     dword ptr [esi+4], 0
0x487BFA: jnz     short loc_487C01
0x487BFC: cmp     dword ptr [esi], 0
0x487BFF: jz      short loc_487C28
0x487C01: test    bl, bl
0x487C03: jnz     short loc_487C28
0x487C05: mov     edi, [esi]
0x487C07: test    edi, edi
0x487C09: jz      short loc_487C21
0x487C0B: mov     ecx, [edi+8]
0x487C0E: mov     edx, [ecx]
0x487C10: mov     eax, [edx+78h]
0x487C13: call    eax
0x487C15: test    al, al
0x487C17: jz      short loc_487C21
0x487C19: cmp     dword ptr [edi+4], 0
0x487C1D: jle     short loc_487C21
0x487C1F: mov     bl, 1
0x487C21: mov     esi, [esi+4]
0x487C24: test    esi, esi
0x487C26: jnz     short loc_487BF6
0x487C28: pop     edi
0x487C29: pop     esi
0x487C2A: pop     ebp
0x487C2B: mov     al, bl
0x487C2D: pop     ebx
0x487C2E: pop     ecx
0x487C2F: retn
