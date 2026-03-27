0x9FB5E0: push    0FFFFFFFFh
0x9FB5E2: push    offset SEH_9FB5E0
0x9FB5E7: mov     eax, large fs:0
0x9FB5ED: push    eax
0x9FB5EE: mov     eax, ___security_cookie
0x9FB5F3: xor     eax, esp
0x9FB5F5: push    eax
0x9FB5F6: lea     eax, [esp+10h+var_C]
0x9FB5FA: mov     large fs:0, eax
0x9FB600: push    offset flt_B135D0
0x9FB605: mov     ecx, offset INISettingCollection
0x9FB60A: mov     [esp+14h+var_4], 0
0x9FB612: call    SettingCollectionList_AddSetting
0x9FB617: push    offset sub_A24730; void (__cdecl *)()
0x9FB61C: call    _atexit
0x9FB621: add     esp, 4
0x9FB624: mov     ecx, [esp+10h+var_C]
0x9FB628: mov     large fs:0, ecx
0x9FB62F: pop     ecx
0x9FB630: add     esp, 0Ch
0x9FB633: retn
