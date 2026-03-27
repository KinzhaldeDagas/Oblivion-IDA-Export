0x9DD480: push    0FFFFFFFFh
0x9DD482: push    offset SEH_9DD480
0x9DD487: mov     eax, large fs:0
0x9DD48D: push    eax
0x9DD48E: mov     eax, ___security_cookie
0x9DD493: xor     eax, esp
0x9DD495: push    eax
0x9DD496: lea     eax, [esp+10h+var_C]
0x9DD49A: mov     large fs:0, eax
0x9DD4A0: push    offset texmipmapskip
0x9DD4A5: mov     ecx, offset INISettingCollection
0x9DD4AA: mov     [esp+14h+var_4], 0
0x9DD4B2: call    SettingCollectionList_AddSetting
0x9DD4B7: push    offset sub_A18FF0; void (__cdecl *)()
0x9DD4BC: call    _atexit
0x9DD4C1: add     esp, 4
0x9DD4C4: mov     ecx, [esp+10h+var_C]
0x9DD4C8: mov     large fs:0, ecx
0x9DD4CF: pop     ecx
0x9DD4D0: add     esp, 0Ch
0x9DD4D3: retn
