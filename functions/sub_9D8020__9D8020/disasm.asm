0x9D8020: push    0FFFFFFFFh
0x9D8022: push    offset SEH_9D8020
0x9D8027: mov     eax, large fs:0
0x9D802D: push    eax
0x9D802E: mov     eax, ___security_cookie
0x9D8033: xor     eax, esp
0x9D8035: push    eax
0x9D8036: lea     eax, [esp+10h+var_C]
0x9D803A: mov     large fs:0, eax
0x9D8040: push    offset bUseJoystick
0x9D8045: mov     ecx, offset INISettingCollection
0x9D804A: mov     [esp+14h+var_4], 0
0x9D8052: call    SettingCollectionList_AddSetting
0x9D8057: push    offset sub_A16430; void (__cdecl *)()
0x9D805C: call    _atexit
0x9D8061: add     esp, 4
0x9D8064: mov     ecx, [esp+10h+var_C]
0x9D8068: mov     large fs:0, ecx
0x9D806F: pop     ecx
0x9D8070: add     esp, 0Ch
0x9D8073: retn
