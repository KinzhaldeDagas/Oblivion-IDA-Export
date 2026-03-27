0x9E3ED0: push    0FFFFFFFFh
0x9E3ED2: push    offset SEH_9E3ED0
0x9E3ED7: mov     eax, large fs:0
0x9E3EDD: push    eax
0x9E3EDE: mov     eax, ___security_cookie
0x9E3EE3: xor     eax, esp
0x9E3EE5: push    eax
0x9E3EE6: lea     eax, [esp+10h+var_C]
0x9E3EEA: mov     large fs:0, eax
0x9E3EF0: push    offset byte_B10D3C
0x9E3EF5: mov     ecx, offset INISettingCollection
0x9E3EFA: mov     [esp+14h+var_4], 0
0x9E3F02: call    SettingCollectionList_AddSetting
0x9E3F07: push    offset sub_A1C3B0; void (__cdecl *)()
0x9E3F0C: call    _atexit
0x9E3F11: add     esp, 4
0x9E3F14: mov     ecx, [esp+10h+var_C]
0x9E3F18: mov     large fs:0, ecx
0x9E3F1F: pop     ecx
0x9E3F20: add     esp, 0Ch
0x9E3F23: retn
