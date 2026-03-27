0x9DE860: push    0FFFFFFFFh
0x9DE862: push    offset SEH_9DE860
0x9DE867: mov     eax, large fs:0
0x9DE86D: push    eax
0x9DE86E: mov     eax, ___security_cookie
0x9DE873: xor     eax, esp
0x9DE875: push    eax
0x9DE876: lea     eax, [esp+10h+var_C]
0x9DE87A: mov     large fs:0, eax
0x9DE880: push    offset flt_B06ECC
0x9DE885: mov     ecx, offset INISettingCollection
0x9DE88A: mov     [esp+14h+var_4], 0
0x9DE892: call    SettingCollectionList_AddSetting
0x9DE897: push    offset sub_A199E0; void (__cdecl *)()
0x9DE89C: call    _atexit
0x9DE8A1: add     esp, 4
0x9DE8A4: mov     ecx, [esp+10h+var_C]
0x9DE8A8: mov     large fs:0, ecx
0x9DE8AF: pop     ecx
0x9DE8B0: add     esp, 0Ch
0x9DE8B3: retn
