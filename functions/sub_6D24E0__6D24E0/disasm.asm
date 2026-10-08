0x6D24E0: push    0FFFFFFFFh
0x6D24E2: push    offset SEH_8C62B0
0x6D24E7: mov     eax, large fs:0
0x6D24ED: push    eax
0x6D24EE: push    ecx
0x6D24EF: push    esi
0x6D24F0: mov     eax, ds:0B30AACh
0x6D24F5: xor     eax, esp
0x6D24F7: push    eax
0x6D24F8: lea     eax, [esp+18h+var_C]
0x6D24FC: mov     large fs:0, eax
0x6D2502: push    34h ; '4'; Size
0x6D2504: call    FormHeapAlloc
0x6D2509: mov     esi, eax
0x6D250B: add     esp, 4
0x6D250E: mov     [esp+18h+var_10], esi
0x6D2512: xor     eax, eax
0x6D2514: cmp     esi, eax
0x6D2516: mov     [esp+18h+var_4], eax
0x6D251A: jz      short loc_6D2534
0x6D251C: mov     ecx, esi
0x6D251E: call    sub_6CC4E0
0x6D2523: mov     dword ptr [esi], offset ??_7NiBlendFloatInterpolator@@6B@; const NiBlendFloatInterpolator::`vftable'
0x6D2529: fld     dword ptr ds:0A7C6B0h
0x6D252F: fstp    dword ptr [esi+30h]
0x6D2532: mov     eax, esi
0x6D2534: mov     ecx, [esp+18h+var_C]
0x6D2538: mov     large fs:0, ecx
0x6D253F: pop     ecx
0x6D2540: pop     esi
0x6D2541: add     esp, 10h
0x6D2544: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
