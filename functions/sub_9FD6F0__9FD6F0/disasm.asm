0x9FD6F0: push    0FFFFFFFFh
0x9FD6F2: push    offset SEH_9FD6F0
0x9FD6F7: mov     eax, large fs:0
0x9FD6FD: push    eax
0x9FD6FE: mov     eax, ___security_cookie
0x9FD703: xor     eax, esp
0x9FD705: push    eax
0x9FD706: lea     eax, [esp+10h+var_C]
0x9FD70A: mov     large fs:0, eax
0x9FD710: push    offset flt_B14CB4
0x9FD715: mov     ecx, offset INISettingCollection
0x9FD71A: mov     [esp+14h+var_4], 0
0x9FD722: call    SettingCollectionList_AddSetting
0x9FD727: push    offset sub_A25670; void (__cdecl *)()
0x9FD72C: call    _atexit
0x9FD731: add     esp, 4
0x9FD734: mov     ecx, [esp+10h+var_C]
0x9FD738: mov     large fs:0, ecx
0x9FD73F: pop     ecx
0x9FD740: add     esp, 0Ch
0x9FD743: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C37D0: mov     ecx, offset flt_B14CB4
0x9C37D5: jmp     loc_403BC0
0x9C37DA: mov     edx, [esp+arg_4]
0x9C37DE: lea     eax, [edx]
0x9C37E0: mov     ecx, [edx-4]
0x9C37E3: xor     ecx, eax
0x9C37E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C37EA: mov     eax, offset stru_AEC368
0x9C37EF: jmp     ___CxxFrameHandler3
