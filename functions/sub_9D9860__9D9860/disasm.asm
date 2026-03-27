0x9D9860: push    0FFFFFFFFh
0x9D9862: push    offset SEH_9D9860
0x9D9867: mov     eax, large fs:0
0x9D986D: push    eax
0x9D986E: mov     eax, ___security_cookie
0x9D9873: xor     eax, esp
0x9D9875: push    eax
0x9D9876: lea     eax, [esp+10h+var_C]
0x9D987A: mov     large fs:0, eax
0x9D9880: push    offset dword_B030C4
0x9D9885: mov     ecx, offset INISettingCollection
0x9D988A: mov     [esp+14h+var_4], 0
0x9D9892: call    SettingCollectionList_AddSetting
0x9D9897: push    offset sub_A171E0; void (__cdecl *)()
0x9D989C: call    _atexit
0x9D98A1: add     esp, 4
0x9D98A4: mov     ecx, [esp+10h+var_C]
0x9D98A8: mov     large fs:0, ecx
0x9D98AF: pop     ecx
0x9D98B0: add     esp, 0Ch
0x9D98B3: retn
