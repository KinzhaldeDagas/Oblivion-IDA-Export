0x9DFC80: push    0FFFFFFFFh
0x9DFC82: push    offset SEH_9DFC80
0x9DFC87: mov     eax, large fs:0
0x9DFC8D: push    eax
0x9DFC8E: mov     eax, ___security_cookie
0x9DFC93: xor     eax, esp
0x9DFC95: push    eax
0x9DFC96: lea     eax, [esp+10h+var_C]
0x9DFC9A: mov     large fs:0, eax
0x9DFCA0: push    offset unk_B070A8
0x9DFCA5: mov     ecx, offset INISettingCollection
0x9DFCAA: mov     [esp+14h+var_4], 0
0x9DFCB2: call    SettingCollectionList_AddSetting
0x9DFCB7: push    offset sub_A1A450; void (__cdecl *)()
0x9DFCBC: call    _atexit
0x9DFCC1: add     esp, 4
0x9DFCC4: mov     ecx, [esp+10h+var_C]
0x9DFCC8: mov     large fs:0, ecx
0x9DFCCF: pop     ecx
0x9DFCD0: add     esp, 0Ch
0x9DFCD3: retn
