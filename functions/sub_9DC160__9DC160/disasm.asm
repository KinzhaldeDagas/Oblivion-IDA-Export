0x9DC160: push    0FFFFFFFFh
0x9DC162: push    offset SEH_9DC160
0x9DC167: mov     eax, large fs:0
0x9DC16D: push    eax
0x9DC16E: mov     eax, ___security_cookie
0x9DC173: xor     eax, esp
0x9DC175: push    eax
0x9DC176: lea     eax, [esp+10h+var_C]
0x9DC17A: mov     large fs:0, eax
0x9DC180: push    offset dword_B06548
0x9DC185: mov     ecx, offset INISettingCollection
0x9DC18A: mov     [esp+14h+var_4], 0
0x9DC192: call    SettingCollectionList_AddSetting
0x9DC197: push    offset sub_A18610; void (__cdecl *)()
0x9DC19C: call    _atexit
0x9DC1A1: add     esp, 4
0x9DC1A4: mov     ecx, [esp+10h+var_C]
0x9DC1A8: mov     large fs:0, ecx
0x9DC1AF: pop     ecx
0x9DC1B0: add     esp, 0Ch
0x9DC1B3: retn
