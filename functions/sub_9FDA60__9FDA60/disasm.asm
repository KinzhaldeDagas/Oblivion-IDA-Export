0x9FDA60: push    0FFFFFFFFh
0x9FDA62: push    offset SEH_9FDA60
0x9FDA67: mov     eax, large fs:0
0x9FDA6D: push    eax
0x9FDA6E: mov     eax, ___security_cookie
0x9FDA73: xor     eax, esp
0x9FDA75: push    eax
0x9FDA76: lea     eax, [esp+10h+var_C]
0x9FDA7A: mov     large fs:0, eax
0x9FDA80: push    offset dword_B14E44
0x9FDA85: mov     ecx, offset INISettingCollection
0x9FDA8A: mov     [esp+14h+var_4], 0
0x9FDA92: call    SettingCollectionList_AddSetting
0x9FDA97: push    offset sub_A25810; void (__cdecl *)()
0x9FDA9C: call    _atexit
0x9FDAA1: add     esp, 4
0x9FDAA4: mov     ecx, [esp+10h+var_C]
0x9FDAA8: mov     large fs:0, ecx
0x9FDAAF: pop     ecx
0x9FDAB0: add     esp, 0Ch
0x9FDAB3: retn
