0x9FCD60: push    0FFFFFFFFh
0x9FCD62: push    offset SEH_9FCD60
0x9FCD67: mov     eax, large fs:0
0x9FCD6D: push    eax
0x9FCD6E: mov     eax, ___security_cookie
0x9FCD73: xor     eax, esp
0x9FCD75: push    eax
0x9FCD76: lea     eax, [esp+10h+var_C]
0x9FCD7A: mov     large fs:0, eax
0x9FCD80: push    offset dword_B14884
0x9FCD85: mov     ecx, offset INISettingCollection
0x9FCD8A: mov     [esp+14h+var_4], 0
0x9FCD92: call    SettingCollectionList_AddSetting
0x9FCD97: push    offset sub_A251D0; void (__cdecl *)()
0x9FCD9C: call    _atexit
0x9FCDA1: add     esp, 4
0x9FCDA4: mov     ecx, [esp+10h+var_C]
0x9FCDA8: mov     large fs:0, ecx
0x9FCDAF: pop     ecx
0x9FCDB0: add     esp, 0Ch
0x9FCDB3: retn
