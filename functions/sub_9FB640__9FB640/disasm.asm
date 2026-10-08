0x9FB640: push    0FFFFFFFFh
0x9FB642: push    offset SEH_9FB640
0x9FB647: mov     eax, large fs:0
0x9FB64D: push    eax
0x9FB64E: mov     eax, ___security_cookie
0x9FB653: xor     eax, esp
0x9FB655: push    eax
0x9FB656: lea     eax, [esp+10h+var_C]
0x9FB65A: mov     large fs:0, eax
0x9FB660: push    offset flt_B135D8
0x9FB665: mov     ecx, offset INISettingCollection
0x9FB66A: mov     [esp+14h+var_4], 0
0x9FB672: call    SettingCollectionList_AddSetting
0x9FB677: push    offset sub_A24760; void (__cdecl *)()
0x9FB67C: call    _atexit
0x9FB681: add     esp, 4
0x9FB684: mov     ecx, [esp+10h+var_C]
0x9FB688: mov     large fs:0, ecx
0x9FB68F: pop     ecx
0x9FB690: add     esp, 0Ch
0x9FB693: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEF70: mov     ecx, offset flt_B135D8
0x9BEF75: jmp     loc_403BC0
0x9BEF7A: mov     edx, [esp+arg_4]
0x9BEF7E: lea     eax, [edx]
0x9BEF80: mov     ecx, [edx-4]
0x9BEF83: xor     ecx, eax
0x9BEF85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEF8A: mov     eax, offset stru_AE85BC
0x9BEF8F: jmp     ___CxxFrameHandler3
