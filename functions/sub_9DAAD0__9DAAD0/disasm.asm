0x9DAAD0: push    0FFFFFFFFh
0x9DAAD2: push    offset SEH_9DAAD0
0x9DAAD7: mov     eax, large fs:0
0x9DAADD: push    eax
0x9DAADE: mov     eax, ___security_cookie
0x9DAAE3: xor     eax, esp
0x9DAAE5: push    eax
0x9DAAE6: lea     eax, [esp+10h+var_C]
0x9DAAEA: mov     large fs:0, eax
0x9DAAF0: push    offset iRetainFilenameOffsetTable_Archive
0x9DAAF5: mov     ecx, offset INISettingCollection
0x9DAAFA: mov     [esp+14h+var_4], 0
0x9DAB02: call    SettingCollectionList_AddSetting
0x9DAB07: push    offset sub_A17AA0; void (__cdecl *)()
0x9DAB0C: call    _atexit
0x9DAB11: add     esp, 4
0x9DAB14: mov     ecx, [esp+10h+var_C]
0x9DAB18: mov     large fs:0, ecx
0x9DAB1F: pop     ecx
0x9DAB20: add     esp, 0Ch
0x9DAB23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABD20: mov     ecx, offset iRetainFilenameOffsetTable_Archive
0x9ABD25: jmp     loc_403BC0
0x9ABD2A: mov     edx, [esp+arg_4]
0x9ABD2E: lea     eax, [edx]
0x9ABD30: mov     ecx, [edx-4]
0x9ABD33: xor     ecx, eax
0x9ABD35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABD3A: mov     eax, offset stru_AD8A88
0x9ABD3F: jmp     ___CxxFrameHandler3
