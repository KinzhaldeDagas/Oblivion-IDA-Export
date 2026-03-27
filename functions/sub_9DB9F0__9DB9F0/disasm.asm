0x9DB9F0: push    0FFFFFFFFh
0x9DB9F2: push    offset SEH_9DB9F0
0x9DB9F7: mov     eax, large fs:0
0x9DB9FD: push    eax
0x9DB9FE: mov     eax, ___security_cookie
0x9DBA03: xor     eax, esp
0x9DBA05: push    eax
0x9DBA06: lea     eax, [esp+10h+var_C]
0x9DBA0A: mov     large fs:0, eax
0x9DBA10: push    offset byte_B0559C
0x9DBA15: mov     ecx, offset INISettingCollection
0x9DBA1A: mov     [esp+14h+var_4], 0
0x9DBA22: call    SettingCollectionList_AddSetting
0x9DBA27: push    offset sub_A18240; void (__cdecl *)()
0x9DBA2C: call    _atexit
0x9DBA31: add     esp, 4
0x9DBA34: mov     ecx, [esp+10h+var_C]
0x9DBA38: mov     large fs:0, ecx
0x9DBA3F: pop     ecx
0x9DBA40: add     esp, 0Ch
0x9DBA43: retn
