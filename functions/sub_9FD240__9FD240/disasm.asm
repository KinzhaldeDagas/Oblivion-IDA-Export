0x9FD240: push    0FFFFFFFFh
0x9FD242: push    offset SEH_9FD240
0x9FD247: mov     eax, large fs:0
0x9FD24D: push    eax
0x9FD24E: mov     eax, ___security_cookie
0x9FD253: xor     eax, esp
0x9FD255: push    eax
0x9FD256: lea     eax, [esp+10h+var_C]
0x9FD25A: mov     large fs:0, eax
0x9FD260: push    offset dword_B14904
0x9FD265: mov     ecx, offset INISettingCollection
0x9FD26A: mov     [esp+14h+var_4], 0
0x9FD272: call    SettingCollectionList_AddSetting
0x9FD277: push    offset sub_A25440; void (__cdecl *)()
0x9FD27C: call    _atexit
0x9FD281: add     esp, 4
0x9FD284: mov     ecx, [esp+10h+var_C]
0x9FD288: mov     large fs:0, ecx
0x9FD28F: pop     ecx
0x9FD290: add     esp, 0Ch
0x9FD293: retn
