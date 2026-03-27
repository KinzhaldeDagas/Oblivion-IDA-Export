0x9D93E0: push    0FFFFFFFFh
0x9D93E2: push    offset SEH_9D93E0
0x9D93E7: mov     eax, large fs:0
0x9D93ED: push    eax
0x9D93EE: mov     eax, ___security_cookie
0x9D93F3: xor     eax, esp
0x9D93F5: push    eax
0x9D93F6: lea     eax, [esp+10h+var_C]
0x9D93FA: mov     large fs:0, eax
0x9D9400: push    offset iDebugText
0x9D9405: mov     ecx, offset INISettingCollection
0x9D940A: mov     [esp+14h+var_4], 0
0x9D9412: call    SettingCollectionList_AddSetting
0x9D9417: push    offset sub_A16FA0; void (__cdecl *)()
0x9D941C: call    _atexit
0x9D9421: add     esp, 4
0x9D9424: mov     ecx, [esp+10h+var_C]
0x9D9428: mov     large fs:0, ecx
0x9D942F: pop     ecx
0x9D9430: add     esp, 0Ch
0x9D9433: retn
