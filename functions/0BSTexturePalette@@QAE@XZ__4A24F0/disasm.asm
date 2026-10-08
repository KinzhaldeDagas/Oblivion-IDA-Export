0x4A24F0: push    0FFFFFFFFh
0x4A24F2: push    offset ??0BSTexturePalette@@QAE@XZ_SEH
0x4A24F7: mov     eax, large fs:0
0x4A24FD: push    eax
0x4A24FE: sub     esp, 8
0x4A2501: push    ebx
0x4A2502: push    esi
0x4A2503: push    edi
0x4A2504: mov     eax, ds:0B30AACh
0x4A2509: xor     eax, esp
0x4A250B: push    eax
0x4A250C: lea     eax, [esp+24h+var_C]
0x4A2510: mov     large fs:0, eax
0x4A2516: mov     edi, ecx
0x4A2518: mov     [esp+24h+var_14], edi
0x4A251C: xor     ebx, ebx
0x4A251E: push    0B3FD64h; lpAddend
0x4A2523: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x4A2529: mov     [edi+4], ebx
0x4A252C: call    dword ptr ds:0A28078h
0x4A2532: push    10h; Size
0x4A2534: mov     [esp+28h+var_4], ebx
0x4A2538: mov     dword ptr [edi], offset ??_7BSTexturePalette@@6B@; const BSTexturePalette::`vftable'
0x4A253E: call    FormHeapAlloc
0x4A2543: add     esp, 4
0x4A2546: mov     [esp+24h+var_10], eax
0x4A254A: cmp     eax, ebx
0x4A254C: mov     byte ptr [esp+24h+var_4], 1
0x4A2551: jz      short loc_4A2561
0x4A2553: mov     ecx, [esp+24h+arg_0]
0x4A2557: push    ecx
0x4A2558: mov     ecx, eax
0x4A255A: call    ??0?$NiTPointerMap@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@QAE@XZ; NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(void)
0x4A255F: jmp     short loc_4A2563
0x4A2561: xor     eax, eax
0x4A2563: push    14h; Size
0x4A2565: mov     byte ptr [esp+28h+var_4], bl
0x4A2569: mov     [edi+8], eax
0x4A256C: call    FormHeapAlloc
0x4A2571: mov     esi, eax
0x4A2573: add     esp, 4
0x4A2576: mov     [esp+24h+arg_0], esi
0x4A257A: cmp     esi, ebx
0x4A257C: mov     byte ptr [esp+24h+var_4], 2
0x4A2581: jz      short loc_4A25CE
0x4A2583: xor     ecx, ecx
0x4A2585: mov     eax, 20Bh
0x4A258A: mov     [esi+4], eax
0x4A258D: mov     edx, 4
0x4A2592: mul     edx
0x4A2594: seto    cl
0x4A2597: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiTexture>>::`vftable'
0x4A259D: mov     [esi+0Ch], ebx
0x4A25A0: neg     ecx
0x4A25A2: or      ecx, eax
0x4A25A4: push    ecx; Size
0x4A25A5: call    FormHeapAlloc
0x4A25AA: mov     ecx, [esi+4]
0x4A25AD: add     ecx, ecx
0x4A25AF: add     ecx, ecx
0x4A25B1: push    ecx
0x4A25B2: push    ebx
0x4A25B3: push    eax
0x4A25B4: mov     [esi+8], eax
0x4A25B7: call    __memset
0x4A25BC: mov     byte ptr [esi+10h], 1
0x4A25C0: mov     dword ptr [esi], offset ??_7?$NiTStringPointerMap@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTStringPointerMap<NiPointer<NiTexture>>::`vftable'
0x4A25C6: add     esp, 10h
0x4A25C9: mov     [edi+0Ch], esi
0x4A25CC: jmp     short loc_4A25D1
0x4A25CE: mov     [edi+0Ch], ebx
0x4A25D1: mov     eax, edi
0x4A25D3: mov     ecx, [esp+24h+var_C]
0x4A25D7: mov     large fs:0, ecx
0x4A25DE: pop     ecx
0x4A25DF: pop     edi
0x4A25E0: pop     esi
0x4A25E1: pop     ebx
0x4A25E2: add     esp, 14h
0x4A25E5: retn    4
0x9B2350: mov     ecx, [ebp-14h]
0x9B2353: jmp     NiRefObject_destr
0x9B2358: mov     eax, [ebp-10h]
0x9B235B: push    eax
0x9B235C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B2361: pop     ecx
0x9B2362: retn
0x9B2363: mov     eax, [ebp+4]
0x9B2366: push    eax
0x9B2367: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B236C: pop     ecx
0x9B236D: retn
0x9B236E: mov     edx, [esp+arg_4]
0x9B2372: lea     eax, [edx-14h]
0x9B2375: mov     ecx, [edx-18h]
0x9B2378: xor     ecx, eax
0x9B237A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B237F: mov     eax, offset stru_ADE35C
0x9B2384: jmp     ___CxxFrameHandler3
