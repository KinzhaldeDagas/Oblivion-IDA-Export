0x439940: push    0FFFFFFFFh
0x439942: push    offset SEH_439940
0x439947: mov     eax, large fs:0
0x43994D: push    eax
0x43994E: sub     esp, 5A0h
0x439954: mov     eax, ___security_cookie
0x439959: xor     eax, esp
0x43995B: mov     [esp+5ACh+var_10], eax
0x439962: push    ebx
0x439963: push    ebp
0x439964: push    esi
0x439965: push    edi
0x439966: mov     eax, ___security_cookie
0x43996B: xor     eax, esp
0x43996D: push    eax
0x43996E: lea     eax, [esp+5C0h+var_C]
0x439975: mov     large fs:0, eax
0x43997B: mov     esi, ecx
0x43997D: mov     ecx, ModelLoaderPtr
0x439983: mov     eax, [esi+20h]
0x439986: mov     ecx, [ecx+4]
0x439989: xor     ebx, ebx
0x43998B: lea     edi, [esp+5C0h+var_5AC]
0x43998F: mov     [esp+5C0h+var_5AC], ebx
0x439993: mov     edx, [ecx]
0x439995: push    edi
0x439996: push    eax
0x439997: mov     eax, [edx+4]
0x43999A: call    eax
0x43999C: mov     ebp, ds:InterlockedDecrement
0x4399A2: neg     al
0x4399A4: sbb     eax, eax
0x4399A6: and     eax, [esp+5C0h+var_5AC]
0x4399AA: mov     edi, eax
0x4399AC: mov     eax, [esi+28h]
0x4399AF: cmp     eax, edi
0x4399B1: jz      short loc_4399CE
0x4399B3: cmp     eax, ebx
0x4399B5: jz      short loc_4399BD
0x4399B7: add     eax, 0Ch
0x4399BA: push    eax; lpAddend
0x4399BB: call    ebp ; InterlockedDecrement
0x4399BD: cmp     edi, ebx
0x4399BF: mov     [esi+28h], edi
0x4399C2: jz      short loc_4399CE
0x4399C4: add     edi, 0Ch
0x4399C7: push    edi; lpAddend
0x4399C8: call    ds:InterlockedIncrement
0x4399CE: cmp     [esi+28h], ebx
0x4399D1: jz      short loc_4399DC
0x4399D3: or      byte ptr [esi+2Ch], 1
0x4399D7: jmp     loc_439AC7
0x4399DC: mov     eax, [esi+20h]
0x4399DF: lea     ecx, [esp+5C0h+Src]
0x4399E6: push    ecx; int
0x4399E7: mov     ecx, ModelLoaderPtr
0x4399ED: push    eax; Str1
0x4399EE: call    sub_434710
0x4399F3: mov     eax, [esi+24h]
0x4399F6: cmp     eax, ebx
0x4399F8: jz      short loc_439A0B
0x4399FA: push    ebx; ArgList
0x4399FB: push    0FFFFFFFFh; int
0x4399FD: push    eax; int
0x4399FE: push    ebx; int
0x4399FF: call    sub_42EBC0
0x439A04: add     esp, 10h
0x439A07: mov     edi, eax
0x439A09: jmp     short loc_439A25
0x439A0B: mov     eax, [esi+20h]
0x439A0E: cmp     eax, ebx
0x439A10: jz      short loc_439A23
0x439A12: push    1; int
0x439A14: push    0FFFFFFFFh; int
0x439A16: push    eax; Str1
0x439A17: call    ArchiveManager_FindFileInBSA
0x439A1C: add     esp, 0Ch
0x439A1F: mov     edi, eax
0x439A21: jmp     short loc_439A25
0x439A23: xor     edi, edi
0x439A25: lea     ecx, [esp+5C0h+var_5A4]; this
0x439A29: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x439A2E: mov     [esp+5C0h+var_5A4], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x439A36: mov     [esp+5C0h+var_118], ebx
0x439A3D: mov     [esp+5C0h+var_11C], ebx
0x439A44: push    edi; int
0x439A45: lea     edx, [esp+5C4h+Src]
0x439A4C: push    edx; Src
0x439A4D: lea     ecx, [esp+5C8h+var_5A4]
0x439A51: mov     [esp+5C8h+var_4], ebx
0x439A58: call    sub_6F9980
0x439A5D: test    al, al
0x439A5F: jz      short loc_439AB3
0x439A61: push    10h; Size
0x439A63: call    FormHeapAlloc
0x439A68: add     esp, 4
0x439A6B: mov     [esp+5C0h+var_5A8], eax
0x439A6F: cmp     eax, ebx
0x439A71: mov     byte ptr [esp+5C0h+var_4], 1
0x439A79: jz      short loc_439A8F
0x439A7B: mov     ecx, [esi+20h]
0x439A7E: lea     edx, [esp+5C0h+var_5A4]
0x439A82: push    edx
0x439A83: push    ecx
0x439A84: mov     ecx, eax
0x439A86: call    sub_439140
0x439A8B: mov     edi, eax
0x439A8D: jmp     short loc_439A91
0x439A8F: xor     edi, edi
0x439A91: mov     eax, [esi+28h]
0x439A94: cmp     eax, edi
0x439A96: jz      short loc_439AB3
0x439A98: cmp     eax, ebx
0x439A9A: jz      short loc_439AA2
0x439A9C: add     eax, 0Ch
0x439A9F: push    eax; lpAddend
0x439AA0: call    ebp ; InterlockedDecrement
0x439AA2: cmp     edi, ebx
0x439AA4: mov     [esi+28h], edi
0x439AA7: jz      short loc_439AB3
0x439AA9: add     edi, 0Ch
0x439AAC: push    edi; lpAddend
0x439AAD: call    ds:InterlockedIncrement
0x439AB3: lea     ecx, [esp+5C0h+var_5A4]; this
0x439AB7: mov     [esp+5C0h+var_4], 0FFFFFFFFh
0x439AC2: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x439AC7: mov     ecx, [esp+5C0h+var_C]
0x439ACE: mov     large fs:0, ecx
0x439AD5: pop     ecx
0x439AD6: pop     edi
0x439AD7: pop     esi
0x439AD8: pop     ebp
0x439AD9: pop     ebx
0x439ADA: mov     ecx, [esp+5ACh+var_10]
0x439AE1: xor     ecx, esp
0x439AE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x439AE8: add     esp, 5ACh
0x439AEE: retn
