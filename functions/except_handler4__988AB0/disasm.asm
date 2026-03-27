0x988AB0: sub     esp, 14h
0x988AB3: push    ebx
0x988AB4: mov     ebx, [esp+18h+TargetFrame]
0x988AB8: push    ebp
0x988AB9: push    esi
0x988ABA: mov     esi, [ebx+8]
0x988ABD: xor     esi, ___security_cookie
0x988AC3: push    edi
0x988AC4: mov     eax, [esi]
0x988AC6: cmp     eax, 0FFFFFFFEh
0x988AC9: mov     [esp+24h+var_11], 0
0x988ACE: mov     [esp+24h+var_C], 1
0x988AD6: lea     edi, [ebx+10h]
0x988AD9: jz      short loc_988AE8
0x988ADB: mov     ecx, [esi+4]
0x988ADE: add     ecx, edi
0x988AE0: xor     ecx, [eax+edi]
0x988AE3: call    @__security_check_cookie@4
0x988AE8: mov     ecx, [esi+0Ch]
0x988AEB: mov     eax, [esi+8]
0x988AEE: add     ecx, edi
0x988AF0: xor     ecx, [eax+edi]
0x988AF3: call    @__security_check_cookie@4
0x988AF8: mov     eax, [esp+24h+arg_0]
0x988AFC: test    byte ptr [eax+4], 66h
0x988B00: jnz     loc_988C25
0x988B06: mov     ebp, [ebx+0Ch]
0x988B09: cmp     ebp, 0FFFFFFFEh
0x988B0C: mov     ecx, [esp+24h+arg_8]
0x988B10: lea     edx, [esp+24h+var_8]
0x988B14: mov     [esp+24h+var_8], eax
0x988B18: mov     [esp+24h+var_4], ecx
0x988B1C: mov     [ebx-4], edx
0x988B1F: jz      short loc_988B7F
0x988B21: lea     eax, [ebp+ebp*2+0]
0x988B25: mov     ecx, [esi+eax*4+14h]
0x988B29: test    ecx, ecx
0x988B2B: lea     ebx, [esi+eax*4+10h]
0x988B2F: mov     eax, [ebx]
0x988B31: mov     [esp+24h+var_10], eax
0x988B35: jz      short loc_988B4D
0x988B37: mov     edx, edi
0x988B39: call    @_EH4_CallFilterFunc@8
0x988B3E: test    eax, eax
0x988B40: mov     [esp+24h+var_11], 1
0x988B45: jl      short loc_988B8B
0x988B47: jg      short loc_988B95
0x988B49: mov     eax, [esp+24h+var_10]
0x988B4D: cmp     eax, 0FFFFFFFEh
0x988B50: mov     ebp, eax
0x988B52: jnz     short loc_988B21
0x988B54: cmp     [esp+24h+var_11], 0
0x988B59: jz      short loc_988B7F
0x988B5B: mov     eax, [esi]
0x988B5D: cmp     eax, 0FFFFFFFEh
0x988B60: jz      short loc_988B6F
0x988B62: mov     ecx, [esi+4]
0x988B65: add     ecx, edi
0x988B67: xor     ecx, [eax+edi]
0x988B6A: call    @__security_check_cookie@4
0x988B6F: mov     ecx, [esi+0Ch]
0x988B72: mov     eax, [esi+8]
0x988B75: add     ecx, edi
0x988B77: xor     ecx, [eax+edi]
0x988B7A: call    @__security_check_cookie@4
0x988B7F: mov     eax, [esp+24h+var_C]
0x988B83: pop     edi
0x988B84: pop     esi
0x988B85: pop     ebp
0x988B86: pop     ebx
0x988B87: add     esp, 14h
0x988B8A: retn
0x988B8B: mov     [esp+24h+var_C], 0
0x988B93: jmp     short loc_988B5B
0x988B95: mov     ecx, [esp+24h+arg_0]
0x988B99: cmp     dword ptr [ecx], 0E06D7363h
0x988B9F: jnz     short loc_988BCB
0x988BA1: cmp     ds:off_AA4930, 0
0x988BA8: jz      short loc_988BCB
0x988BAA: push    offset off_AA4930
0x988BAF: call    __IsNonwritableInCurrentImage
0x988BB4: add     esp, 4
0x988BB7: test    eax, eax
0x988BB9: jz      short loc_988BCB
0x988BBB: mov     edx, [esp+24h+arg_0]
0x988BBF: push    1
0x988BC1: push    edx
0x988BC2: call    ds:off_AA4930
0x988BC8: add     esp, 8
0x988BCB: mov     ecx, [esp+24h+TargetFrame]; TargetFrame
0x988BCF: call    @_EH4_GlobalUnwind@4
0x988BD4: mov     eax, [esp+24h+TargetFrame]
0x988BD8: cmp     [eax+0Ch], ebp
0x988BDB: jz      short loc_988BF0
0x988BDD: push    offset ___security_cookie
0x988BE2: push    edi
0x988BE3: mov     edx, ebp
0x988BE5: mov     ecx, eax
0x988BE7: call    @_EH4_LocalUnwind@16
0x988BEC: mov     eax, [esp+24h+TargetFrame]
0x988BF0: mov     ecx, [esp+24h+var_10]
0x988BF4: mov     [eax+0Ch], ecx
0x988BF7: mov     eax, [esi]
0x988BF9: cmp     eax, 0FFFFFFFEh
0x988BFC: jz      short loc_988C0B
0x988BFE: mov     ecx, [esi+4]
0x988C01: add     ecx, edi
0x988C03: xor     ecx, [eax+edi]
0x988C06: call    @__security_check_cookie@4
0x988C0B: mov     ecx, [esi+0Ch]
0x988C0E: mov     edx, [esi+8]
0x988C11: add     ecx, edi
0x988C13: xor     ecx, [edx+edi]
0x988C16: call    @__security_check_cookie@4
0x988C1B: mov     ecx, [ebx+8]
0x988C1E: mov     edx, edi
0x988C20: jmp     __except_handler4___@_EH4_TransferToHandler@8
0x988C25: cmp     dword ptr [ebx+0Ch], 0FFFFFFFEh
0x988C29: jz      loc_988B7F
0x988C2F: push    offset ___security_cookie
0x988C34: push    edi
0x988C35: mov     ecx, ebx
0x988C37: mov     edx, 0FFFFFFFEh
0x988C3C: call    @_EH4_LocalUnwind@16
0x988C41: jmp     loc_988B5B
