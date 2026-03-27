0x9DCA60: push    0FFFFFFFFh
0x9DCA62: push    offset SEH_9DCA60
0x9DCA67: mov     eax, large fs:0
0x9DCA6D: push    eax
0x9DCA6E: mov     eax, ___security_cookie
0x9DCA73: xor     eax, esp
0x9DCA75: push    eax
0x9DCA76: lea     eax, [esp+10h+var_C]
0x9DCA7A: mov     large fs:0, eax
0x9DCA80: push    offset bBlockMessageBoxes_MESSAGES
0x9DCA85: mov     ecx, offset INISettingCollection
0x9DCA8A: mov     [esp+14h+var_4], 0
0x9DCA92: call    SettingCollectionList_AddSetting
0x9DCA97: push    offset sub_A18AE0; void (__cdecl *)()
0x9DCA9C: call    _atexit
0x9DCAA1: add     esp, 4
0x9DCAA4: mov     ecx, [esp+10h+var_C]
0x9DCAA8: mov     large fs:0, ecx
0x9DCAAF: pop     ecx
0x9DCAB0: add     esp, 0Ch
0x9DCAB3: retn
