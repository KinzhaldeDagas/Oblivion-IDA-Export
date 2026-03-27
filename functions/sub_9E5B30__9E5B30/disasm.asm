0x9E5B30: push    0FFFFFFFFh
0x9E5B32: push    offset SEH_9E5B30
0x9E5B37: mov     eax, large fs:0
0x9E5B3D: push    eax
0x9E5B3E: mov     eax, ___security_cookie
0x9E5B43: xor     eax, esp
0x9E5B45: push    eax
0x9E5B46: lea     eax, [esp+10h+var_C]
0x9E5B4A: mov     large fs:0, eax
0x9E5B50: push    offset flt_B11C04
0x9E5B55: mov     ecx, offset BlendSettingCollection
0x9E5B5A: mov     [esp+14h+var_4], 0
0x9E5B62: call    SettingCollectionList_AddSetting
0x9E5B67: push    offset sub_A1D1E0; void (__cdecl *)()
0x9E5B6C: call    _atexit
0x9E5B71: add     esp, 4
0x9E5B74: mov     ecx, [esp+10h+var_C]
0x9E5B78: mov     large fs:0, ecx
0x9E5B7F: pop     ecx
0x9E5B80: add     esp, 0Ch
0x9E5B83: retn
