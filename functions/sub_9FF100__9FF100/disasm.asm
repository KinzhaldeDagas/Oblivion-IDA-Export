0x9FF100: push    0FFFFFFFFh
0x9FF102: push    offset SEH_9FF100
0x9FF107: mov     eax, large fs:0
0x9FF10D: push    eax
0x9FF10E: mov     eax, ___security_cookie
0x9FF113: xor     eax, esp
0x9FF115: push    eax
0x9FF116: lea     eax, [esp+10h+var_C]
0x9FF11A: mov     large fs:0, eax
0x9FF120: push    offset flt_B161B8
0x9FF125: mov     ecx, offset INISettingCollection
0x9FF12A: mov     [esp+14h+var_4], 0
0x9FF132: call    SettingCollectionList_AddSetting
0x9FF137: push    offset sub_A26150; void (__cdecl *)()
0x9FF13C: call    _atexit
0x9FF141: add     esp, 4
0x9FF144: mov     ecx, [esp+10h+var_C]
0x9FF148: mov     large fs:0, ecx
0x9FF14F: pop     ecx
0x9FF150: add     esp, 0Ch
0x9FF153: retn
