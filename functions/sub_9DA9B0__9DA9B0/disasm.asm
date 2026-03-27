0x9DA9B0: push    0FFFFFFFFh
0x9DA9B2: push    offset SEH_9DA9B0
0x9DA9B7: mov     eax, large fs:0
0x9DA9BD: push    eax
0x9DA9BE: mov     eax, ___security_cookie
0x9DA9C3: xor     eax, esp
0x9DA9C5: push    eax
0x9DA9C6: lea     eax, [esp+10h+var_C]
0x9DA9CA: mov     large fs:0, eax
0x9DA9D0: push    offset bCheckRuntimeCollisions_Archive
0x9DA9D5: mov     ecx, offset INISettingCollection
0x9DA9DA: mov     [esp+14h+var_4], 0
0x9DA9E2: call    SettingCollectionList_AddSetting
0x9DA9E7: push    offset sub_A17A10; void (__cdecl *)()
0x9DA9EC: call    _atexit
0x9DA9F1: add     esp, 4
0x9DA9F4: mov     ecx, [esp+10h+var_C]
0x9DA9F8: mov     large fs:0, ecx
0x9DA9FF: pop     ecx
0x9DAA00: add     esp, 0Ch
0x9DAA03: retn
