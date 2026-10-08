0x9F91F0: push    0FFFFFFFFh
0x9F91F2: push    offset SEH_9F91F0
0x9F91F7: mov     eax, large fs:0
0x9F91FD: push    eax
0x9F91FE: mov     eax, ___security_cookie
0x9F9203: xor     eax, esp
0x9F9205: push    eax
0x9F9206: lea     eax, [esp+10h+var_C]
0x9F920A: mov     large fs:0, eax
0x9F9210: push    offset byte_B12600
0x9F9215: mov     ecx, offset INISettingCollection
0x9F921A: mov     [esp+14h+var_4], 0
0x9F9222: call    SettingCollectionList_AddSetting
0x9F9227: push    offset sub_A23690; void (__cdecl *)()
0x9F922C: call    _atexit
0x9F9231: add     esp, 4
0x9F9234: mov     ecx, [esp+10h+var_C]
0x9F9238: mov     large fs:0, ecx
0x9F923F: pop     ecx
0x9F9240: add     esp, 0Ch
0x9F9243: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCE00: mov     ecx, offset byte_B12600
0x9BCE05: jmp     loc_403BC0
0x9BCE0A: mov     edx, [esp+arg_4]
0x9BCE0E: lea     eax, [edx]
0x9BCE10: mov     ecx, [edx-4]
0x9BCE13: xor     ecx, eax
0x9BCE15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCE1A: mov     eax, offset stru_AE6914
0x9BCE1F: jmp     ___CxxFrameHandler3
