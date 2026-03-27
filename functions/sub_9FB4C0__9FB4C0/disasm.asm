0x9FB4C0: push    0FFFFFFFFh
0x9FB4C2: push    offset SEH_9FB4C0
0x9FB4C7: mov     eax, large fs:0
0x9FB4CD: push    eax
0x9FB4CE: mov     eax, ___security_cookie
0x9FB4D3: xor     eax, esp
0x9FB4D5: push    eax
0x9FB4D6: lea     eax, [esp+10h+var_C]
0x9FB4DA: mov     large fs:0, eax
0x9FB4E0: push    offset flt_B135B8
0x9FB4E5: mov     ecx, offset INISettingCollection
0x9FB4EA: mov     [esp+14h+var_4], 0
0x9FB4F2: call    SettingCollectionList_AddSetting
0x9FB4F7: push    offset sub_A246A0; void (__cdecl *)()
0x9FB4FC: call    _atexit
0x9FB501: add     esp, 4
0x9FB504: mov     ecx, [esp+10h+var_C]
0x9FB508: mov     large fs:0, ecx
0x9FB50F: pop     ecx
0x9FB510: add     esp, 0Ch
0x9FB513: retn
