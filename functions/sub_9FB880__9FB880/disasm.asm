0x9FB880: push    0FFFFFFFFh
0x9FB882: push    offset SEH_9FB880
0x9FB887: mov     eax, large fs:0
0x9FB88D: push    eax
0x9FB88E: mov     eax, ___security_cookie
0x9FB893: xor     eax, esp
0x9FB895: push    eax
0x9FB896: lea     eax, [esp+10h+var_C]
0x9FB89A: mov     large fs:0, eax
0x9FB8A0: push    offset dword_B13608
0x9FB8A5: mov     ecx, offset INISettingCollection
0x9FB8AA: mov     [esp+14h+var_4], 0
0x9FB8B2: call    SettingCollectionList_AddSetting
0x9FB8B7: push    offset sub_A24880; void (__cdecl *)()
0x9FB8BC: call    _atexit
0x9FB8C1: add     esp, 4
0x9FB8C4: mov     ecx, [esp+10h+var_C]
0x9FB8C8: mov     large fs:0, ecx
0x9FB8CF: pop     ecx
0x9FB8D0: add     esp, 0Ch
0x9FB8D3: retn
