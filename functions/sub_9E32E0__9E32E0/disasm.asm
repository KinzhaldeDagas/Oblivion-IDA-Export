0x9E32E0: push    0FFFFFFFFh
0x9E32E2: push    offset SEH_9E32E0
0x9E32E7: mov     eax, large fs:0
0x9E32ED: push    eax
0x9E32EE: mov     eax, ___security_cookie
0x9E32F3: xor     eax, esp
0x9E32F5: push    eax
0x9E32F6: lea     eax, [esp+10h+var_C]
0x9E32FA: mov     large fs:0, eax
0x9E3300: push    offset preventHavokAddAll
0x9E3305: mov     ecx, offset INISettingCollection
0x9E330A: mov     [esp+14h+var_4], 0
0x9E3312: call    SettingCollectionList_AddSetting
0x9E3317: push    offset sub_A1BC60; void (__cdecl *)()
0x9E331C: call    _atexit
0x9E3321: add     esp, 4
0x9E3324: mov     ecx, [esp+10h+var_C]
0x9E3328: mov     large fs:0, ecx
0x9E332F: pop     ecx
0x9E3330: add     esp, 0Ch
0x9E3333: retn
