0x9DD720: push    0FFFFFFFFh
0x9DD722: push    offset SEH_9DD720
0x9DD727: mov     eax, large fs:0
0x9DD72D: push    eax
0x9DD72E: mov     eax, ___security_cookie
0x9DD733: xor     eax, esp
0x9DD735: push    eax
0x9DD736: lea     eax, [esp+10h+var_C]
0x9DD73A: mov     large fs:0, eax
0x9DD740: push    offset flt_B06D5C
0x9DD745: mov     ecx, offset INISettingCollection
0x9DD74A: mov     [esp+14h+var_4], 0
0x9DD752: call    SettingCollectionList_AddSetting
0x9DD757: push    offset sub_A19140; void (__cdecl *)()
0x9DD75C: call    _atexit
0x9DD761: add     esp, 4
0x9DD764: mov     ecx, [esp+10h+var_C]
0x9DD768: mov     large fs:0, ecx
0x9DD76F: pop     ecx
0x9DD770: add     esp, 0Ch
0x9DD773: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0A90: mov     ecx, offset flt_B06D5C
0x9B0A95: jmp     loc_403BC0
0x9B0A9A: mov     edx, [esp+arg_4]
0x9B0A9E: lea     eax, [edx]
0x9B0AA0: mov     ecx, [edx-4]
0x9B0AA3: xor     ecx, eax
0x9B0AA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0AAA: mov     eax, offset stru_ADCD3C
0x9B0AAF: jmp     ___CxxFrameHandler3
