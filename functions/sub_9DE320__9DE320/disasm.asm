0x9DE320: push    0FFFFFFFFh
0x9DE322: push    offset SEH_9DE320
0x9DE327: mov     eax, large fs:0
0x9DE32D: push    eax
0x9DE32E: mov     eax, ___security_cookie
0x9DE333: xor     eax, esp
0x9DE335: push    eax
0x9DE336: lea     eax, [esp+10h+var_C]
0x9DE33A: mov     large fs:0, eax
0x9DE340: push    offset flt_B06E5C
0x9DE345: mov     ecx, offset INISettingCollection
0x9DE34A: mov     [esp+14h+var_4], 0
0x9DE352: call    SettingCollectionList_AddSetting
0x9DE357: push    offset sub_A19740; void (__cdecl *)()
0x9DE35C: call    _atexit
0x9DE361: add     esp, 4
0x9DE364: mov     ecx, [esp+10h+var_C]
0x9DE368: mov     large fs:0, ecx
0x9DE36F: pop     ecx
0x9DE370: add     esp, 0Ch
0x9DE373: retn
