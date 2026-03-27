0x9F8950: push    0FFFFFFFFh
0x9F8952: push    offset SEH_9F8950
0x9F8957: mov     eax, large fs:0
0x9F895D: push    eax
0x9F895E: mov     eax, ___security_cookie
0x9F8963: xor     eax, esp
0x9F8965: push    eax
0x9F8966: lea     eax, [esp+10h+var_C]
0x9F896A: mov     large fs:0, eax
0x9F8970: push    offset useFaceGenHeads
0x9F8975: mov     ecx, offset INISettingCollection
0x9F897A: mov     [esp+14h+var_4], 0
0x9F8982: call    SettingCollectionList_AddSetting
0x9F8987: push    offset sub_A23310; void (__cdecl *)()
0x9F898C: call    _atexit
0x9F8991: add     esp, 4
0x9F8994: mov     ecx, [esp+10h+var_C]
0x9F8998: mov     large fs:0, ecx
0x9F899F: pop     ecx
0x9F89A0: add     esp, 0Ch
0x9F89A3: retn
