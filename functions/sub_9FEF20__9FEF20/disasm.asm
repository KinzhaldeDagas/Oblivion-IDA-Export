0x9FEF20: push    0FFFFFFFFh
0x9FEF22: push    offset SEH_9FEF20
0x9FEF27: mov     eax, large fs:0
0x9FEF2D: push    eax
0x9FEF2E: mov     eax, ___security_cookie
0x9FEF33: xor     eax, esp
0x9FEF35: push    eax
0x9FEF36: lea     eax, [esp+10h+var_C]
0x9FEF3A: mov     large fs:0, eax
0x9FEF40: push    offset flt_B16190
0x9FEF45: mov     ecx, offset INISettingCollection
0x9FEF4A: mov     [esp+14h+var_4], 0
0x9FEF52: call    SettingCollectionList_AddSetting
0x9FEF57: push    offset sub_A26060; void (__cdecl *)()
0x9FEF5C: call    _atexit
0x9FEF61: add     esp, 4
0x9FEF64: mov     ecx, [esp+10h+var_C]
0x9FEF68: mov     large fs:0, ecx
0x9FEF6F: pop     ecx
0x9FEF70: add     esp, 0Ch
0x9FEF73: retn
