0x9DB8D0: push    0FFFFFFFFh
0x9DB8D2: push    offset SEH_9DB8D0
0x9DB8D7: mov     eax, large fs:0
0x9DB8DD: push    eax
0x9DB8DE: mov     eax, ___security_cookie
0x9DB8E3: xor     eax, esp
0x9DB8E5: push    eax
0x9DB8E6: lea     eax, [esp+10h+var_C]
0x9DB8EA: mov     large fs:0, eax
0x9DB8F0: push    offset byte_B05584
0x9DB8F5: mov     ecx, offset INISettingCollection
0x9DB8FA: mov     [esp+14h+var_4], 0
0x9DB902: call    SettingCollectionList_AddSetting
0x9DB907: push    offset sub_A181B0; void (__cdecl *)()
0x9DB90C: call    _atexit
0x9DB911: add     esp, 4
0x9DB914: mov     ecx, [esp+10h+var_C]
0x9DB918: mov     large fs:0, ecx
0x9DB91F: pop     ecx
0x9DB920: add     esp, 0Ch
0x9DB923: retn
