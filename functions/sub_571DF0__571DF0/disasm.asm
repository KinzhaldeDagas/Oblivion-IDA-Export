0x571DF0: push    0FFFFFFFFh
0x571DF2: push    offset SEH_571DF0
0x571DF7: mov     eax, large fs:0
0x571DFD: push    eax
0x571DFE: push    ecx
0x571DFF: push    esi
0x571E00: push    edi
0x571E01: mov     eax, ds:0B30AACh
0x571E06: xor     eax, esp
0x571E08: push    eax
0x571E09: lea     eax, [esp+1Ch+var_C]
0x571E0D: mov     large fs:0, eax
0x571E13: mov     esi, ecx
0x571E15: mov     eax, [esi+10h]
0x571E18: push    eax
0x571E19: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x571E1E: xor     edi, edi
0x571E20: mov     eax, edi
0x571E22: push    eax
0x571E23: mov     [esi+10h], edi
0x571E26: mov     [esi+16h], di
0x571E2A: mov     [esi+14h], di
0x571E2E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x571E33: mov     [esi+10h], edi
0x571E36: mov     [esi+16h], di
0x571E3A: mov     [esi+14h], di
0x571E3E: mov     esi, [esi+0Ch]
0x571E41: add     esp, 8
0x571E44: cmp     esi, edi
0x571E46: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x571E4E: jz      short loc_571E6C
0x571E50: lea     eax, [esi+4]
0x571E53: push    eax; lpAddend
0x571E54: call    dword ptr ds:0A2807Ch
0x571E5A: test    eax, eax
0x571E5C: jnz     short loc_571E6C
0x571E5E: cmp     esi, edi
0x571E60: jz      short loc_571E6C
0x571E62: mov     edx, [esi]
0x571E64: mov     eax, [edx]
0x571E66: push    1
0x571E68: mov     ecx, esi
0x571E6A: call    eax
0x571E6C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x571E70: mov     large fs:0, ecx
0x571E77: pop     ecx
0x571E78: pop     edi
0x571E79: pop     esi
0x571E7A: add     esp, 10h
0x571E7D: retn
0x9BDE60: mov     ecx, [ebp-10h]
0x9BDE63: add     ecx, 0Ch; slot
0x9BDE66: jmp     NiPointerSlot_Release
0x9BDE6B: mov     ecx, [ebp-10h]
0x9BDE6E: add     ecx, 10h; void *
0x9BDE71: jmp     BSStringT_Clear
0x9BDE76: mov     edx, [esp+arg_4]
0x9BDE7A: lea     eax, [edx-0Ch]
0x9BDE7D: mov     ecx, [edx-10h]
0x9BDE80: xor     ecx, eax
0x9BDE82: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BDE87: mov     eax, offset stru_AE76D4
0x9BDE8C: jmp     ___CxxFrameHandler3
