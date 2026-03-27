0x9DDE40: push    0FFFFFFFFh
0x9DDE42: push    offset SEH_9DDE40
0x9DDE47: mov     eax, large fs:0
0x9DDE4D: push    eax
0x9DDE4E: mov     eax, ___security_cookie
0x9DDE53: xor     eax, esp
0x9DDE55: push    eax
0x9DDE56: lea     eax, [esp+10h+var_C]
0x9DDE5A: mov     large fs:0, eax
0x9DDE60: push    offset dword_B06DF4
0x9DDE65: mov     ecx, offset INISettingCollection
0x9DDE6A: mov     [esp+14h+var_4], 0
0x9DDE72: call    SettingCollectionList_AddSetting
0x9DDE77: push    offset sub_A194D0; void (__cdecl *)()
0x9DDE7C: call    _atexit
0x9DDE81: add     esp, 4
0x9DDE84: mov     ecx, [esp+10h+var_C]
0x9DDE88: mov     large fs:0, ecx
0x9DDE8F: pop     ecx
0x9DDE90: add     esp, 0Ch
0x9DDE93: retn
