0x9FEE60: push    0FFFFFFFFh
0x9FEE62: push    offset SEH_9FEE60
0x9FEE67: mov     eax, large fs:0
0x9FEE6D: push    eax
0x9FEE6E: mov     eax, ___security_cookie
0x9FEE73: xor     eax, esp
0x9FEE75: push    eax
0x9FEE76: lea     eax, [esp+10h+var_C]
0x9FEE7A: mov     large fs:0, eax
0x9FEE80: push    offset MusicEnabled
0x9FEE85: mov     ecx, offset INISettingCollection
0x9FEE8A: mov     [esp+14h+var_4], 0
0x9FEE92: call    SettingCollectionList_AddSetting
0x9FEE97: push    offset sub_A26000; void (__cdecl *)()
0x9FEE9C: call    _atexit
0x9FEEA1: add     esp, 4
0x9FEEA4: mov     ecx, [esp+10h+var_C]
0x9FEEA8: mov     large fs:0, ecx
0x9FEEAF: pop     ecx
0x9FEEB0: add     esp, 0Ch
0x9FEEB3: retn
