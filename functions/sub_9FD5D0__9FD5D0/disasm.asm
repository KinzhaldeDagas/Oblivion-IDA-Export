0x9FD5D0: push    0FFFFFFFFh
0x9FD5D2: push    offset SEH_9FD5D0
0x9FD5D7: mov     eax, large fs:0
0x9FD5DD: push    eax
0x9FD5DE: mov     eax, ___security_cookie
0x9FD5E3: xor     eax, esp
0x9FD5E5: push    eax
0x9FD5E6: lea     eax, [esp+10h+var_C]
0x9FD5EA: mov     large fs:0, eax
0x9FD5F0: push    offset unk_B14BBC
0x9FD5F5: mov     ecx, offset INISettingCollection
0x9FD5FA: mov     [esp+14h+var_4], 0
0x9FD602: call    SettingCollectionList_AddSetting
0x9FD607: push    offset sub_A255E0; void (__cdecl *)()
0x9FD60C: call    _atexit
0x9FD611: add     esp, 4
0x9FD614: mov     ecx, [esp+10h+var_C]
0x9FD618: mov     large fs:0, ecx
0x9FD61F: pop     ecx
0x9FD620: add     esp, 0Ch
0x9FD623: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3540: mov     ecx, offset unk_B14BBC
0x9C3545: jmp     loc_403BC0
0x9C354A: mov     edx, [esp+arg_4]
0x9C354E: lea     eax, [edx]
0x9C3550: mov     ecx, [edx-4]
0x9C3553: xor     ecx, eax
0x9C3555: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C355A: mov     eax, offset stru_AEC134
0x9C355F: jmp     ___CxxFrameHandler3
