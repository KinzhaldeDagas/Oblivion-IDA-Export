0x4A5710: push    0FFFFFFFFh; Verified: allocates 16-byte TESRegionDataWeather copy and delegates field/list copy initialization to TESRegionDataWeather_CopyFrom.
0x4A5712: push    offset SEH_8C62B0
0x4A5717: mov     eax, large fs:0
0x4A571D: push    eax
0x4A571E: push    ecx
0x4A571F: push    esi
0x4A5720: mov     eax, ds:0B30AACh
0x4A5725: xor     eax, esp
0x4A5727: push    eax
0x4A5728: lea     eax, [esp+18h+var_C]
0x4A572C: mov     large fs:0, eax
0x4A5732: mov     esi, ecx
0x4A5734: push    10h; Size
0x4A5736: call    FormHeapAlloc
0x4A573B: add     esp, 4
0x4A573E: mov     [esp+18h+var_10], eax
0x4A5742: test    eax, eax
0x4A5744: mov     [esp+18h+var_4], 0
0x4A574C: jz      short loc_4A5767
0x4A574E: push    esi; source
0x4A574F: mov     ecx, eax; this
0x4A5751: call    TESRegionDataWeather_CopyFrom; Verified: copy/merge constructor copies TESRegionData base fields and EntryData list from source Weather data; this is not the RDWT parser.
0x4A5756: mov     ecx, [esp+18h+var_C]
0x4A575A: mov     large fs:0, ecx
0x4A5761: pop     ecx
0x4A5762: pop     esi
0x4A5763: add     esp, 10h
0x4A5766: retn
0x4A5767: xor     eax, eax
0x4A5769: mov     ecx, [esp+18h+var_C]
0x4A576D: mov     large fs:0, ecx
0x4A5774: pop     ecx
0x4A5775: pop     esi
0x4A5776: add     esp, 10h
0x4A5779: retn
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
