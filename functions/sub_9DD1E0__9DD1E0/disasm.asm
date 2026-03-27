0x9DD1E0: push    0FFFFFFFFh
0x9DD1E2: push    offset SEH_9DD1E0
0x9DD1E7: mov     eax, large fs:0
0x9DD1ED: push    eax
0x9DD1EE: mov     eax, ___security_cookie
0x9DD1F3: xor     eax, esp
0x9DD1F5: push    eax
0x9DD1F6: lea     eax, [esp+10h+var_C]
0x9DD1FA: mov     large fs:0, eax
0x9DD200: push    offset byte_B06CEC
0x9DD205: mov     ecx, offset INISettingCollection
0x9DD20A: mov     [esp+14h+var_4], 0
0x9DD212: call    SettingCollectionList_AddSetting
0x9DD217: push    offset sub_A18EA0; void (__cdecl *)()
0x9DD21C: call    _atexit
0x9DD221: add     esp, 4
0x9DD224: mov     ecx, [esp+10h+var_C]
0x9DD228: mov     large fs:0, ecx
0x9DD22F: pop     ecx
0x9DD230: add     esp, 0Ch
0x9DD233: retn
