0x4D32C0: push    0FFFFFFFFh
0x4D32C2: push    offset TESObjectCELL_destr_SEH
0x4D32C7: mov     eax, large fs:0
0x4D32CD: push    eax
0x4D32CE: sub     esp, 8
0x4D32D1: push    ebx
0x4D32D2: push    ebp
0x4D32D3: push    esi
0x4D32D4: push    edi; int
0x4D32D5: mov     eax, ds:0B30AACh
0x4D32DA: xor     eax, esp
0x4D32DC: push    eax; int
0x4D32DD: lea     eax, [esp+28h+var_C]
0x4D32E1: mov     large fs:0, eax
0x4D32E7: mov     esi, ecx
0x4D32E9: mov     [esp+28h+var_10], esi
0x4D32ED: mov     dword ptr [esi], offset ??_7TESObjectCELL@@6BTESObjectCELL@@@; const TESObjectCELL::`vftable'{for `TESObjectCELL'}
0x4D32F3: mov     dword ptr [esi+18h], offset ??_7TESObjectCELL@@6BTESFullName@@@; const TESObjectCELL::`vftable'{for `TESFullName'}
0x4D32FA: mov     eax, [esi+8]
0x4D32FD: shr     eax, 0Eh
0x4D3300: xor     ebx, ebx
0x4D3302: test    al, 1
0x4D3304: mov     [esp+28h+var_4], 3
0x4D330C: jnz     short loc_4D3358
0x4D330E: call    sub_4CED70
0x4D3313: mov     ecx, [esi+40h]
0x4D3316: cmp     ecx, ebx
0x4D3318: jz      short loc_4D3326
0x4D331A: mov     edx, [ecx]
0x4D331C: mov     eax, [edx+10h]
0x4D331F: push    1
0x4D3321: call    eax
0x4D3323: mov     [esi+40h], ebx
0x4D3326: mov     ecx, [esi+44h]
0x4D3329: cmp     ecx, ebx
0x4D332B: jz      short loc_4D3339
0x4D332D: mov     edx, [ecx]
0x4D332F: mov     eax, [edx+10h]
0x4D3332: push    1
0x4D3334: call    eax
0x4D3336: mov     [esi+44h], ebx
0x4D3339: lea     ecx, [esi+28h]
0x4D333C: call    sub_41F9B0
0x4D3341: mov     edi, eax
0x4D3343: cmp     edi, ebx
0x4D3345: jz      short loc_4D3358
0x4D3347: mov     ecx, edi
0x4D3349: call    sub_4A6380
0x4D334E: mov     edx, [edi]
0x4D3350: mov     eax, [edx]
0x4D3352: push    1
0x4D3354: mov     ecx, edi
0x4D3356: call    eax
0x4D3358: mov     ecx, ds:0B33A98h
0x4D335E: cmp     [ecx+0CD4h], bl
0x4D3364: jnz     short loc_4D3379
0x4D3366: test    byte ptr [esi+24h], 1
0x4D336A: jnz     short loc_4D3379
0x4D336C: mov     ecx, [esi+50h]
0x4D336F: cmp     ecx, ebx
0x4D3371: jz      short loc_4D3379
0x4D3373: push    esi
0x4D3374: call    TESWorldSpace_RemoveCellFromCellMap
0x4D3379: cmp     esi, ds:0B3B784h
0x4D337F: jnz     short loc_4D3387
0x4D3381: mov     ds:0B3B784h, ebx
0x4D3387: mov     eax, ds:0B333A0h
0x4D338C: cmp     eax, ebx
0x4D338E: jz      short loc_4D3398
0x4D3390: cmp     [eax+30h], esi
0x4D3393: jnz     short loc_4D3398
0x4D3395: mov     [eax+30h], ebx
0x4D3398: cmp     ds:0B35224h, esi
0x4D339E: jnz     short loc_4D33A6
0x4D33A0: mov     ds:0B35224h, ebx
0x4D33A6: lea     ebp, [esi+28h]
0x4D33A9: mov     ecx, ebp
0x4D33AB: call    ExtraDataList_RemoveAllNonpersistentCellData
0x4D33B0: mov     eax, [esi+3Ch]
0x4D33B3: push    eax
0x4D33B4: call    FormHeapFree
0x4D33B9: mov     [esi+3Ch], ebx
0x4D33BC: mov     ecx, ds:0B35C08h; this
0x4D33C2: add     esp, 4
0x4D33C5: cmp     ecx, ebx
0x4D33C7: mov     edi, ecx
0x4D33C9: jz      short loc_4D33E1
0x4D33CB: call    sub_533980
0x4D33D0: movzx   edx, byte ptr [edi-1]
0x4D33D4: sub     edi, edx
0x4D33D6: push    edi; void *
0x4D33D7: mov     ecx, offset FormHeap
0x4D33DC: call    MemoryHeap_Free_checked
0x4D33E1: mov     ds:0B35C08h, ebx
0x4D33E7: mov     edi, [esi+54h]
0x4D33EA: cmp     edi, ebx
0x4D33EC: mov     byte ptr [esp+28h+var_4], 2
0x4D33F1: jz      short loc_4D340F
0x4D33F3: lea     eax, [edi+4]
0x4D33F6: push    eax; lpAddend
0x4D33F7: call    dword ptr ds:0A2807Ch
0x4D33FD: test    eax, eax
0x4D33FF: jnz     short loc_4D340F
0x4D3401: cmp     edi, ebx
0x4D3403: jz      short loc_4D340F
0x4D3405: mov     edx, [edi]
0x4D3407: mov     eax, [edx]
0x4D3409: push    1
0x4D340B: mov     ecx, edi
0x4D340D: call    eax
0x4D340F: mov     ecx, ebp
0x4D3411: mov     byte ptr [esp+28h+var_4], 1
0x4D3416: call    BaseExtraList_destr
0x4D341B: mov     eax, [esi+1Ch]
0x4D341E: push    eax
0x4D341F: call    FormHeapFree
0x4D3424: add     esp, 4
0x4D3427: mov     ecx, esi; this
0x4D3429: mov     [esi+1Ch], ebx
0x4D342C: mov     [esi+22h], bx
0x4D3430: mov     [esi+20h], bx
0x4D3434: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4D343C: call    TESForm_destr
0x4D3441: mov     ecx, dword ptr [esp+28h+var_C]
0x4D3445: mov     large fs:0, ecx
0x4D344C: pop     ecx
0x4D344D: pop     edi
0x4D344E: pop     esi
0x4D344F: pop     ebp
0x4D3450: pop     ebx
0x4D3451: add     esp, 14h
0x4D3454: retn
