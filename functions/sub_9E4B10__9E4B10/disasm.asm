0x9E4B10: push    0FFFFFFFFh
0x9E4B12: push    offset SEH_9E4B10
0x9E4B17: mov     eax, large fs:0
0x9E4B1D: push    eax
0x9E4B1E: mov     eax, ___security_cookie
0x9E4B23: xor     eax, esp
0x9E4B25: push    eax
0x9E4B26: lea     eax, [esp+10h+var_C]
0x9E4B2A: mov     large fs:0, eax
0x9E4B30: push    offset off_B11AAC; "0.6, 0.8"
0x9E4B35: mov     ecx, offset BlendSettingCollection
0x9E4B3A: mov     [esp+14h+var_4], 0
0x9E4B42: call    SettingCollectionList_AddSetting
0x9E4B47: push    offset sub_A1C9D0; void (__cdecl *)()
0x9E4B4C: call    _atexit
0x9E4B51: add     esp, 4
0x9E4B54: mov     ecx, [esp+10h+var_C]
0x9E4B58: mov     large fs:0, ecx
0x9E4B5F: pop     ecx
0x9E4B60: add     esp, 0Ch
0x9E4B63: retn
