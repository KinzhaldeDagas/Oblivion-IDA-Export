0x9FFCF0: push    0FFFFFFFFh
0x9FFCF2: push    offset SEH_9FFCF0
0x9FFCF7: mov     eax, large fs:0
0x9FFCFD: push    eax
0x9FFCFE: mov     eax, ___security_cookie
0x9FFD03: xor     eax, esp
0x9FFD05: push    eax
0x9FFD06: lea     eax, [esp+10h+var_C]
0x9FFD0A: mov     large fs:0, eax
0x9FFD10: push    offset flt_B23C50
0x9FFD15: mov     ecx, offset INISettingCollection
0x9FFD1A: mov     [esp+14h+var_4], 0
0x9FFD22: call    SettingCollectionList_AddSetting
0x9FFD27: push    offset sub_A26740; void (__cdecl *)()
0x9FFD2C: call    _atexit
0x9FFD31: add     esp, 4
0x9FFD34: mov     ecx, [esp+10h+var_C]
0x9FFD38: mov     large fs:0, ecx
0x9FFD3F: pop     ecx
0x9FFD40: add     esp, 0Ch
0x9FFD43: retn
