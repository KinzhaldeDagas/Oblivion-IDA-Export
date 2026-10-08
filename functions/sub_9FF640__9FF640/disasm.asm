0x9FF640: push    0FFFFFFFFh
0x9FF642: push    offset SEH_9FF640
0x9FF647: mov     eax, large fs:0
0x9FF64D: push    eax
0x9FF64E: mov     eax, ___security_cookie
0x9FF653: xor     eax, esp
0x9FF655: push    eax
0x9FF656: lea     eax, [esp+10h+var_C]
0x9FF65A: mov     large fs:0, eax
0x9FF660: push    offset dword_B16284
0x9FF665: mov     ecx, offset INISettingCollection
0x9FF66A: mov     [esp+14h+var_4], 0
0x9FF672: call    SettingCollectionList_AddSetting
0x9FF677: push    offset sub_A26400; void (__cdecl *)()
0x9FF67C: call    _atexit
0x9FF681: add     esp, 4
0x9FF684: mov     ecx, [esp+10h+var_C]
0x9FF688: mov     large fs:0, ecx
0x9FF68F: pop     ecx
0x9FF690: add     esp, 0Ch
0x9FF693: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6AA0: mov     ecx, offset dword_B16284
0x9C6AA5: jmp     loc_403BC0
0x9C6AAA: mov     edx, [esp+arg_4]
0x9C6AAE: lea     eax, [edx]
0x9C6AB0: mov     ecx, [edx-4]
0x9C6AB3: xor     ecx, eax
0x9C6AB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6ABA: mov     eax, offset stru_AEEF80
0x9C6ABF: jmp     ___CxxFrameHandler3
