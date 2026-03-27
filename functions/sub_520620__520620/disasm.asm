0x520620: push    esi
0x520621: mov     esi, ecx
0x520623: call    j_TESForm_ClearComponentReferences
0x520628: lea     ecx, [esi+30h]
0x52062B: call    sub_56A750
0x520630: mov     eax, ds:0B33A98h
0x520635: cmp     byte ptr [eax+0CD4h], 0
0x52063C: jnz     short loc_5206A9
0x52063E: push    edi
0x52063F: mov     edi, [esi+40h]
0x520642: test    edi, edi
0x520644: jz      short loc_52065E
0x520646: mov     ecx, [edi+3Ch]
0x520649: test    ecx, ecx
0x52064B: jz      short loc_5206A8
0x52064D: push    esi
0x52064E: call    sub_494E90
0x520653: push    eax
0x520654: mov     ecx, edi
0x520656: call    sub_5204F0
0x52065B: pop     edi
0x52065C: pop     esi
0x52065D: retn
0x52065E: mov     ecx, ds:0B362C0h
0x520664: push    esi
0x520665: call    sub_521730
0x52066A: mov     edi, eax
0x52066C: test    edi, edi
0x52066E: jz      short loc_5206A8
0x520670: push    ebx
0x520671: push    esi
0x520672: mov     ecx, edi
0x520674: call    sub_494E90
0x520679: mov     ebx, eax
0x52067B: cmp     ebx, 0FFFFFFFFh
0x52067E: jz      short loc_5206A7
0x520680: lea     ecx, [ebx+1]
0x520683: push    ecx
0x520684: mov     ecx, edi
0x520686: call    sub_494ED0
0x52068B: test    eax, eax
0x52068D: jz      short loc_520695
0x52068F: mov     edx, [esi+44h]
0x520692: mov     [eax+44h], edx
0x520695: push    ebx
0x520696: mov     ecx, edi
0x520698: call    sub_5304C0
0x52069D: pop     ebx
0x52069E: mov     ecx, edi
0x5206A0: pop     edi
0x5206A1: pop     esi
0x5206A2: jmp     sub_5A56F0
0x5206A7: pop     ebx
0x5206A8: pop     edi
0x5206A9: pop     esi
0x5206AA: retn
