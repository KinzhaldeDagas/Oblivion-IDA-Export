0x948580: push    ebx
0x948581: push    esi
0x948582: push    edi
0x948583: mov     edi, [esp+0Ch+arg_0]
0x948587: mov     eax, [edi+4]
0x94858A: mov     ebx, ecx
0x94858C: mov     ecx, [ebx+0Ch]
0x94858F: push    eax
0x948590: call    sub_918440
0x948595: mov     eax, [edi+4]
0x948598: xor     esi, esi
0x94859A: test    eax, eax
0x94859C: jle     short loc_9485B6
0x94859E: mov     edi, edi
0x9485A0: mov     ecx, [edi]
0x9485A2: mov     edx, [ecx+esi*4]
0x9485A5: mov     ecx, [ebx+0Ch]
0x9485A8: push    edx; Concurrency::details::InternalContextBase *
0x9485A9: call    sub_948910
0x9485AE: mov     eax, [edi+4]
0x9485B1: inc     esi
0x9485B2: cmp     esi, eax
0x9485B4: jl      short loc_9485A0
0x9485B6: pop     edi
0x9485B7: pop     esi
0x9485B8: pop     ebx
0x9485B9: retn    4
