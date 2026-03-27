0x4CDFF0: mov     eax, [esp+arg_0]
0x4CDFF4: push    ebx
0x4CDFF5: push    esi
0x4CDFF6: push    0; int
0x4CDFF8: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4CDFFD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CE002: push    0; int
0x4CE004: push    eax; void *
0x4CE005: mov     esi, ecx
0x4CE007: call    OblivionDynamicCast
0x4CE00C: mov     ebx, eax
0x4CE00E: add     esp, 14h
0x4CE011: test    ebx, ebx
0x4CE013: jz      short loc_4CE070
0x4CE015: push    ebx; a2
0x4CE016: mov     ecx, esi; this
0x4CE018: call    TESForm_CopyAllComponentsFrom
0x4CE01D: lea     ecx, [ebx+28h]
0x4CE020: push    ecx
0x4CE021: lea     ecx, [esi+28h]
0x4CE024: call    BaseExtraList_Copy
0x4CE029: mov     edx, [esi+3Ch]
0x4CE02C: push    edx
0x4CE02D: call    FormHeapFree
0x4CE032: mov     dword ptr [esi+3Ch], 0
0x4CE039: mov     al, [ebx+24h]
0x4CE03C: add     esp, 4
0x4CE03F: mov     ecx, esi
0x4CE041: mov     [esi+24h], al
0x4CE044: call    sub_4CA710
0x4CE049: mov     al, 1
0x4CE04B: test    [esi+24h], al
0x4CE04E: jz      short loc_4CE075
0x4CE050: test    [ebx+24h], al
0x4CE053: push    edi
0x4CE054: mov     edi, [esi+3Ch]
0x4CE057: jnz     short loc_4CE05D
0x4CE059: xor     esi, esi
0x4CE05B: jmp     short loc_4CE060
0x4CE05D: mov     esi, [ebx+3Ch]
0x4CE060: test    edi, edi
0x4CE062: jz      short loc_4CE06F
0x4CE064: test    esi, esi
0x4CE066: jz      short loc_4CE06F
0x4CE068: mov     ecx, 0Ah
0x4CE06D: rep movsd
0x4CE06F: pop     edi
0x4CE070: pop     esi
0x4CE071: pop     ebx
0x4CE072: retn    4
0x4CE075: test    [ebx+24h], al
0x4CE078: mov     esi, [esi+3Ch]
0x4CE07B: jz      short loc_4CE081
0x4CE07D: xor     ebx, ebx
0x4CE07F: jmp     short loc_4CE084
0x4CE081: mov     ebx, [ebx+3Ch]
0x4CE084: test    esi, esi
0x4CE086: jz      short loc_4CE070
0x4CE088: test    ebx, ebx
0x4CE08A: jz      short loc_4CE070
0x4CE08C: mov     ecx, [ebx]
0x4CE08E: mov     [esi], ecx
0x4CE090: mov     edx, [ebx+4]
0x4CE093: mov     [esi+4], edx
0x4CE096: pop     esi
0x4CE097: pop     ebx
0x4CE098: retn    4
