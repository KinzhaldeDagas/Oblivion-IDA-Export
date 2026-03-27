0x9FCBE0: push    0FFFFFFFFh
0x9FCBE2: push    offset SEH_9FCBE0
0x9FCBE7: mov     eax, large fs:0
0x9FCBED: push    eax
0x9FCBEE: mov     eax, ___security_cookie
0x9FCBF3: xor     eax, esp
0x9FCBF5: push    eax
0x9FCBF6: lea     eax, [esp+10h+var_C]
0x9FCBFA: mov     large fs:0, eax
0x9FCC00: push    offset flt_B14864
0x9FCC05: mov     ecx, offset INISettingCollection
0x9FCC0A: mov     [esp+14h+var_4], 0
0x9FCC12: call    SettingCollectionList_AddSetting
0x9FCC17: push    offset sub_A25110; void (__cdecl *)()
0x9FCC1C: call    _atexit
0x9FCC21: add     esp, 4
0x9FCC24: mov     ecx, [esp+10h+var_C]
0x9FCC28: mov     large fs:0, ecx
0x9FCC2F: pop     ecx
0x9FCC30: add     esp, 0Ch
0x9FCC33: retn
