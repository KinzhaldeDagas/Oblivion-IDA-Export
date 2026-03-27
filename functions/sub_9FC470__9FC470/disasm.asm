0x9FC470: push    0FFFFFFFFh
0x9FC472: push    offset SEH_9FC470
0x9FC477: mov     eax, large fs:0
0x9FC47D: push    eax
0x9FC47E: mov     eax, ___security_cookie
0x9FC483: xor     eax, esp
0x9FC485: push    eax
0x9FC486: lea     eax, [esp+10h+var_C]
0x9FC48A: mov     large fs:0, eax
0x9FC490: push    offset dword_B14170
0x9FC495: mov     ecx, offset INISettingCollection
0x9FC49A: mov     [esp+14h+var_4], 0
0x9FC4A2: call    SettingCollectionList_AddSetting
0x9FC4A7: push    offset sub_A24D10; void (__cdecl *)()
0x9FC4AC: call    _atexit
0x9FC4B1: add     esp, 4
0x9FC4B4: mov     ecx, [esp+10h+var_C]
0x9FC4B8: mov     large fs:0, ecx
0x9FC4BF: pop     ecx
0x9FC4C0: add     esp, 0Ch
0x9FC4C3: retn
