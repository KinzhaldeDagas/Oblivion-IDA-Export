0x4B3400: push    ecx; Verified: replaces global TESTextureList cache value keyed by this form's FormID; clears/frees prior value before storing new parsed list.
0x4B3401: push    esi
0x4B3402: mov     esi, ecx
0x4B3404: mov     eax, [esi+0Ch]
0x4B3407: lea     ecx, [esp+8+var_4]
0x4B340B: push    ecx
0x4B340C: push    eax
0x4B340D: mov     ecx, offset g_TESObjectTREETextureHashCache
0x4B3412: mov     [esp+10h+var_4], 0
0x4B341A: call    NiTMap_GetAt
0x4B341F: test    al, al
0x4B3421: jz      short loc_4B343D
0x4B3423: push    edi
0x4B3424: mov     edi, [esp+0Ch+var_4]
0x4B3428: test    edi, edi
0x4B342A: jz      short loc_4B343C
0x4B342C: mov     ecx, edi; this
0x4B342E: call    TESTextureList_Clear
0x4B3433: push    edi
0x4B3434: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B3439: add     esp, 4
0x4B343C: pop     edi
0x4B343D: mov     edx, [esp+8+a3]
0x4B3441: mov     eax, [esi+0Ch]
0x4B3444: push    edx; a3
0x4B3445: push    eax; a2
0x4B3446: mov     ecx, offset g_TESObjectTREETextureHashCache; this
0x4B344B: call    NiTMap_SetAt
0x4B3450: pop     esi
0x4B3451: pop     ecx
0x4B3452: retn    4
