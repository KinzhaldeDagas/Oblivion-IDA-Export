0x948390: push    esi
0x948391: mov     esi, ecx
0x948393: mov     eax, [esi+4]
0x948396: test    eax, eax
0x948398: jz      short loc_9483FD
0x94839A: push    ebx
0x94839B: mov     ebx, [esp+8+arg_0]
0x94839F: push    edi
0x9483A0: push    ebx
0x9483A1: call    sub_8B1860
0x9483A6: mov     edi, eax
0x9483A8: add     esp, 4
0x9483AB: cmp     edi, 0FFFFh
0x9483B1: jle     short loc_9483B8
0x9483B3: mov     edi, 0FFFFh
0x9483B8: mov     ecx, [esi+4]
0x9483BB: lea     eax, [edi+0Bh]
0x9483BE: push    eax
0x9483BF: call    sub_918440
0x9483C4: mov     ecx, [esi+4]
0x9483C7: push    9
0x9483C9: call    sub_9181B0
0x9483CE: mov     ecx, [esi+4]
0x9483D1: push    edi
0x9483D2: call    sub_918420
0x9483D7: mov     ecx, [esi+4]
0x9483DA: push    edi
0x9483DB: push    ebx
0x9483DC: call    sub_918390
0x9483E1: mov     ecx, [esp+0Ch+arg_4]
0x9483E5: push    ecx
0x9483E6: mov     ecx, [esi+4]
0x9483E9: call    sub_918440
0x9483EE: mov     edx, [esp+0Ch+arg_8]
0x9483F2: mov     ecx, [esi+4]
0x9483F5: push    edx
0x9483F6: call    sub_918440
0x9483FB: pop     edi
0x9483FC: pop     ebx
0x9483FD: mov     ecx, [esi+4]
0x948400: test    ecx, ecx
0x948402: pop     esi
0x948403: jz      short loc_948419
0x948405: lea     eax, [esp+arg_0]
0x948409: push    eax
0x94840A: call    sub_918060
0x94840F: cmp     byte ptr [eax], 0
0x948412: jz      short loc_948419
0x948414: xor     eax, eax
0x948416: retn    0Ch
0x948419: mov     eax, 1
0x94841E: retn    0Ch
