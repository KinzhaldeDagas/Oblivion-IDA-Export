0x9E3A20: push    0FFFFFFFFh
0x9E3A22: push    offset SEH_9E3A20
0x9E3A27: mov     eax, large fs:0
0x9E3A2D: push    eax
0x9E3A2E: mov     eax, ___security_cookie
0x9E3A33: xor     eax, esp
0x9E3A35: push    eax
0x9E3A36: lea     eax, [esp+10h+var_C]
0x9E3A3A: mov     large fs:0, eax
0x9E3A40: push    offset off_B09EF0
0x9E3A45: mov     ecx, offset INISettingCollection
0x9E3A4A: mov     [esp+14h+var_4], 0
0x9E3A52: call    SettingCollectionList_AddSetting
0x9E3A57: push    offset sub_A1C0D0; void (__cdecl *)()
0x9E3A5C: call    _atexit
0x9E3A61: add     esp, 4
0x9E3A64: mov     ecx, [esp+10h+var_C]
0x9E3A68: mov     large fs:0, ecx
0x9E3A6F: pop     ecx
0x9E3A70: add     esp, 0Ch
0x9E3A73: retn
