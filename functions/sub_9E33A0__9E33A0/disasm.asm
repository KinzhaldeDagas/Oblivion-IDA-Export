0x9E33A0: push    0FFFFFFFFh
0x9E33A2: push    offset SEH_9E33A0
0x9E33A7: mov     eax, large fs:0
0x9E33AD: push    eax
0x9E33AE: mov     eax, ___security_cookie
0x9E33B3: xor     eax, esp
0x9E33B5: push    eax
0x9E33B6: lea     eax, [esp+10h+var_C]
0x9E33BA: mov     large fs:0, eax
0x9E33C0: push    offset bDisplayLODBuildings
0x9E33C5: mov     ecx, offset INISettingCollection
0x9E33CA: mov     [esp+14h+var_4], 0
0x9E33D2: call    SettingCollectionList_AddSetting
0x9E33D7: push    offset bDisplayLODBuildings_UnregisterSetting; void (__cdecl *)()
0x9E33DC: call    _atexit
0x9E33E1: add     esp, 4
0x9E33E4: mov     ecx, [esp+10h+var_C]
0x9E33E8: mov     large fs:0, ecx
0x9E33EF: pop     ecx
0x9E33F0: add     esp, 0Ch
0x9E33F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B61F0: mov     ecx, offset bDisplayLODBuildings
0x9B61F5: jmp     loc_403BC0
0x9B61FA: mov     edx, [esp+arg_4]
0x9B61FE: lea     eax, [edx]
0x9B6200: mov     ecx, [edx-4]
0x9B6203: xor     ecx, eax
0x9B6205: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B620A: mov     eax, offset stru_AE1124
0x9B620F: jmp     ___CxxFrameHandler3
