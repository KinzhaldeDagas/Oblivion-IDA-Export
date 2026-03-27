0x9DADD0: push    0FFFFFFFFh
0x9DADD2: push    offset SEH_9DADD0
0x9DADD7: mov     eax, large fs:0
0x9DADDD: push    eax
0x9DADDE: mov     eax, ___security_cookie
0x9DADE3: xor     eax, esp
0x9DADE5: push    eax
0x9DADE6: lea     eax, [esp+10h+var_C]
0x9DADEA: mov     large fs:0, eax
0x9DADF0: push    offset dword_B05148
0x9DADF5: mov     ecx, offset INISettingCollection
0x9DADFA: mov     [esp+14h+var_4], 0
0x9DAE02: call    SettingCollectionList_AddSetting
0x9DAE07: push    offset sub_A17C60; void (__cdecl *)()
0x9DAE0C: call    _atexit
0x9DAE11: add     esp, 4
0x9DAE14: mov     ecx, [esp+10h+var_C]
0x9DAE18: mov     large fs:0, ecx
0x9DAE1F: pop     ecx
0x9DAE20: add     esp, 0Ch
0x9DAE23: retn
