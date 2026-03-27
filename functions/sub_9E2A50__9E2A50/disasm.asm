0x9E2A50: push    0FFFFFFFFh
0x9E2A52: push    offset SEH_9E2A50
0x9E2A57: mov     eax, large fs:0
0x9E2A5D: push    eax
0x9E2A5E: mov     eax, ___security_cookie
0x9E2A63: xor     eax, esp
0x9E2A65: push    eax
0x9E2A66: lea     eax, [esp+10h+var_C]
0x9E2A6A: mov     large fs:0, eax
0x9E2A70: push    offset byte_B08960
0x9E2A75: mov     ecx, offset INISettingCollection
0x9E2A7A: mov     [esp+14h+var_4], 0
0x9E2A82: call    SettingCollectionList_AddSetting
0x9E2A87: push    offset sub_A1B7E0; void (__cdecl *)()
0x9E2A8C: call    _atexit
0x9E2A91: add     esp, 4
0x9E2A94: mov     ecx, [esp+10h+var_C]
0x9E2A98: mov     large fs:0, ecx
0x9E2A9F: pop     ecx
0x9E2AA0: add     esp, 0Ch
0x9E2AA3: retn
