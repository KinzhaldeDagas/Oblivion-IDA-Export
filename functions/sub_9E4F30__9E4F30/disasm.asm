0x9E4F30: push    0FFFFFFFFh
0x9E4F32: push    offset SEH_9E4F30
0x9E4F37: mov     eax, large fs:0
0x9E4F3D: push    eax
0x9E4F3E: mov     eax, ___security_cookie
0x9E4F43: xor     eax, esp
0x9E4F45: push    eax
0x9E4F46: lea     eax, [esp+10h+var_C]
0x9E4F4A: mov     large fs:0, eax
0x9E4F50: push    offset off_B11B04; "1.0, 1.0"
0x9E4F55: mov     ecx, offset BlendSettingCollection
0x9E4F5A: mov     [esp+14h+var_4], 0
0x9E4F62: call    SettingCollectionList_AddSetting
0x9E4F67: push    offset sub_A1CBE0; void (__cdecl *)()
0x9E4F6C: call    _atexit
0x9E4F71: add     esp, 4
0x9E4F74: mov     ecx, [esp+10h+var_C]
0x9E4F78: mov     large fs:0, ecx
0x9E4F7F: pop     ecx
0x9E4F80: add     esp, 0Ch
0x9E4F83: retn
