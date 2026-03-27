0x9DD0C0: push    0FFFFFFFFh
0x9DD0C2: push    offset SEH_9DD0C0
0x9DD0C7: mov     eax, large fs:0
0x9DD0CD: push    eax
0x9DD0CE: mov     eax, ___security_cookie
0x9DD0D3: xor     eax, esp
0x9DD0D5: push    eax
0x9DD0D6: lea     eax, [esp+10h+var_C]
0x9DD0DA: mov     large fs:0, eax
0x9DD0E0: push    offset byte_B06CD4
0x9DD0E5: mov     ecx, offset INISettingCollection
0x9DD0EA: mov     [esp+14h+var_4], 0
0x9DD0F2: call    SettingCollectionList_AddSetting
0x9DD0F7: push    offset sub_A18E10; void (__cdecl *)()
0x9DD0FC: call    _atexit
0x9DD101: add     esp, 4
0x9DD104: mov     ecx, [esp+10h+var_C]
0x9DD108: mov     large fs:0, ecx
0x9DD10F: pop     ecx
0x9DD110: add     esp, 0Ch
0x9DD113: retn
