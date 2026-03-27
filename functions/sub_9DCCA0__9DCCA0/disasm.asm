0x9DCCA0: push    0FFFFFFFFh
0x9DCCA2: push    offset SEH_9DCCA0
0x9DCCA7: mov     eax, large fs:0
0x9DCCAD: push    eax
0x9DCCAE: mov     eax, ___security_cookie
0x9DCCB3: xor     eax, esp
0x9DCCB5: push    eax
0x9DCCB6: lea     eax, [esp+10h+var_C]
0x9DCCBA: mov     large fs:0, eax
0x9DCCC0: push    offset X
0x9DCCC5: mov     ecx, offset INISettingCollection
0x9DCCCA: mov     [esp+14h+var_4], 0
0x9DCCD2: call    SettingCollectionList_AddSetting
0x9DCCD7: push    offset sub_A18C00; void (__cdecl *)()
0x9DCCDC: call    _atexit
0x9DCCE1: add     esp, 4
0x9DCCE4: mov     ecx, [esp+10h+var_C]
0x9DCCE8: mov     large fs:0, ecx
0x9DCCEF: pop     ecx
0x9DCCF0: add     esp, 0Ch
0x9DCCF3: retn
