0x9FDF40: push    0FFFFFFFFh
0x9FDF42: push    offset SEH_9FDF40
0x9FDF47: mov     eax, large fs:0
0x9FDF4D: push    eax
0x9FDF4E: mov     eax, ___security_cookie
0x9FDF53: xor     eax, esp
0x9FDF55: push    eax
0x9FDF56: lea     eax, [esp+10h+var_C]
0x9FDF5A: mov     large fs:0, eax
0x9FDF60: push    offset flt_B14EE8
0x9FDF65: mov     ecx, offset INISettingCollection
0x9FDF6A: mov     [esp+14h+var_4], 0
0x9FDF72: call    SettingCollectionList_AddSetting
0x9FDF77: push    offset sub_A25AA0; void (__cdecl *)()
0x9FDF7C: call    _atexit
0x9FDF81: add     esp, 4
0x9FDF84: mov     ecx, [esp+10h+var_C]
0x9FDF88: mov     large fs:0, ecx
0x9FDF8F: pop     ecx
0x9FDF90: add     esp, 0Ch
0x9FDF93: retn
