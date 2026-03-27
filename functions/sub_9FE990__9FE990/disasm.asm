0x9FE990: push    0FFFFFFFFh
0x9FE992: push    offset SEH_9FE990
0x9FE997: mov     eax, large fs:0
0x9FE99D: push    eax
0x9FE99E: mov     eax, ___security_cookie
0x9FE9A3: xor     eax, esp
0x9FE9A5: push    eax
0x9FE9A6: lea     eax, [esp+10h+var_C]
0x9FE9AA: mov     large fs:0, eax
0x9FE9B0: push    offset byte_B15834
0x9FE9B5: mov     ecx, offset INISettingCollection
0x9FE9BA: mov     [esp+14h+var_4], 0
0x9FE9C2: call    SettingCollectionList_AddSetting
0x9FE9C7: push    offset sub_A25F30; void (__cdecl *)()
0x9FE9CC: call    _atexit
0x9FE9D1: add     esp, 4
0x9FE9D4: mov     ecx, [esp+10h+var_C]
0x9FE9D8: mov     large fs:0, ecx
0x9FE9DF: pop     ecx
0x9FE9E0: add     esp, 0Ch
0x9FE9E3: retn
