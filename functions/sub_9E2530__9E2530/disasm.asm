0x9E2530: push    0FFFFFFFFh
0x9E2532: push    offset SEH_9E2530
0x9E2537: mov     eax, large fs:0
0x9E253D: push    eax
0x9E253E: mov     eax, ___security_cookie
0x9E2543: xor     eax, esp
0x9E2545: push    eax
0x9E2546: lea     eax, [esp+10h+var_C]
0x9E254A: mov     large fs:0, eax
0x9E2550: push    offset flt_B08178
0x9E2555: mov     ecx, offset INISettingCollection
0x9E255A: mov     [esp+14h+var_4], 0
0x9E2562: call    SettingCollectionList_AddSetting
0x9E2567: push    offset sub_A1B540; void (__cdecl *)()
0x9E256C: call    _atexit
0x9E2571: add     esp, 4
0x9E2574: mov     ecx, [esp+10h+var_C]
0x9E2578: mov     large fs:0, ecx
0x9E257F: pop     ecx
0x9E2580: add     esp, 0Ch
0x9E2583: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B3250: mov     ecx, offset flt_B08178
0x9B3255: jmp     loc_403BC0
0x9B325A: mov     edx, [esp+arg_4]
0x9B325E: lea     eax, [edx]
0x9B3260: mov     ecx, [edx-4]
0x9B3263: xor     ecx, eax
0x9B3265: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B326A: mov     eax, offset stru_ADEFA4
0x9B326F: jmp     ___CxxFrameHandler3
