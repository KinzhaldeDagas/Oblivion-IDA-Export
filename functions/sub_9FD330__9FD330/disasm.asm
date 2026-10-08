0x9FD330: push    0FFFFFFFFh
0x9FD332: push    offset SEH_9FD330
0x9FD337: mov     eax, large fs:0
0x9FD33D: push    eax
0x9FD33E: mov     eax, ___security_cookie
0x9FD343: xor     eax, esp
0x9FD345: push    eax
0x9FD346: lea     eax, [esp+10h+var_C]
0x9FD34A: mov     large fs:0, eax
0x9FD350: push    offset unk_B14974
0x9FD355: mov     ecx, offset INISettingCollection
0x9FD35A: mov     [esp+14h+var_4], 0
0x9FD362: call    SettingCollectionList_AddSetting
0x9FD367: push    offset sub_A254B0; void (__cdecl *)()
0x9FD36C: call    _atexit
0x9FD371: add     esp, 4
0x9FD374: mov     ecx, [esp+10h+var_C]
0x9FD378: mov     large fs:0, ecx
0x9FD37F: pop     ecx
0x9FD380: add     esp, 0Ch
0x9FD383: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2E70: mov     ecx, offset unk_B14974
0x9C2E75: jmp     loc_403BC0
0x9C2E7A: mov     edx, [esp+arg_4]
0x9C2E7E: lea     eax, [edx]
0x9C2E80: mov     ecx, [edx-4]
0x9C2E83: xor     ecx, eax
0x9C2E85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2E8A: mov     eax, offset stru_AEBB94
0x9C2E8F: jmp     ___CxxFrameHandler3
