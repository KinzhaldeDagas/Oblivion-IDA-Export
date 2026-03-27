0x9FCA00: push    0FFFFFFFFh
0x9FCA02: push    offset SEH_9FCA00
0x9FCA07: mov     eax, large fs:0
0x9FCA0D: push    eax
0x9FCA0E: mov     eax, ___security_cookie
0x9FCA13: xor     eax, esp
0x9FCA15: push    eax
0x9FCA16: lea     eax, [esp+10h+var_C]
0x9FCA1A: mov     large fs:0, eax
0x9FCA20: push    offset flt_B1483C
0x9FCA25: mov     ecx, offset INISettingCollection
0x9FCA2A: mov     [esp+14h+var_4], 0
0x9FCA32: call    SettingCollectionList_AddSetting
0x9FCA37: push    offset sub_A25020; void (__cdecl *)()
0x9FCA3C: call    _atexit
0x9FCA41: add     esp, 4
0x9FCA44: mov     ecx, [esp+10h+var_C]
0x9FCA48: mov     large fs:0, ecx
0x9FCA4F: pop     ecx
0x9FCA50: add     esp, 0Ch
0x9FCA53: retn
