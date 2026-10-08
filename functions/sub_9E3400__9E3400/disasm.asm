0x9E3400: push    0FFFFFFFFh
0x9E3402: push    offset SEH_9E3400
0x9E3407: mov     eax, large fs:0
0x9E340D: push    eax
0x9E340E: mov     eax, ___security_cookie
0x9E3413: xor     eax, esp
0x9E3415: push    eax
0x9E3416: lea     eax, [esp+10h+var_C]
0x9E341A: mov     large fs:0, eax
0x9E3420: push    offset bDisplayLODTrees
0x9E3425: mov     ecx, offset INISettingCollection
0x9E342A: mov     [esp+14h+var_4], 0
0x9E3432: call    SettingCollectionList_AddSetting
0x9E3437: push    offset bDisplayLODTrees_UnregisterSetting; void (__cdecl *)()
0x9E343C: call    _atexit
0x9E3441: add     esp, 4
0x9E3444: mov     ecx, [esp+10h+var_C]
0x9E3448: mov     large fs:0, ecx
0x9E344F: pop     ecx
0x9E3450: add     esp, 0Ch
0x9E3453: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6220: mov     ecx, offset bDisplayLODTrees
0x9B6225: jmp     loc_403BC0
0x9B622A: mov     edx, [esp+arg_4]
0x9B622E: lea     eax, [edx]
0x9B6230: mov     ecx, [edx-4]
0x9B6233: xor     ecx, eax
0x9B6235: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B623A: mov     eax, offset stru_AE1150
0x9B623F: jmp     ___CxxFrameHandler3
