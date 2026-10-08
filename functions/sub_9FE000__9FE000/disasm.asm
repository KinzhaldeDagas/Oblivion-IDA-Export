0x9FE000: push    0FFFFFFFFh
0x9FE002: push    offset SEH_9FE000
0x9FE007: mov     eax, large fs:0
0x9FE00D: push    eax
0x9FE00E: mov     eax, ___security_cookie
0x9FE013: xor     eax, esp
0x9FE015: push    eax
0x9FE016: lea     eax, [esp+10h+var_C]
0x9FE01A: mov     large fs:0, eax
0x9FE020: push    offset fJoystickMoveLRMult
0x9FE025: mov     ecx, offset INISettingCollection
0x9FE02A: mov     [esp+14h+var_4], 0
0x9FE032: call    SettingCollectionList_AddSetting
0x9FE037: push    offset sub_A25B00; void (__cdecl *)()
0x9FE03C: call    _atexit
0x9FE041: add     esp, 4
0x9FE044: mov     ecx, [esp+10h+var_C]
0x9FE048: mov     large fs:0, ecx
0x9FE04F: pop     ecx
0x9FE050: add     esp, 0Ch
0x9FE053: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4570: mov     ecx, offset fJoystickMoveLRMult
0x9C4575: jmp     loc_403BC0
0x9C457A: mov     edx, [esp+arg_4]
0x9C457E: lea     eax, [edx]
0x9C4580: mov     ecx, [edx-4]
0x9C4583: xor     ecx, eax
0x9C4585: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C458A: mov     eax, offset stru_AECF1C
0x9C458F: jmp     ___CxxFrameHandler3
