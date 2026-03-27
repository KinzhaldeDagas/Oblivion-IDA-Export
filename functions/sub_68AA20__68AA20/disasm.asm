0x68AA20: push    0FFFFFFFFh
0x68AA22: push    offset SEH_690310
0x68AA27: mov     eax, large fs:0
0x68AA2D: push    eax
0x68AA2E: push    ecx
0x68AA2F: push    ebx
0x68AA30: push    ebp
0x68AA31: push    esi
0x68AA32: push    edi
0x68AA33: mov     eax, ds:0B30AACh
0x68AA38: xor     eax, esp
0x68AA3A: push    eax
0x68AA3B: lea     eax, [esp+24h+var_C]
0x68AA3F: mov     large fs:0, eax
0x68AA45: mov     [esp+24h+var_10], ecx
0x68AA49: call    sub_689A00
0x68AA4E: mov     eax, [esp+24h+arg_0]
0x68AA52: xor     ebp, ebp
0x68AA54: cmp     eax, ebp
0x68AA56: jz      loc_68AB01
0x68AA5C: lea     ebx, [eax+4]
0x68AA5F: xor     esi, esi
0x68AA61: cmp     ebx, ebp
0x68AA63: jz      loc_68AB01
0x68AA69: lea     esp, [esp+0]
0x68AA70: cmp     [ebx+4], ebp
0x68AA73: jnz     short loc_68AA7D
0x68AA75: cmp     [ebx], ebp
0x68AA77: jz      loc_68AB01
0x68AA7D: push    8; Size
0x68AA7F: call    FormHeapAlloc
0x68AA84: add     esp, 4
0x68AA87: mov     [esp+24h+arg_0], eax
0x68AA8B: cmp     eax, ebp
0x68AA8D: mov     [esp+24h+var_4], ebp
0x68AA91: jz      short loc_68AA9E
0x68AA93: mov     ecx, eax
0x68AA95: call    sub_68B0C0
0x68AA9A: mov     edi, eax
0x68AA9C: jmp     short loc_68AAA0
0x68AA9E: xor     edi, edi
0x68AAA0: mov     eax, [ebx]
0x68AAA2: push    eax
0x68AAA3: mov     ecx, edi
0x68AAA5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x68AAAD: call    sub_68B240
0x68AAB2: cmp     esi, ebp
0x68AAB4: jz      short loc_68AAC3
0x68AAB6: push    edi
0x68AAB7: mov     ecx, esi
0x68AAB9: call    BSSimpleList_PushBack
0x68AABE: mov     esi, [esi+4]
0x68AAC1: jmp     short loc_68AAF6
0x68AAC3: mov     esi, [esp+24h+var_10]
0x68AAC7: add     esi, 4
0x68AACA: cmp     edi, ebp
0x68AACC: jz      short loc_68AAF6
0x68AACE: cmp     [esi], ebp
0x68AAD0: jz      short loc_68AAF4
0x68AAD2: push    8; Size
0x68AAD4: call    FormHeapAlloc
0x68AAD9: add     esp, 4
0x68AADC: cmp     eax, ebp
0x68AADE: jz      short loc_68AAE9
0x68AAE0: mov     ecx, [esi]
0x68AAE2: mov     [eax], ecx
0x68AAE4: mov     [eax+4], ebp
0x68AAE7: jmp     short loc_68AAEB
0x68AAE9: xor     eax, eax
0x68AAEB: mov     edx, [esi+4]
0x68AAEE: mov     [eax+4], edx
0x68AAF1: mov     [esi+4], eax
0x68AAF4: mov     [esi], edi
0x68AAF6: mov     ebx, [ebx+4]
0x68AAF9: cmp     ebx, ebp
0x68AAFB: jnz     loc_68AA70
0x68AB01: mov     ecx, [esp+24h+var_C]
0x68AB05: mov     large fs:0, ecx
0x68AB0C: pop     ecx
0x68AB0D: pop     edi
0x68AB0E: pop     esi
0x68AB0F: pop     ebp
0x68AB10: pop     ebx
0x68AB11: add     esp, 10h
0x68AB14: retn    4
