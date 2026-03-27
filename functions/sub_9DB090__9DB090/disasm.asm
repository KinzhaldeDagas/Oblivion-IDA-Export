0x9DB090: push    0FFFFFFFFh
0x9DB092: push    offset SEH_9DB090
0x9DB097: mov     eax, large fs:0
0x9DB09D: push    eax
0x9DB09E: mov     eax, ___security_cookie
0x9DB0A3: xor     eax, esp
0x9DB0A5: push    eax
0x9DB0A6: lea     eax, [esp+10h+var_C]
0x9DB0AA: mov     large fs:0, eax
0x9DB0B0: push    offset off_B051F4; "255,255,255,255"
0x9DB0B5: mov     ecx, offset INISettingCollection
0x9DB0BA: mov     [esp+14h+var_4], 0
0x9DB0C2: call    SettingCollectionList_AddSetting
0x9DB0C7: push    offset sub_A17DB0; void (__cdecl *)()
0x9DB0CC: call    _atexit
0x9DB0D1: add     esp, 4
0x9DB0D4: mov     ecx, [esp+10h+var_C]
0x9DB0D8: mov     large fs:0, ecx
0x9DB0DF: pop     ecx
0x9DB0E0: add     esp, 0Ch
0x9DB0E3: retn
