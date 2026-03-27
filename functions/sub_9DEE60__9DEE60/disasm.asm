0x9DEE60: push    0FFFFFFFFh
0x9DEE62: push    offset SEH_9DEE60
0x9DEE67: mov     eax, large fs:0
0x9DEE6D: push    eax
0x9DEE6E: mov     eax, ___security_cookie
0x9DEE73: xor     eax, esp
0x9DEE75: push    eax
0x9DEE76: lea     eax, [esp+10h+var_C]
0x9DEE7A: mov     large fs:0, eax
0x9DEE80: push    offset unk_B06F4C
0x9DEE85: mov     ecx, offset INISettingCollection
0x9DEE8A: mov     [esp+14h+var_4], 0
0x9DEE92: call    SettingCollectionList_AddSetting
0x9DEE97: push    offset sub_A19CE0; void (__cdecl *)()
0x9DEE9C: call    _atexit
0x9DEEA1: add     esp, 4
0x9DEEA4: mov     ecx, [esp+10h+var_C]
0x9DEEA8: mov     large fs:0, ecx
0x9DEEAF: pop     ecx
0x9DEEB0: add     esp, 0Ch
0x9DEEB3: retn
