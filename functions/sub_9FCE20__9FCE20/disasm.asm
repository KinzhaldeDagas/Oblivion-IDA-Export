0x9FCE20: push    0FFFFFFFFh
0x9FCE22: push    offset SEH_9FCE20
0x9FCE27: mov     eax, large fs:0
0x9FCE2D: push    eax
0x9FCE2E: mov     eax, ___security_cookie
0x9FCE33: xor     eax, esp
0x9FCE35: push    eax
0x9FCE36: lea     eax, [esp+10h+var_C]
0x9FCE3A: mov     large fs:0, eax
0x9FCE40: push    offset flt_B14894
0x9FCE45: mov     ecx, offset INISettingCollection
0x9FCE4A: mov     [esp+14h+var_4], 0
0x9FCE52: call    SettingCollectionList_AddSetting
0x9FCE57: push    offset sub_A25230; void (__cdecl *)()
0x9FCE5C: call    _atexit
0x9FCE61: add     esp, 4
0x9FCE64: mov     ecx, [esp+10h+var_C]
0x9FCE68: mov     large fs:0, ecx
0x9FCE6F: pop     ecx
0x9FCE70: add     esp, 0Ch
0x9FCE73: retn
