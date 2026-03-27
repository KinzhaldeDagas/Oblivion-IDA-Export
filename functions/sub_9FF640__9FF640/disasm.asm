0x9FF640: push    0FFFFFFFFh
0x9FF642: push    offset SEH_9FF640
0x9FF647: mov     eax, large fs:0
0x9FF64D: push    eax
0x9FF64E: mov     eax, ___security_cookie
0x9FF653: xor     eax, esp
0x9FF655: push    eax
0x9FF656: lea     eax, [esp+10h+var_C]
0x9FF65A: mov     large fs:0, eax
0x9FF660: push    offset dword_B16284
0x9FF665: mov     ecx, offset INISettingCollection
0x9FF66A: mov     [esp+14h+var_4], 0
0x9FF672: call    SettingCollectionList_AddSetting
0x9FF677: push    offset sub_A26400; void (__cdecl *)()
0x9FF67C: call    _atexit
0x9FF681: add     esp, 4
0x9FF684: mov     ecx, [esp+10h+var_C]
0x9FF688: mov     large fs:0, ecx
0x9FF68F: pop     ecx
0x9FF690: add     esp, 0Ch
0x9FF693: retn
