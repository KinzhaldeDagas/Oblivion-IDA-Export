0x9E4E10: push    0FFFFFFFFh
0x9E4E12: push    offset SEH_9E4E10
0x9E4E17: mov     eax, large fs:0
0x9E4E1D: push    eax
0x9E4E1E: mov     eax, ___security_cookie
0x9E4E23: xor     eax, esp
0x9E4E25: push    eax
0x9E4E26: lea     eax, [esp+10h+var_C]
0x9E4E2A: mov     large fs:0, eax
0x9E4E30: push    offset off_B11AEC; "1.0, 1.0"
0x9E4E35: mov     ecx, offset BlendSettingCollection
0x9E4E3A: mov     [esp+14h+var_4], 0
0x9E4E42: call    SettingCollectionList_AddSetting
0x9E4E47: push    offset sub_A1CB50; void (__cdecl *)()
0x9E4E4C: call    _atexit
0x9E4E51: add     esp, 4
0x9E4E54: mov     ecx, [esp+10h+var_C]
0x9E4E58: mov     large fs:0, ecx
0x9E4E5F: pop     ecx
0x9E4E60: add     esp, 0Ch
0x9E4E63: retn
