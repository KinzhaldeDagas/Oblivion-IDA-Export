0x434A70: push    0FFFFFFFFh
0x434A72: push    offset SEH_434A70
0x434A77: mov     eax, large fs:0
0x434A7D: push    eax
0x434A7E: push    ecx
0x434A7F: push    ebx
0x434A80: push    ebp
0x434A81: push    esi
0x434A82: push    edi
0x434A83: mov     eax, ___security_cookie
0x434A88: xor     eax, esp
0x434A8A: push    eax
0x434A8B: lea     eax, [esp+24h+var_C]
0x434A8F: mov     large fs:0, eax
0x434A95: mov     esi, ecx
0x434A97: mov     [esp+24h+var_10], esi
0x434A9B: xor     ebx, ebx
0x434A9D: mov     [esi+8], ebx
0x434AA0: mov     edi, [esp+24h+arg_0]
0x434AA4: mov     eax, edi
0x434AA6: mov     [esp+24h+var_4], ebx
0x434AAA: lea     edx, [eax+1]
0x434AAD: lea     ecx, [ecx+0]
0x434AB0: mov     cl, [eax]
0x434AB2: add     eax, 1
0x434AB5: cmp     cl, bl
0x434AB7: jnz     short loc_434AB0
0x434AB9: sub     eax, edx
0x434ABB: add     eax, 1
0x434ABE: push    eax; Size
0x434ABF: call    FormHeapAlloc
0x434AC4: add     esp, 4
0x434AC7: mov     [esi], eax
0x434AC9: mov     ecx, edi
0x434ACB: mov     edx, eax
0x434ACD: lea     ecx, [ecx+0]
0x434AD0: mov     al, [ecx]
0x434AD2: mov     [edx], al
0x434AD4: add     ecx, 1
0x434AD7: add     edx, 1
0x434ADA: cmp     al, bl
0x434ADC: jnz     short loc_434AD0
0x434ADE: mov     edi, [esi+8]
0x434AE1: mov     ebp, [esp+24h+arg_4]
0x434AE5: cmp     edi, ebp
0x434AE7: jz      short loc_434B1A
0x434AE9: cmp     edi, ebx
0x434AEB: jz      short loc_434B09
0x434AED: lea     eax, [edi+4]
0x434AF0: push    eax; lpAddend
0x434AF1: call    ds:InterlockedDecrement
0x434AF7: test    eax, eax
0x434AF9: jnz     short loc_434B09
0x434AFB: cmp     edi, ebx
0x434AFD: jz      short loc_434B09
0x434AFF: mov     edx, [edi]
0x434B01: mov     eax, [edx]
0x434B03: push    1
0x434B05: mov     ecx, edi
0x434B07: call    eax
0x434B09: cmp     ebp, ebx
0x434B0B: mov     [esi+8], ebp
0x434B0E: jz      short loc_434B1A
0x434B10: add     ebp, 4
0x434B13: push    ebp; lpAddend
0x434B14: call    ds:InterlockedIncrement
0x434B1A: mov     [esi+4], ebx
0x434B1D: mov     eax, esi
0x434B1F: mov     ecx, dword ptr [esp+24h+var_C]
0x434B23: mov     large fs:0, ecx
0x434B2A: pop     ecx
0x434B2B: pop     edi
0x434B2C: pop     esi
0x434B2D: pop     ebp
0x434B2E: pop     ebx
0x434B2F: add     esp, 10h
0x434B32: retn    8
