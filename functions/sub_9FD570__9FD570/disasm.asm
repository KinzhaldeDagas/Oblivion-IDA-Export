0x9FD570: push    0FFFFFFFFh
0x9FD572: push    offset SEH_9FD570
0x9FD577: mov     eax, large fs:0
0x9FD57D: push    eax
0x9FD57E: mov     eax, ___security_cookie
0x9FD583: xor     eax, esp
0x9FD585: push    eax
0x9FD586: lea     eax, [esp+10h+var_C]
0x9FD58A: mov     large fs:0, eax
0x9FD590: push    offset dword_B14BB4
0x9FD595: mov     ecx, offset INISettingCollection
0x9FD59A: mov     [esp+14h+var_4], 0
0x9FD5A2: call    SettingCollectionList_AddSetting
0x9FD5A7: push    offset sub_A255B0; void (__cdecl *)()
0x9FD5AC: call    _atexit
0x9FD5B1: add     esp, 4
0x9FD5B4: mov     ecx, [esp+10h+var_C]
0x9FD5B8: mov     large fs:0, ecx
0x9FD5BF: pop     ecx
0x9FD5C0: add     esp, 0Ch
0x9FD5C3: retn
