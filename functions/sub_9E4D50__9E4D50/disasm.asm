0x9E4D50: push    0FFFFFFFFh
0x9E4D52: push    offset SEH_9E4D50
0x9E4D57: mov     eax, large fs:0
0x9E4D5D: push    eax
0x9E4D5E: mov     eax, ___security_cookie
0x9E4D63: xor     eax, esp
0x9E4D65: push    eax
0x9E4D66: lea     eax, [esp+10h+var_C]
0x9E4D6A: mov     large fs:0, eax
0x9E4D70: push    offset off_B11ADC; "1.0, 1.0"
0x9E4D75: mov     ecx, offset BlendSettingCollection
0x9E4D7A: mov     [esp+14h+var_4], 0
0x9E4D82: call    SettingCollectionList_AddSetting
0x9E4D87: push    offset sub_A1CAF0; void (__cdecl *)()
0x9E4D8C: call    _atexit
0x9E4D91: add     esp, 4
0x9E4D94: mov     ecx, [esp+10h+var_C]
0x9E4D98: mov     large fs:0, ecx
0x9E4D9F: pop     ecx
0x9E4DA0: add     esp, 0Ch
0x9E4DA3: retn
