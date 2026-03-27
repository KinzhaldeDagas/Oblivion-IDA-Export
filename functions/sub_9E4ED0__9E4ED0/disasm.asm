0x9E4ED0: push    0FFFFFFFFh
0x9E4ED2: push    offset SEH_9E4ED0
0x9E4ED7: mov     eax, large fs:0
0x9E4EDD: push    eax
0x9E4EDE: mov     eax, ___security_cookie
0x9E4EE3: xor     eax, esp
0x9E4EE5: push    eax
0x9E4EE6: lea     eax, [esp+10h+var_C]
0x9E4EEA: mov     large fs:0, eax
0x9E4EF0: push    offset off_B11AFC; "1.0, 1.0"
0x9E4EF5: mov     ecx, offset BlendSettingCollection
0x9E4EFA: mov     [esp+14h+var_4], 0
0x9E4F02: call    SettingCollectionList_AddSetting
0x9E4F07: push    offset sub_A1CBB0; void (__cdecl *)()
0x9E4F0C: call    _atexit
0x9E4F11: add     esp, 4
0x9E4F14: mov     ecx, [esp+10h+var_C]
0x9E4F18: mov     large fs:0, ecx
0x9E4F1F: pop     ecx
0x9E4F20: add     esp, 0Ch
0x9E4F23: retn
