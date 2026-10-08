0x9DD840: push    0FFFFFFFFh
0x9DD842: push    offset SEH_9DD840
0x9DD847: mov     eax, large fs:0
0x9DD84D: push    eax
0x9DD84E: mov     eax, ___security_cookie
0x9DD853: xor     eax, esp
0x9DD855: push    eax
0x9DD856: lea     eax, [esp+10h+var_C]
0x9DD85A: mov     large fs:0, eax
0x9DD860: push    offset flt_B06D74
0x9DD865: mov     ecx, offset INISettingCollection
0x9DD86A: mov     [esp+14h+var_4], 0
0x9DD872: call    SettingCollectionList_AddSetting
0x9DD877: push    offset sub_A191D0; void (__cdecl *)()
0x9DD87C: call    _atexit
0x9DD881: add     esp, 4
0x9DD884: mov     ecx, [esp+10h+var_C]
0x9DD888: mov     large fs:0, ecx
0x9DD88F: pop     ecx
0x9DD890: add     esp, 0Ch
0x9DD893: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0B20: mov     ecx, offset flt_B06D74
0x9B0B25: jmp     loc_403BC0
0x9B0B2A: mov     edx, [esp+arg_4]
0x9B0B2E: lea     eax, [edx]
0x9B0B30: mov     ecx, [edx-4]
0x9B0B33: xor     ecx, eax
0x9B0B35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0B3A: mov     eax, offset stru_ADCDC0
0x9B0B3F: jmp     ___CxxFrameHandler3
