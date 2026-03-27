0x9F90D0: push    0FFFFFFFFh
0x9F90D2: push    offset SEH_9F90D0
0x9F90D7: mov     eax, large fs:0
0x9F90DD: push    eax
0x9F90DE: mov     eax, ___security_cookie
0x9F90E3: xor     eax, esp
0x9F90E5: push    eax
0x9F90E6: lea     eax, [esp+10h+var_C]
0x9F90EA: mov     large fs:0, eax
0x9F90F0: push    offset byte_B125E8
0x9F90F5: mov     ecx, offset INISettingCollection
0x9F90FA: mov     [esp+14h+var_4], 0
0x9F9102: call    SettingCollectionList_AddSetting
0x9F9107: push    offset sub_A23600; void (__cdecl *)()
0x9F910C: call    _atexit
0x9F9111: add     esp, 4
0x9F9114: mov     ecx, [esp+10h+var_C]
0x9F9118: mov     large fs:0, ecx
0x9F911F: pop     ecx
0x9F9120: add     esp, 0Ch
0x9F9123: retn
