0x43BEB0: push    0FFFFFFFFh
0x43BEB2: push    offset SEH_43BEB0
0x43BEB7: mov     eax, large fs:0
0x43BEBD: push    eax
0x43BEBE: sub     esp, 18h
0x43BEC1: push    ebx
0x43BEC2: push    esi
0x43BEC3: push    edi
0x43BEC4: mov     eax, ___security_cookie
0x43BEC9: xor     eax, esp
0x43BECB: push    eax
0x43BECC: lea     eax, [esp+34h+var_C]
0x43BED0: mov     large fs:0, eax
0x43BED6: mov     edi, ecx
0x43BED8: xor     ebx, ebx
0x43BEDA: cmp     [edi], ebx
0x43BEDC: jz      loc_43BF6F
0x43BEE2: mov     [esp+34h+var_18], ebx
0x43BEE6: mov     [esp+34h+var_14], ebx
0x43BEEA: mov     [esp+34h+var_10], bl
0x43BEEE: mov     [esp+34h+var_1C], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVModel@@@@6B@; const LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'
0x43BEF6: mov     [esp+34h+var_4], ebx
0x43BEFA: lea     ebx, [ebx+0]
0x43BF00: push    1
0x43BF02: lea     eax, [esp+38h+var_24]
0x43BF06: push    eax
0x43BF07: lea     ecx, [esp+3Ch+var_20]
0x43BF0B: push    ecx
0x43BF0C: mov     ecx, [edi]
0x43BF0E: lea     edx, [esp+40h+var_1C]
0x43BF12: push    edx
0x43BF13: mov     [esp+44h+var_24], ebx
0x43BF17: mov     [esp+44h+var_20], ebx
0x43BF1B: call    sub_43AB80
0x43BF20: test    al, al
0x43BF22: jz      short loc_43BF53
0x43BF24: mov     esi, [esp+34h+var_24]
0x43BF28: cmp     esi, ebx
0x43BF2A: jz      short loc_43BF53
0x43BF2C: movzx   eax, word ptr [esi+4]
0x43BF30: cmp     ax, bx
0x43BF33: jnz     short loc_43BF53
0x43BF35: mov     ecx, [edi]
0x43BF37: mov     eax, [ecx]
0x43BF39: mov     edx, [esp+34h+var_20]
0x43BF3D: mov     eax, [eax+10h]
0x43BF40: push    edx
0x43BF41: call    eax
0x43BF43: mov     ecx, esi
0x43BF45: call    sub_4349B0
0x43BF4A: push    esi
0x43BF4B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43BF50: add     esp, 4
0x43BF53: test    [esp+34h+var_10], 2
0x43BF58: jz      short loc_43BF00
0x43BF5A: mov     ecx, [esp+34h+var_14]
0x43BF5E: push    ecx
0x43BF5F: mov     [esp+38h+var_4], 0FFFFFFFFh
0x43BF67: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43BF6C: add     esp, 4
0x43BF6F: cmp     [edi+4], ebx
0x43BF72: jz      loc_43C017
0x43BF78: mov     [esp+34h+var_18], ebx
0x43BF7C: mov     [esp+34h+var_14], ebx
0x43BF80: mov     [esp+34h+var_10], bl
0x43BF84: mov     [esp+34h+var_1C], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVKFModel@@@@6B@; const LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'
0x43BF8C: mov     [esp+34h+var_4], 1
0x43BF94: push    1
0x43BF96: lea     edx, [esp+38h+var_20]
0x43BF9A: push    edx
0x43BF9B: lea     eax, [esp+3Ch+var_24]
0x43BF9F: push    eax
0x43BFA0: lea     ecx, [esp+40h+var_1C]
0x43BFA4: push    ecx
0x43BFA5: mov     ecx, [edi+4]
0x43BFA8: mov     [esp+44h+var_20], ebx
0x43BFAC: mov     [esp+44h+var_24], ebx
0x43BFB0: call    sub_43AB80
0x43BFB5: test    al, al
0x43BFB7: jz      short loc_43C003
0x43BFB9: mov     esi, [esp+34h+var_20]
0x43BFBD: cmp     esi, ebx
0x43BFBF: jz      short loc_43C003
0x43BFC1: cmp     [esi+0Ch], ebx
0x43BFC4: jnz     short loc_43C003
0x43BFC6: mov     ecx, [esi+8]
0x43BFC9: cmp     ecx, ebx
0x43BFCB: jz      short loc_43BFE4
0x43BFCD: call    TESAnimGroup_GetAnimationGroup; TESAnimGroup native group id accessor: byte at TESAnimGroup +0x08.
0x43BFD2: cmp     eax, 16h
0x43BFD5: jl      short loc_43BFE4
0x43BFD7: mov     ecx, [esi+8]
0x43BFDA: call    TESAnimGroup_GetAnimationGroup; TESAnimGroup native group id accessor: byte at TESAnimGroup +0x08.
0x43BFDF: cmp     eax, 1Bh
0x43BFE2: jl      short loc_43C003
0x43BFE4: mov     ecx, [edi+4]
0x43BFE7: mov     edx, [ecx]
0x43BFE9: mov     eax, [esp+34h+var_24]
0x43BFED: mov     edx, [edx+10h]
0x43BFF0: push    eax
0x43BFF1: call    edx
0x43BFF3: mov     ecx, esi
0x43BFF5: call    sub_436CB0
0x43BFFA: push    esi
0x43BFFB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43C000: add     esp, 4
0x43C003: test    [esp+34h+var_10], 2
0x43C008: jz      short loc_43BF94
0x43C00A: mov     eax, [esp+34h+var_14]
0x43C00E: push    eax
0x43C00F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43C014: add     esp, 4
0x43C017: mov     ecx, dword ptr [esp+34h+var_C]
0x43C01B: mov     large fs:0, ecx
0x43C022: pop     ecx
0x43C023: pop     edi
0x43C024: pop     esi
0x43C025: pop     ebx
0x43C026: add     esp, 24h
0x43C029: retn
0x438810: push    esi
0x438811: mov     esi, ecx
0x438813: mov     eax, [esi+8]
0x438816: push    eax
0x438817: mov     dword ptr [esi], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVModel@@@@6B@; const LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'
0x43881D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x438822: add     esp, 4
0x438825: mov     dword ptr [esi+8], 0
0x43882C: mov     dword ptr [esi], offset ??_7LockFreeMapIterator@?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::LockFreeMapIterator::`vftable'
0x438832: pop     esi
0x438833: retn
0x438840: push    esi
0x438841: mov     esi, ecx
0x438843: mov     eax, [esi+8]
0x438846: push    eax
0x438847: mov     dword ptr [esi], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVKFModel@@@@6B@; const LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'
0x43884D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x438852: add     esp, 4
0x438855: mov     dword ptr [esi+8], 0
0x43885C: mov     dword ptr [esi], offset ??_7LockFreeMapIterator@?$LockFreeMap@PBDPAVKFModel@@@@6B@; const LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable'
0x438862: pop     esi
0x438863: retn
0x9ACBF0: lea     ecx, [ebp-1Ch]
0x9ACBF3: jmp     loc_438810
0x9ACBF8: lea     ecx, [ebp-1Ch]
0x9ACBFB: jmp     loc_438840
0x9ACC00: mov     edx, [esp+arg_4]
0x9ACC04: lea     eax, [edx-24h]
0x9ACC07: mov     ecx, [edx-28h]
0x9ACC0A: xor     ecx, eax
0x9ACC0C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACC11: mov     eax, offset stru_AD9820
0x9ACC16: jmp     ___CxxFrameHandler3
