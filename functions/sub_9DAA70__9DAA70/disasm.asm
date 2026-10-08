0x9DAA70: push    0FFFFFFFFh
0x9DAA72: push    offset SEH_9DAA70
0x9DAA77: mov     eax, large fs:0
0x9DAA7D: push    eax
0x9DAA7E: mov     eax, ___security_cookie
0x9DAA83: xor     eax, esp
0x9DAA85: push    eax
0x9DAA86: lea     eax, [esp+10h+var_C]
0x9DAA8A: mov     large fs:0, eax
0x9DAA90: push    offset iRetainFilenameStringTable_Archive
0x9DAA95: mov     ecx, offset INISettingCollection
0x9DAA9A: mov     [esp+14h+var_4], 0
0x9DAAA2: call    SettingCollectionList_AddSetting
0x9DAAA7: push    offset sub_A17A70; void (__cdecl *)()
0x9DAAAC: call    _atexit
0x9DAAB1: add     esp, 4
0x9DAAB4: mov     ecx, [esp+10h+var_C]
0x9DAAB8: mov     large fs:0, ecx
0x9DAABF: pop     ecx
0x9DAAC0: add     esp, 0Ch
0x9DAAC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABCF0: mov     ecx, offset iRetainFilenameStringTable_Archive
0x9ABCF5: jmp     loc_403BC0
0x9ABCFA: mov     edx, [esp+arg_4]
0x9ABCFE: lea     eax, [edx]
0x9ABD00: mov     ecx, [edx-4]
0x9ABD03: xor     ecx, eax
0x9ABD05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABD0A: mov     eax, offset stru_AD8A5C
0x9ABD0F: jmp     ___CxxFrameHandler3
