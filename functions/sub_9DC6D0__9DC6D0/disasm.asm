0x9DC6D0: push    0FFFFFFFFh
0x9DC6D2: push    offset SEH_9DC6D0
0x9DC6D7: mov     eax, large fs:0
0x9DC6DD: push    eax
0x9DC6DE: mov     eax, ___security_cookie
0x9DC6E3: xor     eax, esp
0x9DC6E5: push    eax
0x9DC6E6: lea     eax, [esp+10h+var_C]
0x9DC6EA: mov     large fs:0, eax
0x9DC6F0: push    offset flt_B06AB0
0x9DC6F5: mov     ecx, offset INISettingCollection
0x9DC6FA: mov     [esp+14h+var_4], 0
0x9DC702: call    SettingCollectionList_AddSetting
0x9DC707: push    offset sub_A188C0; void (__cdecl *)()
0x9DC70C: call    _atexit
0x9DC711: add     esp, 4
0x9DC714: mov     ecx, [esp+10h+var_C]
0x9DC718: mov     large fs:0, ecx
0x9DC71F: pop     ecx
0x9DC720: add     esp, 0Ch
0x9DC723: retn
