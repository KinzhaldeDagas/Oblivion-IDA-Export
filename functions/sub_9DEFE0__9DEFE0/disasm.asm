0x9DEFE0: push    0FFFFFFFFh
0x9DEFE2: push    offset SEH_9DEFE0
0x9DEFE7: mov     eax, large fs:0
0x9DEFED: push    eax
0x9DEFEE: mov     eax, ___security_cookie
0x9DEFF3: xor     eax, esp
0x9DEFF5: push    eax
0x9DEFF6: lea     eax, [esp+10h+var_C]
0x9DEFFA: mov     large fs:0, eax
0x9DF000: push    offset dword_B06F6C
0x9DF005: mov     ecx, offset INISettingCollection
0x9DF00A: mov     [esp+14h+var_4], 0
0x9DF012: call    SettingCollectionList_AddSetting
0x9DF017: push    offset sub_A19DA0; void (__cdecl *)()
0x9DF01C: call    _atexit
0x9DF021: add     esp, 4
0x9DF024: mov     ecx, [esp+10h+var_C]
0x9DF028: mov     large fs:0, ecx
0x9DF02F: pop     ecx
0x9DF030: add     esp, 0Ch
0x9DF033: retn
