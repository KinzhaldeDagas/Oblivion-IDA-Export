0x9DAB30: push    0FFFFFFFFh
0x9DAB32: push    offset SEH_9DAB30
0x9DAB37: mov     eax, large fs:0
0x9DAB3D: push    eax
0x9DAB3E: mov     eax, ___security_cookie
0x9DAB43: xor     eax, esp
0x9DAB45: push    eax
0x9DAB46: lea     eax, [esp+10h+var_C]
0x9DAB4A: mov     large fs:0, eax
0x9DAB50: push    offset sInvalidationFile_Archive
0x9DAB55: mov     ecx, offset INISettingCollection
0x9DAB5A: mov     [esp+14h+var_4], 0
0x9DAB62: call    SettingCollectionList_AddSetting
0x9DAB67: push    offset sub_A17AD0; void (__cdecl *)()
0x9DAB6C: call    _atexit
0x9DAB71: add     esp, 4
0x9DAB74: mov     ecx, [esp+10h+var_C]
0x9DAB78: mov     large fs:0, ecx
0x9DAB7F: pop     ecx
0x9DAB80: add     esp, 0Ch
0x9DAB83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABD50: mov     ecx, offset sInvalidationFile_Archive
0x9ABD55: jmp     loc_403BC0
0x9ABD5A: mov     edx, [esp+arg_4]
0x9ABD5E: lea     eax, [edx]
0x9ABD60: mov     ecx, [edx-4]
0x9ABD63: xor     ecx, eax
0x9ABD65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABD6A: mov     eax, offset stru_AD8AB4
0x9ABD6F: jmp     ___CxxFrameHandler3
