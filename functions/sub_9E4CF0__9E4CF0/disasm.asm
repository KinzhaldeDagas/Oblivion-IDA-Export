0x9E4CF0: push    0FFFFFFFFh
0x9E4CF2: push    offset SEH_9E4CF0
0x9E4CF7: mov     eax, large fs:0
0x9E4CFD: push    eax
0x9E4CFE: mov     eax, ___security_cookie
0x9E4D03: xor     eax, esp
0x9E4D05: push    eax
0x9E4D06: lea     eax, [esp+10h+var_C]
0x9E4D0A: mov     large fs:0, eax
0x9E4D10: push    offset off_B11AD4; "1.0, 1.0"
0x9E4D15: mov     ecx, offset BlendSettingCollection
0x9E4D1A: mov     [esp+14h+var_4], 0
0x9E4D22: call    SettingCollectionList_AddSetting
0x9E4D27: push    offset sub_A1CAC0; void (__cdecl *)()
0x9E4D2C: call    _atexit
0x9E4D31: add     esp, 4
0x9E4D34: mov     ecx, [esp+10h+var_C]
0x9E4D38: mov     large fs:0, ecx
0x9E4D3F: pop     ecx
0x9E4D40: add     esp, 0Ch
0x9E4D43: retn
