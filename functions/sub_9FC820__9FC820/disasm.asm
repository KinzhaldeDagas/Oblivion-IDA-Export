0x9FC820: push    0FFFFFFFFh
0x9FC822: push    offset SEH_9FC820
0x9FC827: mov     eax, large fs:0
0x9FC82D: push    eax
0x9FC82E: mov     eax, ___security_cookie
0x9FC833: xor     eax, esp
0x9FC835: push    eax
0x9FC836: lea     eax, [esp+10h+var_C]
0x9FC83A: mov     large fs:0, eax
0x9FC840: push    offset dword_B14814
0x9FC845: mov     ecx, offset INISettingCollection
0x9FC84A: mov     [esp+14h+var_4], 0
0x9FC852: call    SettingCollectionList_AddSetting
0x9FC857: push    offset sub_A24F30; void (__cdecl *)()
0x9FC85C: call    _atexit
0x9FC861: add     esp, 4
0x9FC864: mov     ecx, [esp+10h+var_C]
0x9FC868: mov     large fs:0, ecx
0x9FC86F: pop     ecx
0x9FC870: add     esp, 0Ch
0x9FC873: retn
