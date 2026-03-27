0x9DEB60: push    0FFFFFFFFh
0x9DEB62: push    offset SEH_9DEB60
0x9DEB67: mov     eax, large fs:0
0x9DEB6D: push    eax
0x9DEB6E: mov     eax, ___security_cookie
0x9DEB73: xor     eax, esp
0x9DEB75: push    eax
0x9DEB76: lea     eax, [esp+10h+var_C]
0x9DEB7A: mov     large fs:0, eax
0x9DEB80: push    offset byte_B06F0C
0x9DEB85: mov     ecx, offset INISettingCollection
0x9DEB8A: mov     [esp+14h+var_4], 0
0x9DEB92: call    SettingCollectionList_AddSetting
0x9DEB97: push    offset sub_A19B60; void (__cdecl *)()
0x9DEB9C: call    _atexit
0x9DEBA1: add     esp, 4
0x9DEBA4: mov     ecx, [esp+10h+var_C]
0x9DEBA8: mov     large fs:0, ecx
0x9DEBAF: pop     ecx
0x9DEBB0: add     esp, 0Ch
0x9DEBB3: retn
