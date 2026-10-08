0x9FB5E0: push    0FFFFFFFFh
0x9FB5E2: push    offset SEH_9FB5E0
0x9FB5E7: mov     eax, large fs:0
0x9FB5ED: push    eax
0x9FB5EE: mov     eax, ___security_cookie
0x9FB5F3: xor     eax, esp
0x9FB5F5: push    eax
0x9FB5F6: lea     eax, [esp+10h+var_C]
0x9FB5FA: mov     large fs:0, eax
0x9FB600: push    offset flt_B135D0
0x9FB605: mov     ecx, offset INISettingCollection
0x9FB60A: mov     [esp+14h+var_4], 0
0x9FB612: call    SettingCollectionList_AddSetting
0x9FB617: push    offset sub_A24730; void (__cdecl *)()
0x9FB61C: call    _atexit
0x9FB621: add     esp, 4
0x9FB624: mov     ecx, [esp+10h+var_C]
0x9FB628: mov     large fs:0, ecx
0x9FB62F: pop     ecx
0x9FB630: add     esp, 0Ch
0x9FB633: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEF40: mov     ecx, offset flt_B135D0
0x9BEF45: jmp     loc_403BC0
0x9BEF4A: mov     edx, [esp+arg_4]
0x9BEF4E: lea     eax, [edx]
0x9BEF50: mov     ecx, [edx-4]
0x9BEF53: xor     ecx, eax
0x9BEF55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEF5A: mov     eax, offset stru_AE8590
0x9BEF5F: jmp     ___CxxFrameHandler3
