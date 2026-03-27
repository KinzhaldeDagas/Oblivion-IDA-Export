0x9F89B0: push    0FFFFFFFFh
0x9F89B2: push    offset SEH_9F89B0
0x9F89B7: mov     eax, large fs:0
0x9F89BD: push    eax
0x9F89BE: mov     eax, ___security_cookie
0x9F89C3: xor     eax, esp
0x9F89C5: push    eax
0x9F89C6: lea     eax, [esp+10h+var_C]
0x9F89CA: mov     large fs:0, eax
0x9F89D0: push    offset bFixFaceNormals
0x9F89D5: mov     ecx, offset INISettingCollection
0x9F89DA: mov     [esp+14h+var_4], 0
0x9F89E2: call    SettingCollectionList_AddSetting
0x9F89E7: push    offset sub_A23340; void (__cdecl *)()
0x9F89EC: call    _atexit
0x9F89F1: add     esp, 4
0x9F89F4: mov     ecx, [esp+10h+var_C]
0x9F89F8: mov     large fs:0, ecx
0x9F89FF: pop     ecx
0x9F8A00: add     esp, 0Ch
0x9F8A03: retn
