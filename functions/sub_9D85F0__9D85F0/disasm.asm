0x9D85F0: push    0FFFFFFFFh
0x9D85F2: push    offset SEH_9D85F0
0x9D85F7: mov     eax, large fs:0
0x9D85FD: push    eax
0x9D85FE: mov     eax, ___security_cookie
0x9D8603: xor     eax, esp
0x9D8605: push    eax
0x9D8606: lea     eax, [esp+10h+var_C]
0x9D860A: mov     large fs:0, eax
0x9D8610: push    offset off_B02CD8
0x9D8615: mov     ecx, offset INISettingCollection
0x9D861A: mov     [esp+14h+var_4], 0
0x9D8622: call    SettingCollectionList_AddSetting
0x9D8627: push    offset sub_A168B0; void (__cdecl *)()
0x9D862C: call    _atexit
0x9D8631: add     esp, 4
0x9D8634: mov     ecx, [esp+10h+var_C]
0x9D8638: mov     large fs:0, ecx
0x9D863F: pop     ecx
0x9D8640: add     esp, 0Ch
0x9D8643: retn
