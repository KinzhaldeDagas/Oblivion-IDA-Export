0x9E4C30: push    0FFFFFFFFh
0x9E4C32: push    offset SEH_9E4C30
0x9E4C37: mov     eax, large fs:0
0x9E4C3D: push    eax
0x9E4C3E: mov     eax, ___security_cookie
0x9E4C43: xor     eax, esp
0x9E4C45: push    eax
0x9E4C46: lea     eax, [esp+10h+var_C]
0x9E4C4A: mov     large fs:0, eax
0x9E4C50: push    offset off_B11AC4; "Bip01 Head"
0x9E4C55: mov     ecx, offset BlendSettingCollection
0x9E4C5A: mov     [esp+14h+var_4], 0
0x9E4C62: call    SettingCollectionList_AddSetting
0x9E4C67: push    offset sub_A1CA60; void (__cdecl *)()
0x9E4C6C: call    _atexit
0x9E4C71: add     esp, 4
0x9E4C74: mov     ecx, [esp+10h+var_C]
0x9E4C78: mov     large fs:0, ecx
0x9E4C7F: pop     ecx
0x9E4C80: add     esp, 0Ch
0x9E4C83: retn
