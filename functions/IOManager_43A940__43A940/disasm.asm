0x43A940: push    0FFFFFFFFh
0x43A942: push    offset SEH_43A940
0x43A947: mov     eax, large fs:0
0x43A94D: push    eax
0x43A94E: sub     esp, 10h
0x43A951: push    ebx
0x43A952: push    ebp
0x43A953: push    esi
0x43A954: push    edi
0x43A955: mov     eax, ___security_cookie
0x43A95A: xor     eax, esp
0x43A95C: push    eax
0x43A95D: lea     eax, [esp+30h+var_C]
0x43A961: mov     large fs:0, eax
0x43A967: mov     esi, ecx
0x43A969: xor     eax, eax
0x43A96B: mov     [esp+30h+var_10], eax
0x43A96F: mov     [esp+30h+Comperand], eax
0x43A973: mov     [esp+30h+var_14], eax
0x43A977: mov     ebx, ds:InterlockedCompareExchange
0x43A97D: mov     [esp+30h+var_4], 1
0x43A985: mov     eax, [esi]
0x43A987: mov     ecx, [eax+4]
0x43A98A: mov     [esp+30h+Comperand], ecx
0x43A98E: mov     edx, [esp+30h+Comperand]
0x43A992: mov     eax, [esi+4]
0x43A995: mov     ecx, [esp+30h+Comperand]
0x43A999: mov     [eax], edx
0x43A99B: mov     eax, [esi]
0x43A99D: add     eax, 4
0x43A9A0: cmp     ecx, [eax]
0x43A9A2: jnz     short loc_43A985
0x43A9A4: mov     eax, [esp+30h+Comperand]
0x43A9A8: mov     edx, [esi]
0x43A9AA: mov     ecx, [edx+8]
0x43A9AD: mov     edx, [eax]
0x43A9AF: mov     [esp+30h+Exchange], edx
0x43A9B3: mov     eax, [esp+30h+Exchange]
0x43A9B7: mov     edx, [esi+8]
0x43A9BA: mov     [edx], eax
0x43A9BC: mov     eax, [esi]
0x43A9BE: mov     edx, [esp+30h+Comperand]
0x43A9C2: add     eax, 4
0x43A9C5: cmp     edx, [eax]
0x43A9C7: jnz     short loc_43A985
0x43A9C9: mov     eax, [esp+30h+Exchange]
0x43A9CD: test    eax, eax
0x43A9CF: jz      loc_43AAFD
0x43A9D5: mov     edx, [esp+30h+Comperand]
0x43A9D9: cmp     edx, ecx
0x43A9DB: jnz     short loc_43A9ED
0x43A9DD: mov     eax, [esp+30h+Exchange]
0x43A9E1: push    ecx; Comperand
0x43A9E2: push    eax; Exchange
0x43A9E3: mov     eax, [esi]
0x43A9E5: add     eax, 8
0x43A9E8: push    eax; Destination
0x43A9E9: call    ebx ; InterlockedCompareExchange
0x43A9EB: jmp     short loc_43A985
0x43A9ED: mov     edi, [esp+30h+Exchange]
0x43A9F1: mov     ebp, [esp+30h+var_14]
0x43A9F5: add     edi, 4
0x43A9F8: cmp     ebp, [edi]
0x43A9FA: jz      short loc_43AA2D
0x43A9FC: test    ebp, ebp
0x43A9FE: jz      short loc_43AA19
0x43AA00: lea     ecx, [ebp+8]
0x43AA03: push    ecx; lpAddend
0x43AA04: call    ds:InterlockedDecrement
0x43AA0A: test    eax, eax
0x43AA0C: jnz     short loc_43AA19
0x43AA0E: mov     edx, [ebp+0]
0x43AA11: mov     eax, [edx]
0x43AA13: push    1
0x43AA15: mov     ecx, ebp
0x43AA17: call    eax
0x43AA19: mov     edi, [edi]
0x43AA1B: test    edi, edi
0x43AA1D: mov     [esp+30h+var_14], edi
0x43AA21: jz      short loc_43AA2D
0x43AA23: add     edi, 8
0x43AA26: push    edi; lpAddend
0x43AA27: call    ds:InterlockedIncrement
0x43AA2D: mov     edi, [esp+30h+Comperand]
0x43AA31: mov     ecx, [esp+30h+Exchange]
0x43AA35: mov     eax, [esi]
0x43AA37: push    edi; Comperand
0x43AA38: add     eax, 4
0x43AA3B: push    ecx; Exchange
0x43AA3C: push    eax; Destination
0x43AA3D: call    ebx ; InterlockedCompareExchange
0x43AA3F: cmp     eax, edi
0x43AA41: setz    al
0x43AA44: test    al, al
0x43AA46: jz      loc_43A985
0x43AA4C: mov     ecx, [esi]
0x43AA4E: mov     eax, [ecx]
0x43AA50: mov     edx, [eax+8]
0x43AA53: call    edx
0x43AA55: mov     edi, [esp+30h+Exchange]
0x43AA59: mov     ebp, [edi+4]
0x43AA5C: add     edi, 4
0x43AA5F: test    ebp, ebp
0x43AA61: jz      short loc_43AA86
0x43AA63: lea     eax, [ebp+8]
0x43AA66: push    eax; lpAddend
0x43AA67: call    ds:InterlockedDecrement
0x43AA6D: test    eax, eax
0x43AA6F: jnz     short loc_43AA80
0x43AA71: test    ebp, ebp
0x43AA73: jz      short loc_43AA80
0x43AA75: mov     edx, [ebp+0]
0x43AA78: mov     eax, [edx]
0x43AA7A: push    1
0x43AA7C: mov     ecx, ebp
0x43AA7E: call    eax
0x43AA80: mov     dword ptr [edi], 0
0x43AA86: mov     ecx, [esi+4]
0x43AA89: mov     eax, [esp+30h+Comperand]
0x43AA8D: mov     dword ptr [ecx], 0
0x43AA93: mov     edx, [esi+8]
0x43AA96: push    eax
0x43AA97: mov     ecx, esi
0x43AA99: mov     dword ptr [edx], 0
0x43AA9F: call    sub_4329A0
0x43AAA4: mov     esi, [esp+30h+var_14]
0x43AAA8: test    esi, esi
0x43AAAA: mov     edi, [esp+30h+arg_0]
0x43AAAE: mov     [edi], esi
0x43AAB0: jz      short loc_43AABE
0x43AAB2: lea     ecx, [esi+8]
0x43AAB5: push    ecx; lpAddend
0x43AAB6: call    ds:InterlockedIncrement
0x43AABC: test    esi, esi
0x43AABE: mov     byte ptr [esp+30h+var_4], 0
0x43AAC3: mov     [esp+30h+var_10], 1
0x43AACB: jz      short loc_43AAE5
0x43AACD: lea     edx, [esi+8]
0x43AAD0: push    edx; lpAddend
0x43AAD1: call    ds:InterlockedDecrement
0x43AAD7: test    eax, eax
0x43AAD9: jnz     short loc_43AAE5
0x43AADB: mov     eax, [esi]
0x43AADD: mov     edx, [eax]
0x43AADF: push    1
0x43AAE1: mov     ecx, esi
0x43AAE3: call    edx
0x43AAE5: mov     eax, edi
0x43AAE7: mov     ecx, dword ptr [esp+30h+var_C]
0x43AAEB: mov     large fs:0, ecx
0x43AAF2: pop     ecx
0x43AAF3: pop     edi
0x43AAF4: pop     esi
0x43AAF5: pop     ebp
0x43AAF6: pop     ebx
0x43AAF7: add     esp, 1Ch
0x43AAFA: retn    4
0x43AAFD: mov     ecx, [esi+4]
0x43AB00: mov     edi, [esp+30h+arg_0]
0x43AB04: mov     dword ptr [ecx], 0
0x43AB0A: mov     dword ptr [edi], 0
0x43AB10: mov     esi, [esp+30h+var_14]
0x43AB14: jmp     short loc_43AABC
