0x9E3010: push    0FFFFFFFFh
0x9E3012: push    offset SEH_9E3010
0x9E3017: mov     eax, large fs:0
0x9E301D: push    eax
0x9E301E: mov     eax, ___security_cookie
0x9E3023: xor     eax, esp
0x9E3025: push    eax
0x9E3026: lea     eax, [esp+10h+var_C]
0x9E302A: mov     large fs:0, eax
0x9E3030: push    offset havokDebug
0x9E3035: mov     ecx, offset INISettingCollection
0x9E303A: mov     [esp+14h+var_4], 0
0x9E3042: call    SettingCollectionList_AddSetting
0x9E3047: push    offset sub_A1BB00; void (__cdecl *)()
0x9E304C: call    _atexit
0x9E3051: add     esp, 4
0x9E3054: mov     ecx, [esp+10h+var_C]
0x9E3058: mov     large fs:0, ecx
0x9E305F: pop     ecx
0x9E3060: add     esp, 0Ch
0x9E3063: retn
