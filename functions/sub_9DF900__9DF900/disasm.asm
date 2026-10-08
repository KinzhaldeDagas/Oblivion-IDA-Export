0x9DF900: push    0FFFFFFFFh
0x9DF902: push    offset SEH_9DF900
0x9DF907: mov     eax, large fs:0
0x9DF90D: push    eax
0x9DF90E: mov     eax, ___security_cookie
0x9DF913: xor     eax, esp
0x9DF915: push    eax
0x9DF916: lea     eax, [esp+10h+var_C]
0x9DF91A: mov     large fs:0, eax
0x9DF920: push    offset byte_B07060
0x9DF925: mov     ecx, offset INISettingCollection
0x9DF92A: mov     [esp+14h+var_4], 0
0x9DF932: call    SettingCollectionList_AddSetting
0x9DF937: push    offset sub_A1A2A0; void (__cdecl *)()
0x9DF93C: call    _atexit
0x9DF941: add     esp, 4
0x9DF944: mov     ecx, [esp+10h+var_C]
0x9DF948: mov     large fs:0, ecx
0x9DF94F: pop     ecx
0x9DF950: add     esp, 0Ch
0x9DF953: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1D90: mov     ecx, offset byte_B07060
0x9B1D95: jmp     loc_403BC0
0x9B1D9A: mov     edx, [esp+arg_4]
0x9B1D9E: lea     eax, [edx]
0x9B1DA0: mov     ecx, [edx-4]
0x9B1DA3: xor     ecx, eax
0x9B1DA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1DAA: mov     eax, offset stru_ADDE28
0x9B1DAF: jmp     ___CxxFrameHandler3
