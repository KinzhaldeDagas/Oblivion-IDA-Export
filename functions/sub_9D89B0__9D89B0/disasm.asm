0x9D89B0: push    0FFFFFFFFh
0x9D89B2: push    offset SEH_9D89B0
0x9D89B7: mov     eax, large fs:0
0x9D89BD: push    eax
0x9D89BE: mov     eax, ___security_cookie
0x9D89C3: xor     eax, esp
0x9D89C5: push    eax
0x9D89C6: lea     eax, [esp+10h+var_C]
0x9D89CA: mov     large fs:0, eax
0x9D89D0: push    offset dword_B02D28
0x9D89D5: mov     ecx, offset INISettingCollection
0x9D89DA: mov     [esp+14h+var_4], 0
0x9D89E2: call    SettingCollectionList_AddSetting
0x9D89E7: push    offset sub_A16A90; void (__cdecl *)()
0x9D89EC: call    _atexit
0x9D89F1: add     esp, 4
0x9D89F4: mov     ecx, [esp+10h+var_C]
0x9D89F8: mov     large fs:0, ecx
0x9D89FF: pop     ecx
0x9D8A00: add     esp, 0Ch
0x9D8A03: retn
