0x9FD240: push    0FFFFFFFFh
0x9FD242: push    offset SEH_9FD240
0x9FD247: mov     eax, large fs:0
0x9FD24D: push    eax
0x9FD24E: mov     eax, ___security_cookie
0x9FD253: xor     eax, esp
0x9FD255: push    eax
0x9FD256: lea     eax, [esp+10h+var_C]
0x9FD25A: mov     large fs:0, eax
0x9FD260: push    offset dword_B14904
0x9FD265: mov     ecx, offset INISettingCollection
0x9FD26A: mov     [esp+14h+var_4], 0
0x9FD272: call    SettingCollectionList_AddSetting
0x9FD277: push    offset sub_A25440; void (__cdecl *)()
0x9FD27C: call    _atexit
0x9FD281: add     esp, 4
0x9FD284: mov     ecx, [esp+10h+var_C]
0x9FD288: mov     large fs:0, ecx
0x9FD28F: pop     ecx
0x9FD290: add     esp, 0Ch
0x9FD293: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2E10: mov     ecx, offset dword_B14904
0x9C2E15: jmp     loc_403BC0
0x9C2E1A: mov     edx, [esp+arg_4]
0x9C2E1E: lea     eax, [edx]
0x9C2E20: mov     ecx, [edx-4]
0x9C2E23: xor     ecx, eax
0x9C2E25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2E2A: mov     eax, offset stru_AEBB3C
0x9C2E2F: jmp     ___CxxFrameHandler3
