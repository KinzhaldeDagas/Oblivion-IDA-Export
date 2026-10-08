0x9DEDA0: push    0FFFFFFFFh
0x9DEDA2: push    offset SEH_9DEDA0
0x9DEDA7: mov     eax, large fs:0
0x9DEDAD: push    eax
0x9DEDAE: mov     eax, ___security_cookie
0x9DEDB3: xor     eax, esp
0x9DEDB5: push    eax
0x9DEDB6: lea     eax, [esp+10h+var_C]
0x9DEDBA: mov     large fs:0, eax
0x9DEDC0: push    offset unk_B06F3C
0x9DEDC5: mov     ecx, offset INISettingCollection
0x9DEDCA: mov     [esp+14h+var_4], 0
0x9DEDD2: call    SettingCollectionList_AddSetting
0x9DEDD7: push    offset sub_A19C80; void (__cdecl *)()
0x9DEDDC: call    _atexit
0x9DEDE1: add     esp, 4
0x9DEDE4: mov     ecx, [esp+10h+var_C]
0x9DEDE8: mov     large fs:0, ecx
0x9DEDEF: pop     ecx
0x9DEDF0: add     esp, 0Ch
0x9DEDF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B15D0: mov     ecx, offset unk_B06F3C
0x9B15D5: jmp     loc_403BC0
0x9B15DA: mov     edx, [esp+arg_4]
0x9B15DE: lea     eax, [edx]
0x9B15E0: mov     ecx, [edx-4]
0x9B15E3: xor     ecx, eax
0x9B15E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B15EA: mov     eax, offset stru_ADD78C
0x9B15EF: jmp     ___CxxFrameHandler3
