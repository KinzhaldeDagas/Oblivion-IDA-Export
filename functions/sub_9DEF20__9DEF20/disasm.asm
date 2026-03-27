0x9DEF20: push    0FFFFFFFFh
0x9DEF22: push    offset SEH_9DEF20
0x9DEF27: mov     eax, large fs:0
0x9DEF2D: push    eax
0x9DEF2E: mov     eax, ___security_cookie
0x9DEF33: xor     eax, esp
0x9DEF35: push    eax
0x9DEF36: lea     eax, [esp+10h+var_C]
0x9DEF3A: mov     large fs:0, eax
0x9DEF40: push    offset byte_B06F5C
0x9DEF45: mov     ecx, offset INISettingCollection
0x9DEF4A: mov     [esp+14h+var_4], 0
0x9DEF52: call    SettingCollectionList_AddSetting
0x9DEF57: push    offset sub_A19D40; void (__cdecl *)()
0x9DEF5C: call    _atexit
0x9DEF61: add     esp, 4
0x9DEF64: mov     ecx, [esp+10h+var_C]
0x9DEF68: mov     large fs:0, ecx
0x9DEF6F: pop     ecx
0x9DEF70: add     esp, 0Ch
0x9DEF73: retn
