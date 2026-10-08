0x9DF840: push    0FFFFFFFFh
0x9DF842: push    offset SEH_9DF840
0x9DF847: mov     eax, large fs:0
0x9DF84D: push    eax
0x9DF84E: mov     eax, ___security_cookie
0x9DF853: xor     eax, esp
0x9DF855: push    eax
0x9DF856: lea     eax, [esp+10h+var_C]
0x9DF85A: mov     large fs:0, eax
0x9DF860: push    offset byte_B07050
0x9DF865: mov     ecx, offset INISettingCollection
0x9DF86A: mov     [esp+14h+var_4], 0
0x9DF872: call    SettingCollectionList_AddSetting
0x9DF877: push    offset sub_A1A240; void (__cdecl *)()
0x9DF87C: call    _atexit
0x9DF881: add     esp, 4
0x9DF884: mov     ecx, [esp+10h+var_C]
0x9DF888: mov     large fs:0, ecx
0x9DF88F: pop     ecx
0x9DF890: add     esp, 0Ch
0x9DF893: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1D30: mov     ecx, offset byte_B07050
0x9B1D35: jmp     loc_403BC0
0x9B1D3A: mov     edx, [esp+arg_4]
0x9B1D3E: lea     eax, [edx]
0x9B1D40: mov     ecx, [edx-4]
0x9B1D43: xor     ecx, eax
0x9B1D45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1D4A: mov     eax, offset stru_ADDDD0
0x9B1D4F: jmp     ___CxxFrameHandler3
