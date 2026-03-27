0x9DD060: push    0FFFFFFFFh
0x9DD062: push    offset SEH_9DD060
0x9DD067: mov     eax, large fs:0
0x9DD06D: push    eax
0x9DD06E: mov     eax, ___security_cookie
0x9DD073: xor     eax, esp
0x9DD075: push    eax
0x9DD076: lea     eax, [esp+10h+var_C]
0x9DD07A: mov     large fs:0, eax
0x9DD080: push    offset byte_B06CCC
0x9DD085: mov     ecx, offset INISettingCollection
0x9DD08A: mov     [esp+14h+var_4], 0
0x9DD092: call    SettingCollectionList_AddSetting
0x9DD097: push    offset sub_A18DE0; void (__cdecl *)()
0x9DD09C: call    _atexit
0x9DD0A1: add     esp, 4
0x9DD0A4: mov     ecx, [esp+10h+var_C]
0x9DD0A8: mov     large fs:0, ecx
0x9DD0AF: pop     ecx
0x9DD0B0: add     esp, 0Ch
0x9DD0B3: retn
