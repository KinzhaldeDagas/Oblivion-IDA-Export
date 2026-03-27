0x9D8B90: push    0FFFFFFFFh
0x9D8B92: push    offset SEH_9D8B90
0x9D8B97: mov     eax, large fs:0
0x9D8B9D: push    eax
0x9D8B9E: mov     eax, ___security_cookie
0x9D8BA3: xor     eax, esp
0x9D8BA5: push    eax
0x9D8BA6: lea     eax, [esp+10h+var_C]
0x9D8BAA: mov     large fs:0, eax
0x9D8BB0: push    offset off_B02D50; "TestCameraPath"
0x9D8BB5: mov     ecx, offset INISettingCollection
0x9D8BBA: mov     [esp+14h+var_4], 0
0x9D8BC2: call    SettingCollectionList_AddSetting
0x9D8BC7: push    offset sub_A16B80; void (__cdecl *)()
0x9D8BCC: call    _atexit
0x9D8BD1: add     esp, 4
0x9D8BD4: mov     ecx, [esp+10h+var_C]
0x9D8BD8: mov     large fs:0, ecx
0x9D8BDF: pop     ecx
0x9D8BE0: add     esp, 0Ch
0x9D8BE3: retn
