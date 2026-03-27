0x9FB340: push    0FFFFFFFFh
0x9FB342: push    offset SEH_9FB340
0x9FB347: mov     eax, large fs:0
0x9FB34D: push    eax
0x9FB34E: mov     eax, ___security_cookie
0x9FB353: xor     eax, esp
0x9FB355: push    eax
0x9FB356: lea     eax, [esp+10h+var_C]
0x9FB35A: mov     large fs:0, eax
0x9FB360: push    offset unk_B13598
0x9FB365: mov     ecx, offset INISettingCollection
0x9FB36A: mov     [esp+14h+var_4], 0
0x9FB372: call    SettingCollectionList_AddSetting
0x9FB377: push    offset sub_A245E0; void (__cdecl *)()
0x9FB37C: call    _atexit
0x9FB381: add     esp, 4
0x9FB384: mov     ecx, [esp+10h+var_C]
0x9FB388: mov     large fs:0, ecx
0x9FB38F: pop     ecx
0x9FB390: add     esp, 0Ch
0x9FB393: retn
