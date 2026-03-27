0x9DB990: push    0FFFFFFFFh
0x9DB992: push    offset SEH_9DB990
0x9DB997: mov     eax, large fs:0
0x9DB99D: push    eax
0x9DB99E: mov     eax, ___security_cookie
0x9DB9A3: xor     eax, esp
0x9DB9A5: push    eax
0x9DB9A6: lea     eax, [esp+10h+var_C]
0x9DB9AA: mov     large fs:0, eax
0x9DB9B0: push    offset byte_B05594
0x9DB9B5: mov     ecx, offset INISettingCollection
0x9DB9BA: mov     [esp+14h+var_4], 0
0x9DB9C2: call    SettingCollectionList_AddSetting
0x9DB9C7: push    offset sub_A18210; void (__cdecl *)()
0x9DB9CC: call    _atexit
0x9DB9D1: add     esp, 4
0x9DB9D4: mov     ecx, [esp+10h+var_C]
0x9DB9D8: mov     large fs:0, ecx
0x9DB9DF: pop     ecx
0x9DB9E0: add     esp, 0Ch
0x9DB9E3: retn
