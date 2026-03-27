0x9DC3D0: push    0FFFFFFFFh
0x9DC3D2: push    offset SEH_9DC3D0
0x9DC3D7: mov     eax, large fs:0
0x9DC3DD: push    eax
0x9DC3DE: mov     eax, ___security_cookie
0x9DC3E3: xor     eax, esp
0x9DC3E5: push    eax
0x9DC3E6: lea     eax, [esp+10h+var_C]
0x9DC3EA: mov     large fs:0, eax
0x9DC3F0: push    offset unk_B068D0
0x9DC3F5: mov     ecx, offset INISettingCollection
0x9DC3FA: mov     [esp+14h+var_4], 0
0x9DC402: call    SettingCollectionList_AddSetting
0x9DC407: push    offset sub_A18710; void (__cdecl *)()
0x9DC40C: call    _atexit
0x9DC411: add     esp, 4
0x9DC414: mov     ecx, [esp+10h+var_C]
0x9DC418: mov     large fs:0, ecx
0x9DC41F: pop     ecx
0x9DC420: add     esp, 0Ch
0x9DC423: retn
