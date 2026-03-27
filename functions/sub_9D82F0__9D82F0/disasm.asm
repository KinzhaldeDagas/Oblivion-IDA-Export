0x9D82F0: push    0FFFFFFFFh
0x9D82F2: push    offset SEH_9D82F0
0x9D82F7: mov     eax, large fs:0
0x9D82FD: push    eax
0x9D82FE: mov     eax, ___security_cookie
0x9D8303: xor     eax, esp
0x9D8305: push    eax
0x9D8306: lea     eax, [esp+10h+var_C]
0x9D830A: mov     large fs:0, eax
0x9D8310: push    offset off_B02C98
0x9D8315: mov     ecx, offset INISettingCollection
0x9D831A: mov     [esp+14h+var_4], 0
0x9D8322: call    SettingCollectionList_AddSetting
0x9D8327: push    offset sub_A16730; void (__cdecl *)()
0x9D832C: call    _atexit
0x9D8331: add     esp, 4
0x9D8334: mov     ecx, [esp+10h+var_C]
0x9D8338: mov     large fs:0, ecx
0x9D833F: pop     ecx
0x9D8340: add     esp, 0Ch
0x9D8343: retn
