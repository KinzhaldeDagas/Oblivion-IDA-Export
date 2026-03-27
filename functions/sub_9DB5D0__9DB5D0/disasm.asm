0x9DB5D0: push    0FFFFFFFFh
0x9DB5D2: push    offset SEH_9DB5D0
0x9DB5D7: mov     eax, large fs:0
0x9DB5DD: push    eax
0x9DB5DE: mov     eax, ___security_cookie
0x9DB5E3: xor     eax, esp
0x9DB5E5: push    eax
0x9DB5E6: lea     eax, [esp+10h+var_C]
0x9DB5EA: mov     large fs:0, eax
0x9DB5F0: push    offset byte_B0525C
0x9DB5F5: mov     ecx, offset INISettingCollection
0x9DB5FA: mov     [esp+14h+var_4], 0
0x9DB602: call    SettingCollectionList_AddSetting
0x9DB607: push    offset sub_A18040; void (__cdecl *)()
0x9DB60C: call    _atexit
0x9DB611: add     esp, 4
0x9DB614: mov     ecx, [esp+10h+var_C]
0x9DB618: mov     large fs:0, ecx
0x9DB61F: pop     ecx
0x9DB620: add     esp, 0Ch
0x9DB623: retn
