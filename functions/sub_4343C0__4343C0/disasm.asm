0x4343C0: push    0FFFFFFFFh
0x4343C2: push    offset SEH_4343C0
0x4343C7: mov     eax, large fs:0
0x4343CD: push    eax
0x4343CE: push    ecx
0x4343CF: push    esi
0x4343D0: push    edi
0x4343D1: mov     eax, ___security_cookie
0x4343D6: xor     eax, esp
0x4343D8: push    eax
0x4343D9: lea     eax, [esp+1Ch+var_C]
0x4343DD: mov     large fs:0, eax
0x4343E3: mov     esi, ecx
0x4343E5: mov     [esp+1Ch+var_10], esi
0x4343E9: mov     dword ptr [esi], offset ??_7?$BSTaskManager@_J@@6B@; const BSTaskManager<__int64>::`vftable'
0x4343EF: xor     edi, edi
0x4343F1: cmp     [esi+24h], edi
0x4343F4: mov     [esp+1Ch+var_4], 0
0x4343FC: jbe     short loc_43441A
0x4343FE: mov     edi, edi
0x434400: mov     eax, [esi+28h]
0x434403: mov     ecx, [eax+edi*4]
0x434406: test    ecx, ecx
0x434408: jz      short loc_434412
0x43440A: mov     edx, [ecx]
0x43440C: mov     eax, [edx]
0x43440E: push    1
0x434410: call    eax
0x434412: add     edi, 1
0x434415: cmp     edi, [esi+24h]
0x434418: jb      short loc_434400
0x43441A: mov     eax, [esi+28h]
0x43441D: push    eax
0x43441E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x434423: mov     eax, [esi+2Ch]
0x434426: push    eax
0x434427: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43442C: add     esp, 8
0x43442F: push    1; a2
0x434431: mov     ecx, esi; this
0x434433: mov     [esp+20h+var_4], 0FFFFFFFFh
0x43443B: mov     dword ptr [esi], offset ??_7?$LockFreeMap@_JV?$NiPointer@V?$BSTask@_J@@@@@@6B@; const LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::`vftable'
0x434441: call    sub_433D70; Or LockFreeQueue
0x434446: mov     ecx, [esi+0Ch]
0x434449: push    ecx
0x43444A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43444F: mov     edx, [esi+4]
0x434452: mov     [esp+20h+var_10], edx
0x434456: mov     eax, [esp+20h+var_10]
0x43445A: push    eax
0x43445B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x434460: add     esp, 8
0x434463: mov     ecx, dword ptr [esp+1Ch+var_C]
0x434467: mov     large fs:0, ecx
0x43446E: pop     ecx
0x43446F: pop     edi
0x434470: pop     esi
0x434471: add     esp, 10h
0x434474: retn
0x4341F0: push    ecx
0x4341F1: push    esi
0x4341F2: mov     esi, ecx
0x4341F4: push    1; a2
0x4341F6: mov     dword ptr [esi], offset ??_7?$LockFreeMap@_JV?$NiPointer@V?$BSTask@_J@@@@@@6B@; const LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::`vftable'
0x4341FC: call    sub_433D70; Or LockFreeQueue
0x434201: mov     eax, [esi+0Ch]
0x434204: push    eax
0x434205: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43420A: mov     ecx, [esi+4]
0x43420D: mov     [esp+0Ch+var_4], ecx
0x434211: mov     edx, [esp+0Ch+var_4]
0x434215: push    edx
0x434216: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43421B: add     esp, 8
0x43421E: pop     esi
0x43421F: pop     ecx
0x434220: retn
0x9AC0A0: mov     ecx, [ebp-10h]
0x9AC0A3: jmp     loc_4341F0
0x9AC0A8: mov     edx, [esp+arg_4]
0x9AC0AC: lea     eax, [edx-0Ch]
0x9AC0AF: mov     ecx, [edx-10h]
0x9AC0B2: xor     ecx, eax
0x9AC0B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC0B9: mov     eax, offset stru_AD8DC8
0x9AC0BE: jmp     ___CxxFrameHandler3
