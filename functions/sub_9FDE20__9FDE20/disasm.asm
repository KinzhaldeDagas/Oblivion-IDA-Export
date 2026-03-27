0x9FDE20: push    0FFFFFFFFh
0x9FDE22: push    offset SEH_9FDE20
0x9FDE27: mov     eax, large fs:0
0x9FDE2D: push    eax
0x9FDE2E: mov     eax, ___security_cookie
0x9FDE33: xor     eax, esp
0x9FDE35: push    eax
0x9FDE36: lea     eax, [esp+10h+var_C]
0x9FDE3A: mov     large fs:0, eax
0x9FDE40: push    offset dword_B14ED0
0x9FDE45: mov     ecx, offset INISettingCollection
0x9FDE4A: mov     [esp+14h+var_4], 0
0x9FDE52: call    SettingCollectionList_AddSetting
0x9FDE57: push    offset sub_A25A10; void (__cdecl *)()
0x9FDE5C: call    _atexit
0x9FDE61: add     esp, 4
0x9FDE64: mov     ecx, [esp+10h+var_C]
0x9FDE68: mov     large fs:0, ecx
0x9FDE6F: pop     ecx
0x9FDE70: add     esp, 0Ch
0x9FDE73: retn
