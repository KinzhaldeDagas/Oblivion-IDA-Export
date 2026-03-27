0x9FD4B0: push    0FFFFFFFFh
0x9FD4B2: push    offset SEH_9FD4B0
0x9FD4B7: mov     eax, large fs:0
0x9FD4BD: push    eax
0x9FD4BE: mov     eax, ___security_cookie
0x9FD4C3: xor     eax, esp
0x9FD4C5: push    eax
0x9FD4C6: lea     eax, [esp+10h+var_C]
0x9FD4CA: mov     large fs:0, eax
0x9FD4D0: push    offset unk_B14BA4
0x9FD4D5: mov     ecx, offset INISettingCollection
0x9FD4DA: mov     [esp+14h+var_4], 0
0x9FD4E2: call    SettingCollectionList_AddSetting
0x9FD4E7: push    offset sub_A25550; void (__cdecl *)()
0x9FD4EC: call    _atexit
0x9FD4F1: add     esp, 4
0x9FD4F4: mov     ecx, [esp+10h+var_C]
0x9FD4F8: mov     large fs:0, ecx
0x9FD4FF: pop     ecx
0x9FD500: add     esp, 0Ch
0x9FD503: retn
