0x9E34C0: push    0FFFFFFFFh
0x9E34C2: push    offset SEH_9E34C0
0x9E34C7: mov     eax, large fs:0
0x9E34CD: push    eax
0x9E34CE: mov     eax, ___security_cookie
0x9E34D3: xor     eax, esp
0x9E34D5: push    eax
0x9E34D6: lea     eax, [esp+10h+var_C]
0x9E34DA: mov     large fs:0, eax
0x9E34E0: push    offset byte_B09B00
0x9E34E5: mov     ecx, offset INISettingCollection
0x9E34EA: mov     [esp+14h+var_4], 0
0x9E34F2: call    SettingCollectionList_AddSetting
0x9E34F7: push    offset sub_A1BDF0; void (__cdecl *)()
0x9E34FC: call    _atexit
0x9E3501: add     esp, 4
0x9E3504: mov     ecx, [esp+10h+var_C]
0x9E3508: mov     large fs:0, ecx
0x9E350F: pop     ecx
0x9E3510: add     esp, 0Ch
0x9E3513: retn
