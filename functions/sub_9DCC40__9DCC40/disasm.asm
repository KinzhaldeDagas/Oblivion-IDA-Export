0x9DCC40: push    0FFFFFFFFh
0x9DCC42: push    offset SEH_9DCC40
0x9DCC47: mov     eax, large fs:0
0x9DCC4D: push    eax
0x9DCC4E: mov     eax, ___security_cookie
0x9DCC53: xor     eax, esp
0x9DCC55: push    eax
0x9DCC56: lea     eax, [esp+10h+var_C]
0x9DCC5A: mov     large fs:0, eax
0x9DCC60: push    offset g_bFullScreen
0x9DCC65: mov     ecx, offset INISettingCollection
0x9DCC6A: mov     [esp+14h+var_4], 0
0x9DCC72: call    SettingCollectionList_AddSetting
0x9DCC77: push    offset sub_A18BD0; void (__cdecl *)()
0x9DCC7C: call    _atexit
0x9DCC81: add     esp, 4
0x9DCC84: mov     ecx, [esp+10h+var_C]
0x9DCC88: mov     large fs:0, ecx
0x9DCC8F: pop     ecx
0x9DCC90: add     esp, 0Ch
0x9DCC93: retn
