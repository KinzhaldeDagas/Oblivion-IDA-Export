0x9FDD60: push    0FFFFFFFFh
0x9FDD62: push    offset SEH_9FDD60
0x9FDD67: mov     eax, large fs:0
0x9FDD6D: push    eax
0x9FDD6E: mov     eax, ___security_cookie
0x9FDD73: xor     eax, esp
0x9FDD75: push    eax
0x9FDD76: lea     eax, [esp+10h+var_C]
0x9FDD7A: mov     large fs:0, eax
0x9FDD80: push    offset fCameraCasterSize
0x9FDD85: mov     ecx, offset INISettingCollection
0x9FDD8A: mov     [esp+14h+var_4], 0
0x9FDD92: call    SettingCollectionList_AddSetting
0x9FDD97: push    offset sub_A259B0; void (__cdecl *)()
0x9FDD9C: call    _atexit
0x9FDDA1: add     esp, 4
0x9FDDA4: mov     ecx, [esp+10h+var_C]
0x9FDDA8: mov     large fs:0, ecx
0x9FDDAF: pop     ecx
0x9FDDB0: add     esp, 0Ch
0x9FDDB3: retn
