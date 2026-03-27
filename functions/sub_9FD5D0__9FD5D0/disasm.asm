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
