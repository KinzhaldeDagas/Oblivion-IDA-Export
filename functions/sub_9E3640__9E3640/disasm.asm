0x9E3640: push    0FFFFFFFFh
0x9E3642: push    offset SEH_9E3640
0x9E3647: mov     eax, large fs:0
0x9E364D: push    eax
0x9E364E: mov     eax, ___security_cookie
0x9E3653: xor     eax, esp
0x9E3655: push    eax
0x9E3656: lea     eax, [esp+10h+var_C]
0x9E365A: mov     large fs:0, eax
0x9E3660: push    offset SettingMinGrassSize
0x9E3665: mov     ecx, offset INISettingCollection
0x9E366A: mov     [esp+14h+var_4], 0
0x9E3672: call    SettingCollectionList_AddSetting
0x9E3677: push    offset sub_A1BEB0; void (__cdecl *)()
0x9E367C: call    _atexit
0x9E3681: add     esp, 4
0x9E3684: mov     ecx, [esp+10h+var_C]
0x9E3688: mov     large fs:0, ecx
0x9E368F: pop     ecx
0x9E3690: add     esp, 0Ch
0x9E3693: retn
