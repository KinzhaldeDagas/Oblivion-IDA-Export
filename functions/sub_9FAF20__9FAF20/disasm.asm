0x9FAF20: push    0FFFFFFFFh
0x9FAF22: push    offset SEH_9FAF20
0x9FAF27: mov     eax, large fs:0
0x9FAF2D: push    eax
0x9FAF2E: mov     eax, ___security_cookie
0x9FAF33: xor     eax, esp
0x9FAF35: push    eax
0x9FAF36: lea     eax, [esp+10h+var_C]
0x9FAF3A: mov     large fs:0, eax
0x9FAF40: push    offset byte_B13200
0x9FAF45: mov     ecx, offset INISettingCollection
0x9FAF4A: mov     [esp+14h+var_4], 0
0x9FAF52: call    SettingCollectionList_AddSetting
0x9FAF57: push    offset sub_A243D0; void (__cdecl *)()
0x9FAF5C: call    _atexit
0x9FAF61: add     esp, 4
0x9FAF64: mov     ecx, [esp+10h+var_C]
0x9FAF68: mov     large fs:0, ecx
0x9FAF6F: pop     ecx
0x9FAF70: add     esp, 0Ch
0x9FAF73: retn
