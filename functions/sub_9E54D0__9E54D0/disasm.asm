0x9E54D0: push    0FFFFFFFFh
0x9E54D2: push    offset SEH_9E54D0
0x9E54D7: mov     eax, large fs:0
0x9E54DD: push    eax
0x9E54DE: mov     eax, ___security_cookie
0x9E54E3: xor     eax, esp
0x9E54E5: push    eax
0x9E54E6: lea     eax, [esp+10h+var_C]
0x9E54EA: mov     large fs:0, eax
0x9E54F0: push    offset off_B11B7C; "1.0, 1.0"
0x9E54F5: mov     ecx, offset BlendSettingCollection
0x9E54FA: mov     [esp+14h+var_4], 0
0x9E5502: call    SettingCollectionList_AddSetting
0x9E5507: push    offset sub_A1CEB0; void (__cdecl *)()
0x9E550C: call    _atexit
0x9E5511: add     esp, 4
0x9E5514: mov     ecx, [esp+10h+var_C]
0x9E5518: mov     large fs:0, ecx
0x9E551F: pop     ecx
0x9E5520: add     esp, 0Ch
0x9E5523: retn
