0x9D8770: push    0FFFFFFFFh
0x9D8772: push    offset SEH_9D8770
0x9D8777: mov     eax, large fs:0
0x9D877D: push    eax
0x9D877E: mov     eax, ___security_cookie
0x9D8783: xor     eax, esp
0x9D8785: push    eax
0x9D8786: lea     eax, [esp+10h+var_C]
0x9D878A: mov     large fs:0, eax
0x9D8790: push    offset off_B02CF8
0x9D8795: mov     ecx, offset INISettingCollection
0x9D879A: mov     [esp+14h+var_4], 0
0x9D87A2: call    SettingCollectionList_AddSetting
0x9D87A7: push    offset sub_A16970; void (__cdecl *)()
0x9D87AC: call    _atexit
0x9D87B1: add     esp, 4
0x9D87B4: mov     ecx, [esp+10h+var_C]
0x9D87B8: mov     large fs:0, ecx
0x9D87BF: pop     ecx
0x9D87C0: add     esp, 0Ch
0x9D87C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA3F0: mov     ecx, offset off_B02CF8
0x9AA3F5: jmp     loc_403BC0
0x9AA3FA: mov     edx, [esp+arg_4]
0x9AA3FE: lea     eax, [edx]
0x9AA400: mov     ecx, [edx-4]
0x9AA403: xor     ecx, eax
0x9AA405: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA40A: mov     eax, offset stru_AD73E0
0x9AA40F: jmp     ___CxxFrameHandler3
