0x9E0510: push    0FFFFFFFFh
0x9E0512: push    offset SEH_9E0510
0x9E0517: mov     eax, large fs:0
0x9E051D: push    eax
0x9E051E: mov     eax, ___security_cookie
0x9E0523: xor     eax, esp
0x9E0525: push    eax
0x9E0526: lea     eax, [esp+10h+var_C]
0x9E052A: mov     large fs:0, eax
0x9E0530: push    offset byte_B07634
0x9E0535: mov     ecx, offset INISettingCollection
0x9E053A: mov     [esp+14h+var_4], 0
0x9E0542: call    SettingCollectionList_AddSetting
0x9E0547: push    offset sub_A1A8E0; void (__cdecl *)()
0x9E054C: call    _atexit
0x9E0551: add     esp, 4
0x9E0554: mov     ecx, [esp+10h+var_C]
0x9E0558: mov     large fs:0, ecx
0x9E055F: pop     ecx
0x9E0560: add     esp, 0Ch
0x9E0563: retn
