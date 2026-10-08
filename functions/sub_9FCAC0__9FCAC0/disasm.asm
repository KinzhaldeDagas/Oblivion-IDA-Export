0x9FCAC0: push    0FFFFFFFFh
0x9FCAC2: push    offset SEH_9FCAC0
0x9FCAC7: mov     eax, large fs:0
0x9FCACD: push    eax
0x9FCACE: mov     eax, ___security_cookie
0x9FCAD3: xor     eax, esp
0x9FCAD5: push    eax
0x9FCAD6: lea     eax, [esp+10h+var_C]
0x9FCADA: mov     large fs:0, eax
0x9FCAE0: push    offset flt_B1484C
0x9FCAE5: mov     ecx, offset INISettingCollection
0x9FCAEA: mov     [esp+14h+var_4], 0
0x9FCAF2: call    SettingCollectionList_AddSetting
0x9FCAF7: push    offset sub_A25080; void (__cdecl *)()
0x9FCAFC: call    _atexit
0x9FCB01: add     esp, 4
0x9FCB04: mov     ecx, [esp+10h+var_C]
0x9FCB08: mov     large fs:0, ecx
0x9FCB0F: pop     ecx
0x9FCB10: add     esp, 0Ch
0x9FCB13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2380: mov     ecx, offset flt_B1484C
0x9C2385: jmp     loc_403BC0
0x9C238A: mov     edx, [esp+arg_4]
0x9C238E: lea     eax, [edx]
0x9C2390: mov     ecx, [edx-4]
0x9C2393: xor     ecx, eax
0x9C2395: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C239A: mov     eax, offset stru_AEB27C
0x9C239F: jmp     ___CxxFrameHandler3
