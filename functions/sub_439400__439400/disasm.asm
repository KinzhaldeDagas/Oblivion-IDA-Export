0x439400: push    0FFFFFFFFh
0x439402: push    offset SEH_439400
0x439407: mov     eax, large fs:0
0x43940D: push    eax
0x43940E: sub     esp, 5A4h
0x439414: mov     eax, ___security_cookie
0x439419: xor     eax, esp
0x43941B: mov     [esp+5B0h+var_10], eax
0x439422: push    ebx
0x439423: push    ebp
0x439424: push    esi
0x439425: push    edi
0x439426: mov     eax, ___security_cookie
0x43942B: xor     eax, esp
0x43942D: push    eax
0x43942E: lea     eax, [esp+5C4h+var_C]
0x439435: mov     large fs:0, eax
0x43943B: mov     esi, ecx
0x43943D: mov     ecx, ModelLoaderPtr
0x439443: mov     eax, [esi+20h]
0x439446: mov     ecx, [ecx]
0x439448: xor     ebx, ebx
0x43944A: lea     edi, [esp+5C4h+var_5B0]
0x43944E: mov     [esp+5C4h+var_5B0], ebx
0x439452: mov     edx, [ecx]
0x439454: push    edi
0x439455: push    eax
0x439456: mov     eax, [edx+4]
0x439459: call    eax
0x43945B: mov     ebp, ds:InterlockedDecrement
0x439461: neg     al
0x439463: sbb     eax, eax
0x439465: and     eax, [esp+5C4h+var_5B0]
0x439469: mov     edi, eax
0x43946B: mov     eax, [esi+28h]
0x43946E: cmp     eax, edi
0x439470: jz      short loc_43948D
0x439472: cmp     eax, ebx
0x439474: jz      short loc_43947C
0x439476: add     eax, 4
0x439479: push    eax; lpAddend
0x43947A: call    ebp ; InterlockedDecrement
0x43947C: cmp     edi, ebx
0x43947E: mov     [esi+28h], edi
0x439481: jz      short loc_43948D
0x439483: add     edi, 4
0x439486: push    edi; lpAddend
0x439487: call    ds:InterlockedIncrement
0x43948D: cmp     [esi+28h], ebx
0x439490: jz      short loc_43949B
0x439492: or      byte ptr [esi+34h], 10h
0x439496: jmp     loc_43959B
0x43949B: mov     eax, [esi+20h]
0x43949E: lea     ecx, [esp+5C4h+Src]
0x4394A5: push    ecx; int
0x4394A6: mov     ecx, ModelLoaderPtr
0x4394AC: push    eax; Str1
0x4394AD: call    sub_434710
0x4394B2: mov     eax, [esi+24h]
0x4394B5: cmp     eax, ebx
0x4394B7: jz      short loc_4394CA
0x4394B9: push    ebx; ArgList
0x4394BA: push    0FFFFFFFFh; int
0x4394BC: push    eax; int
0x4394BD: push    ebx; int
0x4394BE: call    sub_42EBC0
0x4394C3: add     esp, 10h
0x4394C6: mov     edi, eax
0x4394C8: jmp     short loc_4394E4
0x4394CA: mov     eax, [esi+20h]
0x4394CD: cmp     eax, ebx
0x4394CF: jz      short loc_4394E2
0x4394D1: push    1; int
0x4394D3: push    0FFFFFFFFh; int
0x4394D5: push    eax; Str1
0x4394D6: call    ArchiveManager_FindFileInBSA
0x4394DB: add     esp, 0Ch
0x4394DE: mov     edi, eax
0x4394E0: jmp     short loc_4394E4
0x4394E2: xor     edi, edi
0x4394E4: lea     ecx, [esp+5C4h+var_5A4]; this
0x4394E8: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x4394ED: mov     [esp+5C4h+var_5A4], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x4394F5: mov     [esp+5C4h+var_118], ebx
0x4394FC: mov     [esp+5C4h+var_11C], ebx
0x439503: push    edi; int
0x439504: lea     edx, [esp+5C8h+Src]
0x43950B: push    edx; Src
0x43950C: lea     ecx, [esp+5CCh+var_5A4]
0x439510: mov     [esp+5CCh+var_4], ebx
0x439517: call    sub_6F9980
0x43951C: test    al, al
0x43951E: jnz     short loc_439526
0x439520: test    byte ptr [esi+34h], 20h
0x439524: jz      short loc_439587
0x439526: push    0Ch; Size
0x439528: call    FormHeapAlloc
0x43952D: add     esp, 4
0x439530: mov     [esp+5C4h+var_5A8], eax
0x439534: cmp     eax, ebx
0x439536: mov     byte ptr [esp+5C4h+var_4], 1
0x43953E: jz      short loc_439563
0x439540: mov     cl, [esi+34h]
0x439543: and     cl, 1
0x439546: mov     byte ptr [esp+5C4h+var_5AC], cl
0x43954A: mov     edx, [esp+5C4h+var_5AC]
0x43954E: mov     ecx, [esi+20h]
0x439551: push    edx
0x439552: lea     edx, [esp+5C8h+var_5A4]
0x439556: push    edx
0x439557: push    ecx
0x439558: mov     ecx, eax
0x43955A: call    sub_4390B0
0x43955F: mov     edi, eax
0x439561: jmp     short loc_439565
0x439563: xor     edi, edi
0x439565: mov     eax, [esi+28h]
0x439568: cmp     eax, edi
0x43956A: jz      short loc_439587
0x43956C: cmp     eax, ebx
0x43956E: jz      short loc_439576
0x439570: add     eax, 4
0x439573: push    eax; lpAddend
0x439574: call    ebp ; InterlockedDecrement
0x439576: cmp     edi, ebx
0x439578: mov     [esi+28h], edi
0x43957B: jz      short loc_439587
0x43957D: add     edi, 4
0x439580: push    edi; lpAddend
0x439581: call    ds:InterlockedIncrement
0x439587: lea     ecx, [esp+5C4h+var_5A4]; this
0x43958B: mov     [esp+5C4h+var_4], 0FFFFFFFFh
0x439596: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x43959B: mov     ecx, [esp+5C4h+var_C]
0x4395A2: mov     large fs:0, ecx
0x4395A9: pop     ecx
0x4395AA: pop     edi
0x4395AB: pop     esi
0x4395AC: pop     ebp
0x4395AD: pop     ebx
0x4395AE: mov     ecx, [esp+5B0h+var_10]
0x4395B5: xor     ecx, esp
0x4395B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4395BC: add     esp, 5B0h
0x4395C2: retn
