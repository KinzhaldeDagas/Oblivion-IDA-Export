0x9DFE60: push    0FFFFFFFFh
0x9DFE62: push    offset SEH_9DFE60
0x9DFE67: mov     eax, large fs:0
0x9DFE6D: push    eax
0x9DFE6E: mov     eax, ___security_cookie
0x9DFE73: xor     eax, esp
0x9DFE75: push    eax
0x9DFE76: lea     eax, [esp+10h+var_C]
0x9DFE7A: mov     large fs:0, eax
0x9DFE80: push    offset flt_B070D0
0x9DFE85: mov     ecx, offset INISettingCollection
0x9DFE8A: mov     [esp+14h+var_4], 0
0x9DFE92: call    SettingCollectionList_AddSetting
0x9DFE97: push    offset sub_A1A540; void (__cdecl *)()
0x9DFE9C: call    _atexit
0x9DFEA1: add     esp, 4
0x9DFEA4: mov     ecx, [esp+10h+var_C]
0x9DFEA8: mov     large fs:0, ecx
0x9DFEAF: pop     ecx
0x9DFEB0: add     esp, 0Ch
0x9DFEB3: retn
