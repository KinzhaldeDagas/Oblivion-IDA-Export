0x9E4930: push    0FFFFFFFFh
0x9E4932: push    offset SEH_9E4930
0x9E4937: mov     eax, large fs:0
0x9E493D: push    eax
0x9E493E: mov     eax, ___security_cookie
0x9E4943: xor     eax, esp
0x9E4945: push    eax
0x9E4946: lea     eax, [esp+10h+var_C]
0x9E494A: mov     large fs:0, eax
0x9E4950: push    offset off_B11A84; "0.2, 0.5"
0x9E4955: mov     ecx, offset BlendSettingCollection
0x9E495A: mov     [esp+14h+var_4], 0
0x9E4962: call    SettingCollectionList_AddSetting
0x9E4967: push    offset sub_A1C8E0; void (__cdecl *)()
0x9E496C: call    _atexit
0x9E4971: add     esp, 4
0x9E4974: mov     ecx, [esp+10h+var_C]
0x9E4978: mov     large fs:0, ecx
0x9E497F: pop     ecx
0x9E4980: add     esp, 0Ch
0x9E4983: retn
