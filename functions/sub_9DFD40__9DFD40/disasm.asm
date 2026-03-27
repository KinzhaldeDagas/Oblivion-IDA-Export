0x9DFD40: push    0FFFFFFFFh
0x9DFD42: push    offset SEH_9DFD40
0x9DFD47: mov     eax, large fs:0
0x9DFD4D: push    eax
0x9DFD4E: mov     eax, ___security_cookie
0x9DFD53: xor     eax, esp
0x9DFD55: push    eax
0x9DFD56: lea     eax, [esp+10h+var_C]
0x9DFD5A: mov     large fs:0, eax
0x9DFD60: push    offset dword_B070B8
0x9DFD65: mov     ecx, offset INISettingCollection
0x9DFD6A: mov     [esp+14h+var_4], 0
0x9DFD72: call    SettingCollectionList_AddSetting
0x9DFD77: push    offset sub_A1A4B0; void (__cdecl *)()
0x9DFD7C: call    _atexit
0x9DFD81: add     esp, 4
0x9DFD84: mov     ecx, [esp+10h+var_C]
0x9DFD88: mov     large fs:0, ecx
0x9DFD8F: pop     ecx
0x9DFD90: add     esp, 0Ch
0x9DFD93: retn
