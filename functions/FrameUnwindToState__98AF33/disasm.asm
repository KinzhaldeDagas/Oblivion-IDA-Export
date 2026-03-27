0x98AF33: push    10h
0x98AF35: push    offset stru_AFFC80
0x98AF3A: call    __SEH_prolog4
0x98AF3F: mov     edi, [ebp+arg_8]
0x98AF42: mov     ebx, [ebp+arg_0]
0x98AF45: cmp     dword ptr [edi+4], 80h ; '€'
0x98AF4C: jg      short loc_98AF54
0x98AF4E: movsx   esi, byte ptr [ebx+8]
0x98AF52: jmp     short loc_98AF57
0x98AF54: mov     esi, [ebx+8]
0x98AF57: mov     [ebp+var_1C], esi
0x98AF5A: call    __getptd
0x98AF5F: add     eax, 90h
0x98AF64: inc     dword ptr [eax]
0x98AF66: and     [ebp+ms_exc.registration.TryLevel], 0
0x98AF6A: cmp     esi, [ebp+arg_C]
0x98AF6D: jz      short loc_98AFD4
0x98AF6F: cmp     esi, 0FFFFFFFFh
0x98AF72: jle     short loc_98AF79
0x98AF74: cmp     esi, [edi+4]
0x98AF77: jl      short loc_98AF7E
0x98AF79: call    ?_inconsistency@@YAXXZ
0x98AF7E: mov     eax, esi
0x98AF80: shl     eax, 3
0x98AF83: mov     ecx, [edi+8]
0x98AF86: add     ecx, eax
0x98AF88: mov     esi, [ecx]
0x98AF8A: mov     [ebp+var_20], esi
0x98AF8D: mov     [ebp+ms_exc.registration.TryLevel], 1
0x98AF94: cmp     dword ptr [ecx+4], 0
0x98AF98: jz      short loc_98AFAF
0x98AF9A: mov     [ebx+8], esi
0x98AF9D: push    103h
0x98AFA2: push    ebx
0x98AFA3: mov     ecx, [edi+8]
0x98AFA6: push    dword ptr [ecx+eax+4]
0x98AFAA: call    unknown_libname_88
0x98AFAF: and     [ebp+ms_exc.registration.TryLevel], 0
0x98AFB3: jmp     short loc_98AFCF
0x98AFB5: push    [ebp+ms_exc.exc_ptr]
0x98AFB8: call    ___FrameUnwindFilter
0x98AFBD: pop     ecx
0x98AFBE: retn
0x98AFBF: mov     esp, [ebp+ms_exc.old_esp]
0x98AFC2: and     [ebp+ms_exc.registration.TryLevel], 0
0x98AFC6: mov     edi, [ebp+arg_8]
0x98AFC9: mov     ebx, [ebp+arg_0]
0x98AFCC: mov     esi, [ebp+var_20]
0x98AFCF: mov     [ebp+var_1C], esi
0x98AFD2: jmp     short loc_98AF6A
0x98AFD4: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98AFDB: call    ___FrameUnwindToState___$LN18_1
