0x9FF460: push    0FFFFFFFFh
0x9FF462: push    offset SEH_9FF460
0x9FF467: mov     eax, large fs:0
0x9FF46D: push    eax
0x9FF46E: mov     eax, ___security_cookie
0x9FF473: xor     eax, esp
0x9FF475: push    eax
0x9FF476: lea     eax, [esp+10h+var_C]
0x9FF47A: mov     large fs:0, eax
0x9FF480: push    offset dword_B1625C
0x9FF485: mov     ecx, offset INISettingCollection
0x9FF48A: mov     [esp+14h+var_4], 0
0x9FF492: call    SettingCollectionList_AddSetting
0x9FF497: push    offset sub_A26310; void (__cdecl *)()
0x9FF49C: call    _atexit
0x9FF4A1: add     esp, 4
0x9FF4A4: mov     ecx, [esp+10h+var_C]
0x9FF4A8: mov     large fs:0, ecx
0x9FF4AF: pop     ecx
0x9FF4B0: add     esp, 0Ch
0x9FF4B3: retn
