0x9FCD00: push    0FFFFFFFFh
0x9FCD02: push    offset SEH_9FCD00
0x9FCD07: mov     eax, large fs:0
0x9FCD0D: push    eax
0x9FCD0E: mov     eax, ___security_cookie
0x9FCD13: xor     eax, esp
0x9FCD15: push    eax
0x9FCD16: lea     eax, [esp+10h+var_C]
0x9FCD1A: mov     large fs:0, eax
0x9FCD20: push    offset dword_B1487C
0x9FCD25: mov     ecx, offset INISettingCollection
0x9FCD2A: mov     [esp+14h+var_4], 0
0x9FCD32: call    SettingCollectionList_AddSetting
0x9FCD37: push    offset sub_A251A0; void (__cdecl *)()
0x9FCD3C: call    _atexit
0x9FCD41: add     esp, 4
0x9FCD44: mov     ecx, [esp+10h+var_C]
0x9FCD48: mov     large fs:0, ecx
0x9FCD4F: pop     ecx
0x9FCD50: add     esp, 0Ch
0x9FCD53: retn
