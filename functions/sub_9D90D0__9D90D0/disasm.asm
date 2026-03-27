0x9D90D0: push    0FFFFFFFFh
0x9D90D2: push    offset SEH_9D90D0
0x9D90D7: mov     eax, large fs:0
0x9D90DD: push    eax
0x9D90DE: mov     eax, ___security_cookie
0x9D90E3: xor     eax, esp
0x9D90E5: push    eax
0x9D90E6: lea     eax, [esp+10h+var_C]
0x9D90EA: mov     large fs:0, eax
0x9D90F0: push    offset flt_B02DC0
0x9D90F5: mov     ecx, offset INISettingCollection
0x9D90FA: mov     [esp+14h+var_4], 0
0x9D9102: call    SettingCollectionList_AddSetting
0x9D9107: push    offset sub_A16E20; void (__cdecl *)()
0x9D910C: call    _atexit
0x9D9111: add     esp, 4
0x9D9114: mov     ecx, [esp+10h+var_C]
0x9D9118: mov     large fs:0, ecx
0x9D911F: pop     ecx
0x9D9120: add     esp, 0Ch
0x9D9123: retn
