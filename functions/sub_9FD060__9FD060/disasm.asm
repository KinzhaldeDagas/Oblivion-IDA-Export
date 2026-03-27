0x9FD060: push    0FFFFFFFFh
0x9FD062: push    offset SEH_9FD060
0x9FD067: mov     eax, large fs:0
0x9FD06D: push    eax
0x9FD06E: mov     eax, ___security_cookie
0x9FD073: xor     eax, esp
0x9FD075: push    eax
0x9FD076: lea     eax, [esp+10h+var_C]
0x9FD07A: mov     large fs:0, eax
0x9FD080: push    offset flt_B148DC
0x9FD085: mov     ecx, offset INISettingCollection
0x9FD08A: mov     [esp+14h+var_4], 0
0x9FD092: call    SettingCollectionList_AddSetting
0x9FD097: push    offset sub_A25350; void (__cdecl *)()
0x9FD09C: call    _atexit
0x9FD0A1: add     esp, 4
0x9FD0A4: mov     ecx, [esp+10h+var_C]
0x9FD0A8: mov     large fs:0, ecx
0x9FD0AF: pop     ecx
0x9FD0B0: add     esp, 0Ch
0x9FD0B3: retn
