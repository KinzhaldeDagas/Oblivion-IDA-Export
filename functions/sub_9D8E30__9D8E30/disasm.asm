0x9D8E30: push    0FFFFFFFFh
0x9D8E32: push    offset SEH_9D8E30
0x9D8E37: mov     eax, large fs:0
0x9D8E3D: push    eax
0x9D8E3E: mov     eax, ___security_cookie
0x9D8E43: xor     eax, esp
0x9D8E45: push    eax
0x9D8E46: lea     eax, [esp+10h+var_C]
0x9D8E4A: mov     large fs:0, eax
0x9D8E50: push    offset unk_B02D88
0x9D8E55: mov     ecx, offset INISettingCollection
0x9D8E5A: mov     [esp+14h+var_4], 0
0x9D8E62: call    SettingCollectionList_AddSetting
0x9D8E67: push    offset sub_A16CD0; void (__cdecl *)()
0x9D8E6C: call    _atexit
0x9D8E71: add     esp, 4
0x9D8E74: mov     ecx, [esp+10h+var_C]
0x9D8E78: mov     large fs:0, ecx
0x9D8E7F: pop     ecx
0x9D8E80: add     esp, 0Ch
0x9D8E83: retn
