0x9FFC40: push    0FFFFFFFFh
0x9FFC42: push    offset SEH_9FFC40
0x9FFC47: mov     eax, large fs:0
0x9FFC4D: push    eax
0x9FFC4E: mov     eax, ___security_cookie
0x9FFC53: xor     eax, esp
0x9FFC55: push    eax
0x9FFC56: lea     eax, [esp+10h+var_C]
0x9FFC5A: mov     large fs:0, eax
0x9FFC60: push    offset dword_B16304
0x9FFC65: mov     ecx, offset INISettingCollection
0x9FFC6A: mov     [esp+14h+var_4], 0
0x9FFC72: call    SettingCollectionList_AddSetting
0x9FFC77: push    offset sub_A26700; void (__cdecl *)()
0x9FFC7C: call    _atexit
0x9FFC81: add     esp, 4
0x9FFC84: mov     ecx, [esp+10h+var_C]
0x9FFC88: mov     large fs:0, ecx
0x9FFC8F: pop     ecx
0x9FFC90: add     esp, 0Ch
0x9FFC93: retn
