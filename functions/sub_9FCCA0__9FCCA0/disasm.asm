0x9FCCA0: push    0FFFFFFFFh
0x9FCCA2: push    offset SEH_9FCCA0
0x9FCCA7: mov     eax, large fs:0
0x9FCCAD: push    eax
0x9FCCAE: mov     eax, ___security_cookie
0x9FCCB3: xor     eax, esp
0x9FCCB5: push    eax
0x9FCCB6: lea     eax, [esp+10h+var_C]
0x9FCCBA: mov     large fs:0, eax
0x9FCCC0: push    offset dword_B14874
0x9FCCC5: mov     ecx, offset INISettingCollection
0x9FCCCA: mov     [esp+14h+var_4], 0
0x9FCCD2: call    SettingCollectionList_AddSetting
0x9FCCD7: push    offset sub_A25170; void (__cdecl *)()
0x9FCCDC: call    _atexit
0x9FCCE1: add     esp, 4
0x9FCCE4: mov     ecx, [esp+10h+var_C]
0x9FCCE8: mov     large fs:0, ecx
0x9FCCEF: pop     ecx
0x9FCCF0: add     esp, 0Ch
0x9FCCF3: retn
