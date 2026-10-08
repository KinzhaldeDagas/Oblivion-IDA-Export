0x9DEFE0: push    0FFFFFFFFh
0x9DEFE2: push    offset SEH_9DEFE0
0x9DEFE7: mov     eax, large fs:0
0x9DEFED: push    eax
0x9DEFEE: mov     eax, ___security_cookie
0x9DEFF3: xor     eax, esp
0x9DEFF5: push    eax
0x9DEFF6: lea     eax, [esp+10h+var_C]
0x9DEFFA: mov     large fs:0, eax
0x9DF000: push    offset dword_B06F6C
0x9DF005: mov     ecx, offset INISettingCollection
0x9DF00A: mov     [esp+14h+var_4], 0
0x9DF012: call    SettingCollectionList_AddSetting
0x9DF017: push    offset sub_A19DA0; void (__cdecl *)()
0x9DF01C: call    _atexit
0x9DF021: add     esp, 4
0x9DF024: mov     ecx, [esp+10h+var_C]
0x9DF028: mov     large fs:0, ecx
0x9DF02F: pop     ecx
0x9DF030: add     esp, 0Ch
0x9DF033: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B16F0: mov     ecx, offset dword_B06F6C
0x9B16F5: jmp     loc_403BC0
0x9B16FA: mov     edx, [esp+arg_4]
0x9B16FE: lea     eax, [edx]
0x9B1700: mov     ecx, [edx-4]
0x9B1703: xor     ecx, eax
0x9B1705: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B170A: mov     eax, offset stru_ADD894
0x9B170F: jmp     ___CxxFrameHandler3
