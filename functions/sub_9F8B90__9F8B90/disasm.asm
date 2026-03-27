0x9F8B90: push    0FFFFFFFFh
0x9F8B92: push    offset SEH_9F8B90
0x9F8B97: mov     eax, large fs:0
0x9F8B9D: push    eax
0x9F8B9E: mov     eax, ___security_cookie
0x9F8BA3: xor     eax, esp
0x9F8BA5: push    eax
0x9F8BA6: lea     eax, [esp+10h+var_C]
0x9F8BAA: mov     large fs:0, eax
0x9F8BB0: push    offset byte_B120E4
0x9F8BB5: mov     ecx, offset INISettingCollection
0x9F8BBA: mov     [esp+14h+var_4], 0
0x9F8BC2: call    SettingCollectionList_AddSetting
0x9F8BC7: push    offset sub_A23430; void (__cdecl *)()
0x9F8BCC: call    _atexit
0x9F8BD1: add     esp, 4
0x9F8BD4: mov     ecx, [esp+10h+var_C]
0x9F8BD8: mov     large fs:0, ecx
0x9F8BDF: pop     ecx
0x9F8BE0: add     esp, 0Ch
0x9F8BE3: retn
