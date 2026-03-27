0x9D8B30: push    0FFFFFFFFh
0x9D8B32: push    offset SEH_9D8B30
0x9D8B37: mov     eax, large fs:0
0x9D8B3D: push    eax
0x9D8B3E: mov     eax, ___security_cookie
0x9D8B43: xor     eax, esp
0x9D8B45: push    eax
0x9D8B46: lea     eax, [esp+10h+var_C]
0x9D8B4A: mov     large fs:0, eax
0x9D8B50: push    offset dword_B02D48
0x9D8B55: mov     ecx, offset INISettingCollection
0x9D8B5A: mov     [esp+14h+var_4], 0
0x9D8B62: call    SettingCollectionList_AddSetting
0x9D8B67: push    offset sub_A16B50; void (__cdecl *)()
0x9D8B6C: call    _atexit
0x9D8B71: add     esp, 4
0x9D8B74: mov     ecx, [esp+10h+var_C]
0x9D8B78: mov     large fs:0, ecx
0x9D8B7F: pop     ecx
0x9D8B80: add     esp, 0Ch
0x9D8B83: retn
