0x9DD600: push    0FFFFFFFFh
0x9DD602: push    offset SEH_9DD600
0x9DD607: mov     eax, large fs:0
0x9DD60D: push    eax
0x9DD60E: mov     eax, ___security_cookie
0x9DD613: xor     eax, esp
0x9DD615: push    eax
0x9DD616: lea     eax, [esp+10h+var_C]
0x9DD61A: mov     large fs:0, eax
0x9DD620: push    offset dword_B06D44
0x9DD625: mov     ecx, offset INISettingCollection
0x9DD62A: mov     [esp+14h+var_4], 0
0x9DD632: call    SettingCollectionList_AddSetting
0x9DD637: push    offset sub_A190B0; void (__cdecl *)()
0x9DD63C: call    _atexit
0x9DD641: add     esp, 4
0x9DD644: mov     ecx, [esp+10h+var_C]
0x9DD648: mov     large fs:0, ecx
0x9DD64F: pop     ecx
0x9DD650: add     esp, 0Ch
0x9DD653: retn
