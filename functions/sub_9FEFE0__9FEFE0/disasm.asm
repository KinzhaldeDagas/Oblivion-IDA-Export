0x9FEFE0: push    0FFFFFFFFh
0x9FEFE2: push    offset SEH_9FEFE0
0x9FEFE7: mov     eax, large fs:0
0x9FEFED: push    eax
0x9FEFEE: mov     eax, ___security_cookie
0x9FEFF3: xor     eax, esp
0x9FEFF5: push    eax
0x9FEFF6: lea     eax, [esp+10h+var_C]
0x9FEFFA: mov     large fs:0, eax
0x9FF000: push    offset flt_B161A0
0x9FF005: mov     ecx, offset INISettingCollection
0x9FF00A: mov     [esp+14h+var_4], 0
0x9FF012: call    SettingCollectionList_AddSetting
0x9FF017: push    offset sub_A260C0; void (__cdecl *)()
0x9FF01C: call    _atexit
0x9FF021: add     esp, 4
0x9FF024: mov     ecx, [esp+10h+var_C]
0x9FF028: mov     large fs:0, ecx
0x9FF02F: pop     ecx
0x9FF030: add     esp, 0Ch
0x9FF033: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6710: mov     ecx, offset flt_B161A0
0x9C6715: jmp     loc_403BC0
0x9C671A: mov     edx, [esp+arg_4]
0x9C671E: lea     eax, [edx]
0x9C6720: mov     ecx, [edx-4]
0x9C6723: xor     ecx, eax
0x9C6725: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C672A: mov     eax, offset stru_AEEC3C
0x9C672F: jmp     ___CxxFrameHandler3
