0x9FE480: push    0FFFFFFFFh
0x9FE482: push    offset SEH_9FE480
0x9FE487: mov     eax, large fs:0
0x9FE48D: push    eax
0x9FE48E: mov     eax, ___security_cookie
0x9FE493: xor     eax, esp
0x9FE495: push    eax
0x9FE496: lea     eax, [esp+10h+var_C]
0x9FE49A: mov     large fs:0, eax
0x9FE4A0: push    offset byte_B14F58
0x9FE4A5: mov     ecx, offset INISettingCollection
0x9FE4AA: mov     [esp+14h+var_4], 0
0x9FE4B2: call    SettingCollectionList_AddSetting
0x9FE4B7: push    offset sub_A25D40; void (__cdecl *)()
0x9FE4BC: call    _atexit
0x9FE4C1: add     esp, 4
0x9FE4C4: mov     ecx, [esp+10h+var_C]
0x9FE4C8: mov     large fs:0, ecx
0x9FE4CF: pop     ecx
0x9FE4D0: add     esp, 0Ch
0x9FE4D3: retn
