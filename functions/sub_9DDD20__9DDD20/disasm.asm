0x9DDD20: push    0FFFFFFFFh
0x9DDD22: push    offset SEH_9DDD20
0x9DDD27: mov     eax, large fs:0
0x9DDD2D: push    eax
0x9DDD2E: mov     eax, ___security_cookie
0x9DDD33: xor     eax, esp
0x9DDD35: push    eax
0x9DDD36: lea     eax, [esp+10h+var_C]
0x9DDD3A: mov     large fs:0, eax
0x9DDD40: push    offset flt_B06DDC
0x9DDD45: mov     ecx, offset INISettingCollection
0x9DDD4A: mov     [esp+14h+var_4], 0
0x9DDD52: call    SettingCollectionList_AddSetting
0x9DDD57: push    offset sub_A19440; void (__cdecl *)()
0x9DDD5C: call    _atexit
0x9DDD61: add     esp, 4
0x9DDD64: mov     ecx, [esp+10h+var_C]
0x9DDD68: mov     large fs:0, ecx
0x9DDD6F: pop     ecx
0x9DDD70: add     esp, 0Ch
0x9DDD73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0D90: mov     ecx, offset flt_B06DDC
0x9B0D95: jmp     loc_403BC0
0x9B0D9A: mov     edx, [esp+arg_4]
0x9B0D9E: lea     eax, [edx]
0x9B0DA0: mov     ecx, [edx-4]
0x9B0DA3: xor     ecx, eax
0x9B0DA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0DAA: mov     eax, offset stru_ADCFFC
0x9B0DAF: jmp     ___CxxFrameHandler3
