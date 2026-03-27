0x9FF4C0: push    0FFFFFFFFh
0x9FF4C2: push    offset SEH_9FF4C0
0x9FF4C7: mov     eax, large fs:0
0x9FF4CD: push    eax
0x9FF4CE: mov     eax, ___security_cookie
0x9FF4D3: xor     eax, esp
0x9FF4D5: push    eax
0x9FF4D6: lea     eax, [esp+10h+var_C]
0x9FF4DA: mov     large fs:0, eax
0x9FF4E0: push    offset dword_B16264
0x9FF4E5: mov     ecx, offset INISettingCollection
0x9FF4EA: mov     [esp+14h+var_4], 0
0x9FF4F2: call    SettingCollectionList_AddSetting
0x9FF4F7: push    offset sub_A26340; void (__cdecl *)()
0x9FF4FC: call    _atexit
0x9FF501: add     esp, 4
0x9FF504: mov     ecx, [esp+10h+var_C]
0x9FF508: mov     large fs:0, ecx
0x9FF50F: pop     ecx
0x9FF510: add     esp, 0Ch
0x9FF513: retn
