0x9DFB00: push    0FFFFFFFFh
0x9DFB02: push    offset SEH_9DFB00
0x9DFB07: mov     eax, large fs:0
0x9DFB0D: push    eax
0x9DFB0E: mov     eax, ___security_cookie
0x9DFB13: xor     eax, esp
0x9DFB15: push    eax
0x9DFB16: lea     eax, [esp+10h+var_C]
0x9DFB1A: mov     large fs:0, eax
0x9DFB20: push    offset dword_B07088
0x9DFB25: mov     ecx, offset INISettingCollection
0x9DFB2A: mov     [esp+14h+var_4], 0
0x9DFB32: call    SettingCollectionList_AddSetting
0x9DFB37: push    offset sub_A1A390; void (__cdecl *)()
0x9DFB3C: call    _atexit
0x9DFB41: add     esp, 4
0x9DFB44: mov     ecx, [esp+10h+var_C]
0x9DFB48: mov     large fs:0, ecx
0x9DFB4F: pop     ecx
0x9DFB50: add     esp, 0Ch
0x9DFB53: retn
