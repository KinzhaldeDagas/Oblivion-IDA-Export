0x9DEB00: push    0FFFFFFFFh
0x9DEB02: push    offset SEH_9DEB00
0x9DEB07: mov     eax, large fs:0
0x9DEB0D: push    eax
0x9DEB0E: mov     eax, ___security_cookie
0x9DEB13: xor     eax, esp
0x9DEB15: push    eax
0x9DEB16: lea     eax, [esp+10h+var_C]
0x9DEB1A: mov     large fs:0, eax
0x9DEB20: push    offset dword_B06F04
0x9DEB25: mov     ecx, offset INISettingCollection
0x9DEB2A: mov     [esp+14h+var_4], 0
0x9DEB32: call    SettingCollectionList_AddSetting
0x9DEB37: push    offset sub_A19B30; void (__cdecl *)()
0x9DEB3C: call    _atexit
0x9DEB41: add     esp, 4
0x9DEB44: mov     ecx, [esp+10h+var_C]
0x9DEB48: mov     large fs:0, ecx
0x9DEB4F: pop     ecx
0x9DEB50: add     esp, 0Ch
0x9DEB53: retn
