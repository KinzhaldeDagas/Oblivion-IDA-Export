0x9FBCE0: push    0FFFFFFFFh
0x9FBCE2: push    offset SEH_9FBCE0
0x9FBCE7: mov     eax, large fs:0
0x9FBCED: push    eax
0x9FBCEE: mov     eax, ___security_cookie
0x9FBCF3: xor     eax, esp
0x9FBCF5: push    eax
0x9FBCF6: lea     eax, [esp+10h+var_C]
0x9FBCFA: mov     large fs:0, eax
0x9FBD00: push    offset flt_B13FC4
0x9FBD05: mov     ecx, offset INISettingCollection
0x9FBD0A: mov     [esp+14h+var_4], 0
0x9FBD12: call    SettingCollectionList_AddSetting
0x9FBD17: push    offset sub_A24A80; void (__cdecl *)()
0x9FBD1C: call    _atexit
0x9FBD21: add     esp, 4
0x9FBD24: mov     ecx, [esp+10h+var_C]
0x9FBD28: mov     large fs:0, ecx
0x9FBD2F: pop     ecx
0x9FBD30: add     esp, 0Ch
0x9FBD33: retn
