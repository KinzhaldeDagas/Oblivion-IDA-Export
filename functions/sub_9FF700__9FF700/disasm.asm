0x9FF700: push    0FFFFFFFFh
0x9FF702: push    offset SEH_9FF700
0x9FF707: mov     eax, large fs:0
0x9FF70D: push    eax
0x9FF70E: mov     eax, ___security_cookie
0x9FF713: xor     eax, esp
0x9FF715: push    eax
0x9FF716: lea     eax, [esp+10h+var_C]
0x9FF71A: mov     large fs:0, eax
0x9FF720: push    offset unk_B16294
0x9FF725: mov     ecx, offset INISettingCollection
0x9FF72A: mov     [esp+14h+var_4], 0
0x9FF732: call    SettingCollectionList_AddSetting
0x9FF737: push    offset sub_A26460; void (__cdecl *)()
0x9FF73C: call    _atexit
0x9FF741: add     esp, 4
0x9FF744: mov     ecx, [esp+10h+var_C]
0x9FF748: mov     large fs:0, ecx
0x9FF74F: pop     ecx
0x9FF750: add     esp, 0Ch
0x9FF753: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6B00: mov     ecx, offset unk_B16294
0x9C6B05: jmp     loc_403BC0
0x9C6B0A: mov     edx, [esp+arg_4]
0x9C6B0E: lea     eax, [edx]
0x9C6B10: mov     ecx, [edx-4]
0x9C6B13: xor     ecx, eax
0x9C6B15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6B1A: mov     eax, offset stru_AEEFD8
0x9C6B1F: jmp     ___CxxFrameHandler3
