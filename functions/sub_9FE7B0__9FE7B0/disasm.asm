0x9FE7B0: push    0FFFFFFFFh
0x9FE7B2: push    offset SEH_9FE7B0
0x9FE7B7: mov     eax, large fs:0
0x9FE7BD: push    eax
0x9FE7BE: mov     eax, ___security_cookie
0x9FE7C3: xor     eax, esp
0x9FE7C5: push    eax
0x9FE7C6: lea     eax, [esp+10h+var_C]
0x9FE7CA: mov     large fs:0, eax
0x9FE7D0: push    offset byte_B15800
0x9FE7D5: mov     ecx, offset INISettingCollection
0x9FE7DA: mov     [esp+14h+var_4], 0
0x9FE7E2: call    SettingCollectionList_AddSetting
0x9FE7E7: push    offset sub_A25E40; void (__cdecl *)()
0x9FE7EC: call    _atexit
0x9FE7F1: add     esp, 4
0x9FE7F4: mov     ecx, [esp+10h+var_C]
0x9FE7F8: mov     large fs:0, ecx
0x9FE7FF: pop     ecx
0x9FE800: add     esp, 0Ch
0x9FE803: retn
