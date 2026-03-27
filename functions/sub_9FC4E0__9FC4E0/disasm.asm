0x9FC4E0: push    0FFFFFFFFh
0x9FC4E2: push    offset SEH_9FC4E0
0x9FC4E7: mov     eax, large fs:0
0x9FC4ED: push    eax
0x9FC4EE: mov     eax, ___security_cookie
0x9FC4F3: xor     eax, esp
0x9FC4F5: push    eax
0x9FC4F6: lea     eax, [esp+10h+var_C]
0x9FC4FA: mov     large fs:0, eax
0x9FC500: push    offset off_B1436C; "0002466E"
0x9FC505: mov     ecx, offset INISettingCollection
0x9FC50A: mov     [esp+14h+var_4], 0
0x9FC512: call    SettingCollectionList_AddSetting
0x9FC517: push    offset sub_A24D50; void (__cdecl *)()
0x9FC51C: call    _atexit
0x9FC521: add     esp, 4
0x9FC524: mov     ecx, [esp+10h+var_C]
0x9FC528: mov     large fs:0, ecx
0x9FC52F: pop     ecx
0x9FC530: add     esp, 0Ch
0x9FC533: retn
