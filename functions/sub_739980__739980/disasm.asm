0x739980: push    0FFFFFFFFh
0x739982: push    offset SEH_8C8900
0x739987: mov     eax, large fs:0
0x73998D: push    eax
0x73998E: push    ecx
0x73998F: mov     eax, ds:0B30AACh
0x739994: xor     eax, esp
0x739996: push    eax
0x739997: lea     eax, [esp+14h+var_C]
0x73999B: mov     large fs:0, eax
0x7399A1: push    18h; Size
0x7399A3: call    FormHeapAlloc
0x7399A8: add     esp, 4
0x7399AB: xor     ecx, ecx
0x7399AD: cmp     eax, ecx
0x7399AF: jz      short loc_7399DC
0x7399B1: mov     edx, 8
0x7399B6: mov     [eax], ecx
0x7399B8: mov     [eax+4], ecx
0x7399BB: mov     [eax+8], ecx
0x7399BE: mov     [eax+0Ch], edx
0x7399C1: mov     [eax+10h], edx
0x7399C4: mov     [eax+14h], ecx
0x7399C7: mov     ds:0B40134h, eax
0x7399CC: mov     ecx, [esp+14h+var_C]
0x7399D0: mov     large fs:0, ecx
0x7399D7: pop     ecx
0x7399D8: add     esp, 10h
0x7399DB: retn
0x7399DC: mov     ds:0B40134h, ecx
0x7399E2: mov     ecx, [esp+14h+var_C]
0x7399E6: mov     large fs:0, ecx
0x7399ED: pop     ecx
0x7399EE: add     esp, 10h
0x7399F1: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
