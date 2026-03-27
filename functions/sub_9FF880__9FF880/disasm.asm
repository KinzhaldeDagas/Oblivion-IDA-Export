0x9FF880: push    0FFFFFFFFh
0x9FF882: push    offset SEH_9FF880
0x9FF887: mov     eax, large fs:0
0x9FF88D: push    eax
0x9FF88E: mov     eax, ___security_cookie
0x9FF893: xor     eax, esp
0x9FF895: push    eax
0x9FF896: lea     eax, [esp+10h+var_C]
0x9FF89A: mov     large fs:0, eax
0x9FF8A0: push    offset dword_B162B4
0x9FF8A5: mov     ecx, offset INISettingCollection
0x9FF8AA: mov     [esp+14h+var_4], 0
0x9FF8B2: call    SettingCollectionList_AddSetting
0x9FF8B7: push    offset sub_A26520; void (__cdecl *)()
0x9FF8BC: call    _atexit
0x9FF8C1: add     esp, 4
0x9FF8C4: mov     ecx, [esp+10h+var_C]
0x9FF8C8: mov     large fs:0, ecx
0x9FF8CF: pop     ecx
0x9FF8D0: add     esp, 0Ch
0x9FF8D3: retn
