0x9DADD0: push    0FFFFFFFFh
0x9DADD2: push    offset SEH_9DADD0
0x9DADD7: mov     eax, large fs:0
0x9DADDD: push    eax
0x9DADDE: mov     eax, ___security_cookie
0x9DADE3: xor     eax, esp
0x9DADE5: push    eax
0x9DADE6: lea     eax, [esp+10h+var_C]
0x9DADEA: mov     large fs:0, eax
0x9DADF0: push    offset dword_B05148
0x9DADF5: mov     ecx, offset INISettingCollection
0x9DADFA: mov     [esp+14h+var_4], 0
0x9DAE02: call    SettingCollectionList_AddSetting
0x9DAE07: push    offset sub_A17C60; void (__cdecl *)()
0x9DAE0C: call    _atexit
0x9DAE11: add     esp, 4
0x9DAE14: mov     ecx, [esp+10h+var_C]
0x9DAE18: mov     large fs:0, ecx
0x9DAE1F: pop     ecx
0x9DAE20: add     esp, 0Ch
0x9DAE23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ACFE0: mov     ecx, offset dword_B05148
0x9ACFE5: jmp     loc_403BC0
0x9ACFEA: mov     edx, [esp+arg_4]
0x9ACFEE: lea     eax, [edx]
0x9ACFF0: mov     ecx, [edx-4]
0x9ACFF3: xor     ecx, eax
0x9ACFF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACFFA: mov     eax, offset stru_AD9C14
0x9ACFFF: jmp     ___CxxFrameHandler3
