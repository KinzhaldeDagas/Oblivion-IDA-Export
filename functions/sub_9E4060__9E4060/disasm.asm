0x9E4060: push    0FFFFFFFFh
0x9E4062: push    offset SEH_9E4060
0x9E4067: mov     eax, large fs:0
0x9E406D: push    eax
0x9E406E: mov     eax, ___security_cookie
0x9E4073: xor     eax, esp
0x9E4075: push    eax
0x9E4076: lea     eax, [esp+10h+var_C]
0x9E407A: mov     large fs:0, eax
0x9E4080: push    offset off_B10D68
0x9E4085: mov     ecx, offset INISettingCollection
0x9E408A: mov     [esp+14h+var_4], 0
0x9E4092: call    SettingCollectionList_AddSetting
0x9E4097: push    offset sub_A1C410; void (__cdecl *)()
0x9E409C: call    _atexit
0x9E40A1: add     esp, 4
0x9E40A4: mov     ecx, [esp+10h+var_C]
0x9E40A8: mov     large fs:0, ecx
0x9E40AF: pop     ecx
0x9E40B0: add     esp, 0Ch
0x9E40B3: retn
