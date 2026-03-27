0x9DDB40: push    0FFFFFFFFh
0x9DDB42: push    offset SEH_9DDB40
0x9DDB47: mov     eax, large fs:0
0x9DDB4D: push    eax
0x9DDB4E: mov     eax, ___security_cookie
0x9DDB53: xor     eax, esp
0x9DDB55: push    eax
0x9DDB56: lea     eax, [esp+10h+var_C]
0x9DDB5A: mov     large fs:0, eax
0x9DDB60: push    offset byte_B06DB4
0x9DDB65: mov     ecx, offset INISettingCollection
0x9DDB6A: mov     [esp+14h+var_4], 0
0x9DDB72: call    SettingCollectionList_AddSetting
0x9DDB77: push    offset sub_A19350; void (__cdecl *)()
0x9DDB7C: call    _atexit
0x9DDB81: add     esp, 4
0x9DDB84: mov     ecx, [esp+10h+var_C]
0x9DDB88: mov     large fs:0, ecx
0x9DDB8F: pop     ecx
0x9DDB90: add     esp, 0Ch
0x9DDB93: retn
