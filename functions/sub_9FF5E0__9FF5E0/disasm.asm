0x9FF5E0: push    0FFFFFFFFh
0x9FF5E2: push    offset SEH_9FF5E0
0x9FF5E7: mov     eax, large fs:0
0x9FF5ED: push    eax
0x9FF5EE: mov     eax, ___security_cookie
0x9FF5F3: xor     eax, esp
0x9FF5F5: push    eax
0x9FF5F6: lea     eax, [esp+10h+var_C]
0x9FF5FA: mov     large fs:0, eax
0x9FF600: push    offset dword_B1627C
0x9FF605: mov     ecx, offset INISettingCollection
0x9FF60A: mov     [esp+14h+var_4], 0
0x9FF612: call    SettingCollectionList_AddSetting
0x9FF617: push    offset sub_A263D0; void (__cdecl *)()
0x9FF61C: call    _atexit
0x9FF621: add     esp, 4
0x9FF624: mov     ecx, [esp+10h+var_C]
0x9FF628: mov     large fs:0, ecx
0x9FF62F: pop     ecx
0x9FF630: add     esp, 0Ch
0x9FF633: retn
