0x9DA950: push    0FFFFFFFFh
0x9DA952: push    offset SEH_9DA950
0x9DA957: mov     eax, large fs:0
0x9DA95D: push    eax
0x9DA95E: mov     eax, ___security_cookie
0x9DA963: xor     eax, esp
0x9DA965: push    eax
0x9DA966: lea     eax, [esp+10h+var_C]
0x9DA96A: mov     large fs:0, eax
0x9DA970: push    offset bUseArchives_Archive
0x9DA975: mov     ecx, offset INISettingCollection
0x9DA97A: mov     [esp+14h+var_4], 0
0x9DA982: call    SettingCollectionList_AddSetting
0x9DA987: push    offset sub_A179E0; void (__cdecl *)()
0x9DA98C: call    _atexit
0x9DA991: add     esp, 4
0x9DA994: mov     ecx, [esp+10h+var_C]
0x9DA998: mov     large fs:0, ecx
0x9DA99F: pop     ecx
0x9DA9A0: add     esp, 0Ch
0x9DA9A3: retn
