0x9DC1E0: push    0FFFFFFFFh
0x9DC1E2: push    offset SEH_9DC1E0
0x9DC1E7: mov     eax, large fs:0
0x9DC1ED: push    eax
0x9DC1EE: mov     eax, ___security_cookie
0x9DC1F3: xor     eax, esp
0x9DC1F5: push    eax
0x9DC1F6: lea     eax, [esp+10h+var_C]
0x9DC1FA: mov     large fs:0, eax
0x9DC200: push    offset bLoadHelmentsBackground
0x9DC205: mov     ecx, offset INISettingCollection
0x9DC20A: mov     [esp+14h+var_4], 0
0x9DC212: call    SettingCollectionList_AddSetting
0x9DC217: push    offset sub_A18660; void (__cdecl *)()
0x9DC21C: call    _atexit
0x9DC221: add     esp, 4
0x9DC224: mov     ecx, [esp+10h+var_C]
0x9DC228: mov     large fs:0, ecx
0x9DC22F: pop     ecx
0x9DC230: add     esp, 0Ch
0x9DC233: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF3D0: mov     ecx, offset bLoadHelmentsBackground
0x9AF3D5: jmp     loc_403BC0
0x9AF3DA: mov     edx, [esp+arg_4]
0x9AF3DE: lea     eax, [edx]
0x9AF3E0: mov     ecx, [edx-4]
0x9AF3E3: xor     ecx, eax
0x9AF3E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF3EA: mov     eax, offset stru_ADB9D0
0x9AF3EF: jmp     ___CxxFrameHandler3
