0x98DE10: push    14h
0x98DE12: push    offset stru_AFFEA8
0x98DE17: call    __SEH_prolog4
0x98DE1C: xor     edi, edi
0x98DE1E: mov     [ebp+var_1C], edi
0x98DE21: push    dword_BAA5F0
0x98DE27: call    __decode_pointer
0x98DE2C: pop     ecx
0x98DE2D: mov     esi, eax
0x98DE2F: cmp     esi, edi
0x98DE31: jnz     short loc_98DE86
0x98DE33: lea     eax, [ebp+var_1C]
0x98DE36: push    eax
0x98DE37: call    sub_981BF8
0x98DE3C: pop     ecx
0x98DE3D: cmp     eax, edi
0x98DE3F: jz      short loc_98DE4E
0x98DE41: push    edi
0x98DE42: push    edi
0x98DE43: push    edi
0x98DE44: push    edi
0x98DE45: push    edi
0x98DE46: call    __invoke_watson
0x98DE4B: add     esp, 14h
0x98DE4E: cmp     [ebp+var_1C], 1
0x98DE52: jz      short loc_98DE75
0x98DE54: push    offset aKernel32_dll_0
0x98DE59: call    ds:GetModuleHandleA
0x98DE5F: cmp     eax, edi
0x98DE61: jz      short loc_98DE75
0x98DE63: push    offset aInitializecrit
0x98DE68: push    eax; hModule
0x98DE69: call    ds:GetProcAddress
0x98DE6F: mov     esi, eax
0x98DE71: cmp     esi, edi
0x98DE73: jnz     short loc_98DE7A
0x98DE75: mov     esi, offset ___crtInitCritSecNoSpinCount@8
0x98DE7A: push    esi
0x98DE7B: call    __encode_pointer
0x98DE80: pop     ecx
0x98DE81: mov     dword_BAA5F0, eax
0x98DE86: mov     [ebp+ms_exc.registration.TryLevel], edi
0x98DE89: push    [ebp+arg_4]
0x98DE8C: push    [ebp+arg_0]
0x98DE8F: call    esi
0x98DE91: mov     [ebp+var_20], eax
0x98DE94: jmp     short loc_98DEC5
0x98DE96: mov     eax, [ebp+ms_exc.exc_ptr]
0x98DE99: mov     eax, [eax]
0x98DE9B: mov     eax, [eax]
0x98DE9D: mov     [ebp+var_24], eax
0x98DEA0: xor     ecx, ecx
0x98DEA2: cmp     eax, 0C0000017h
0x98DEA7: setz    cl
0x98DEAA: mov     eax, ecx
0x98DEAC: retn
0x98DEAD: mov     esp, [ebp+ms_exc.old_esp]
0x98DEB0: cmp     [ebp+var_24], 0C0000017h
0x98DEB7: jnz     short loc_98DEC1
0x98DEB9: push    8; dwErrCode
0x98DEBB: call    ds:SetLastError
0x98DEC1: and     [ebp+var_20], 0
0x98DEC5: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98DECC: mov     eax, [ebp+var_20]
0x98DECF: call    __SEH_epilog4
0x98DED4: retn
