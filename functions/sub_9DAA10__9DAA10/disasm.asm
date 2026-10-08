0x9DAA10: push    0FFFFFFFFh
0x9DAA12: push    offset SEH_9DAA10
0x9DAA17: mov     eax, large fs:0
0x9DAA1D: push    eax
0x9DAA1E: mov     eax, ___security_cookie
0x9DAA23: xor     eax, esp
0x9DAA25: push    eax
0x9DAA26: lea     eax, [esp+10h+var_C]
0x9DAA2A: mov     large fs:0, eax
0x9DAA30: push    offset iRetainDirectoryStringTable_Archive
0x9DAA35: mov     ecx, offset INISettingCollection
0x9DAA3A: mov     [esp+14h+var_4], 0
0x9DAA42: call    SettingCollectionList_AddSetting
0x9DAA47: push    offset sub_A17A40; void (__cdecl *)()
0x9DAA4C: call    _atexit
0x9DAA51: add     esp, 4
0x9DAA54: mov     ecx, [esp+10h+var_C]
0x9DAA58: mov     large fs:0, ecx
0x9DAA5F: pop     ecx
0x9DAA60: add     esp, 0Ch
0x9DAA63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABCC0: mov     ecx, offset iRetainDirectoryStringTable_Archive
0x9ABCC5: jmp     loc_403BC0
0x9ABCCA: mov     edx, [esp+arg_4]
0x9ABCCE: lea     eax, [edx]
0x9ABCD0: mov     ecx, [edx-4]
0x9ABCD3: xor     ecx, eax
0x9ABCD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABCDA: mov     eax, offset stru_AD8A30
0x9ABCDF: jmp     ___CxxFrameHandler3
