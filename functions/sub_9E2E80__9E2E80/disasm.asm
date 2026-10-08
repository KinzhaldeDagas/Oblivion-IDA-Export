0x9E2E80: push    0FFFFFFFFh
0x9E2E82: push    offset SEH_9E2E80
0x9E2E87: mov     eax, large fs:0
0x9E2E8D: push    eax
0x9E2E8E: mov     eax, ___security_cookie
0x9E2E93: xor     eax, esp
0x9E2E95: push    eax
0x9E2E96: lea     eax, [esp+10h+var_C]
0x9E2E9A: mov     large fs:0, eax
0x9E2EA0: push    offset dword_B08B94
0x9E2EA5: mov     ecx, offset INISettingCollection
0x9E2EAA: mov     [esp+14h+var_4], 0
0x9E2EB2: call    SettingCollectionList_AddSetting
0x9E2EB7: push    offset sub_A1BA20; void (__cdecl *)()
0x9E2EBC: call    _atexit
0x9E2EC1: add     esp, 4
0x9E2EC4: mov     ecx, [esp+10h+var_C]
0x9E2EC8: mov     large fs:0, ecx
0x9E2ECF: pop     ecx
0x9E2ED0: add     esp, 0Ch
0x9E2ED3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4FC0: mov     ecx, offset dword_B08B94
0x9B4FC5: jmp     loc_403BC0
0x9B4FCA: mov     edx, [esp+arg_4]
0x9B4FCE: lea     eax, [edx]
0x9B4FD0: mov     ecx, [edx-4]
0x9B4FD3: xor     ecx, eax
0x9B4FD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4FDA: mov     eax, offset stru_AE01E4
0x9B4FDF: jmp     ___CxxFrameHandler3
