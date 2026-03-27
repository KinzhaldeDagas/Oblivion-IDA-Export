0x9DDAE0: push    0FFFFFFFFh
0x9DDAE2: push    offset SEH_9DDAE0
0x9DDAE7: mov     eax, large fs:0
0x9DDAED: push    eax
0x9DDAEE: mov     eax, ___security_cookie
0x9DDAF3: xor     eax, esp
0x9DDAF5: push    eax
0x9DDAF6: lea     eax, [esp+10h+var_C]
0x9DDAFA: mov     large fs:0, eax
0x9DDB00: push    offset dword_B06DAC
0x9DDB05: mov     ecx, offset INISettingCollection
0x9DDB0A: mov     [esp+14h+var_4], 0
0x9DDB12: call    SettingCollectionList_AddSetting
0x9DDB17: push    offset sub_A19320; void (__cdecl *)()
0x9DDB1C: call    _atexit
0x9DDB21: add     esp, 4
0x9DDB24: mov     ecx, [esp+10h+var_C]
0x9DDB28: mov     large fs:0, ecx
0x9DDB2F: pop     ecx
0x9DDB30: add     esp, 0Ch
0x9DDB33: retn
