0x9FC600: push    0FFFFFFFFh
0x9FC602: push    offset SEH_9FC600
0x9FC607: mov     eax, large fs:0
0x9FC60D: push    eax
0x9FC60E: mov     eax, ___security_cookie
0x9FC613: xor     eax, esp
0x9FC615: push    eax
0x9FC616: lea     eax, [esp+10h+var_C]
0x9FC61A: mov     large fs:0, eax
0x9FC620: push    offset unk_B14388
0x9FC625: mov     ecx, offset INISettingCollection
0x9FC62A: mov     [esp+14h+var_4], 0
0x9FC632: call    SettingCollectionList_AddSetting
0x9FC637: push    offset sub_A24DE0; void (__cdecl *)()
0x9FC63C: call    _atexit
0x9FC641: add     esp, 4
0x9FC644: mov     ecx, [esp+10h+var_C]
0x9FC648: mov     large fs:0, ecx
0x9FC64F: pop     ecx
0x9FC650: add     esp, 0Ch
0x9FC653: retn
