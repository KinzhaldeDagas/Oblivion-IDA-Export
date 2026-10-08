0x9DECE0: push    0FFFFFFFFh
0x9DECE2: push    offset SEH_9DECE0
0x9DECE7: mov     eax, large fs:0
0x9DECED: push    eax
0x9DECEE: mov     eax, ___security_cookie
0x9DECF3: xor     eax, esp
0x9DECF5: push    eax
0x9DECF6: lea     eax, [esp+10h+var_C]
0x9DECFA: mov     large fs:0, eax
0x9DED00: push    offset dword_B06F2C
0x9DED05: mov     ecx, offset INISettingCollection
0x9DED0A: mov     [esp+14h+var_4], 0
0x9DED12: call    SettingCollectionList_AddSetting
0x9DED17: push    offset sub_A19C20; void (__cdecl *)()
0x9DED1C: call    _atexit
0x9DED21: add     esp, 4
0x9DED24: mov     ecx, [esp+10h+var_C]
0x9DED28: mov     large fs:0, ecx
0x9DED2F: pop     ecx
0x9DED30: add     esp, 0Ch
0x9DED33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1570: mov     ecx, offset dword_B06F2C
0x9B1575: jmp     loc_403BC0
0x9B157A: mov     edx, [esp+arg_4]
0x9B157E: lea     eax, [edx]
0x9B1580: mov     ecx, [edx-4]
0x9B1583: xor     ecx, eax
0x9B1585: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B158A: mov     eax, offset stru_ADD734
0x9B158F: jmp     ___CxxFrameHandler3
