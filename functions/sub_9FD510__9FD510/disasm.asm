0x9FD510: push    0FFFFFFFFh
0x9FD512: push    offset SEH_9FD510
0x9FD517: mov     eax, large fs:0
0x9FD51D: push    eax
0x9FD51E: mov     eax, ___security_cookie
0x9FD523: xor     eax, esp
0x9FD525: push    eax
0x9FD526: lea     eax, [esp+10h+var_C]
0x9FD52A: mov     large fs:0, eax
0x9FD530: push    offset flt_B14BAC
0x9FD535: mov     ecx, offset INISettingCollection
0x9FD53A: mov     [esp+14h+var_4], 0
0x9FD542: call    SettingCollectionList_AddSetting
0x9FD547: push    offset sub_A25580; void (__cdecl *)()
0x9FD54C: call    _atexit
0x9FD551: add     esp, 4
0x9FD554: mov     ecx, [esp+10h+var_C]
0x9FD558: mov     large fs:0, ecx
0x9FD55F: pop     ecx
0x9FD560: add     esp, 0Ch
0x9FD563: retn
