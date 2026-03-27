0x9FF6A0: push    0FFFFFFFFh
0x9FF6A2: push    offset SEH_9FF6A0
0x9FF6A7: mov     eax, large fs:0
0x9FF6AD: push    eax
0x9FF6AE: mov     eax, ___security_cookie
0x9FF6B3: xor     eax, esp
0x9FF6B5: push    eax
0x9FF6B6: lea     eax, [esp+10h+var_C]
0x9FF6BA: mov     large fs:0, eax
0x9FF6C0: push    offset dword_B1628C
0x9FF6C5: mov     ecx, offset INISettingCollection
0x9FF6CA: mov     [esp+14h+var_4], 0
0x9FF6D2: call    SettingCollectionList_AddSetting
0x9FF6D7: push    offset sub_A26430; void (__cdecl *)()
0x9FF6DC: call    _atexit
0x9FF6E1: add     esp, 4
0x9FF6E4: mov     ecx, [esp+10h+var_C]
0x9FF6E8: mov     large fs:0, ecx
0x9FF6EF: pop     ecx
0x9FF6F0: add     esp, 0Ch
0x9FF6F3: retn
