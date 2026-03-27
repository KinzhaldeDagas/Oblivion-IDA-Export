0x9DB1B0: push    0FFFFFFFFh
0x9DB1B2: push    offset SEH_9DB1B0
0x9DB1B7: mov     eax, large fs:0
0x9DB1BD: push    eax
0x9DB1BE: mov     eax, ___security_cookie
0x9DB1C3: xor     eax, esp
0x9DB1C5: push    eax
0x9DB1C6: lea     eax, [esp+10h+var_C]
0x9DB1CA: mov     large fs:0, eax
0x9DB1D0: push    offset iUpdateType
0x9DB1D5: mov     ecx, offset INISettingCollection
0x9DB1DA: mov     [esp+14h+var_4], 0
0x9DB1E2: call    SettingCollectionList_AddSetting
0x9DB1E7: push    offset sub_A17E40; void (__cdecl *)()
0x9DB1EC: call    _atexit
0x9DB1F1: add     esp, 4
0x9DB1F4: mov     ecx, [esp+10h+var_C]
0x9DB1F8: mov     large fs:0, ecx
0x9DB1FF: pop     ecx
0x9DB200: add     esp, 0Ch
0x9DB203: retn
