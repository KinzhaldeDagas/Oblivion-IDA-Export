0x9D9010: push    0FFFFFFFFh
0x9D9012: push    offset SEH_9D9010
0x9D9017: mov     eax, large fs:0
0x9D901D: push    eax
0x9D901E: mov     eax, ___security_cookie
0x9D9023: xor     eax, esp
0x9D9025: push    eax
0x9D9026: lea     eax, [esp+10h+var_C]
0x9D902A: mov     large fs:0, eax
0x9D9030: push    offset flt_B02DB0
0x9D9035: mov     ecx, offset INISettingCollection
0x9D903A: mov     [esp+14h+var_4], 0
0x9D9042: call    SettingCollectionList_AddSetting
0x9D9047: push    offset sub_A16DC0; void (__cdecl *)()
0x9D904C: call    _atexit
0x9D9051: add     esp, 4
0x9D9054: mov     ecx, [esp+10h+var_C]
0x9D9058: mov     large fs:0, ecx
0x9D905F: pop     ecx
0x9D9060: add     esp, 0Ch
0x9D9063: retn
