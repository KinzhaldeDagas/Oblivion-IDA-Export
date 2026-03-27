0x9D8350: push    0FFFFFFFFh
0x9D8352: push    offset SEH_9D8350
0x9D8357: mov     eax, large fs:0
0x9D835D: push    eax
0x9D835E: mov     eax, ___security_cookie
0x9D8363: xor     eax, esp
0x9D8365: push    eax
0x9D8366: lea     eax, [esp+10h+var_C]
0x9D836A: mov     large fs:0, eax
0x9D8370: push    offset off_B02CA0
0x9D8375: mov     ecx, offset INISettingCollection
0x9D837A: mov     [esp+14h+var_4], 0
0x9D8382: call    SettingCollectionList_AddSetting
0x9D8387: push    offset sub_A16760; void (__cdecl *)()
0x9D838C: call    _atexit
0x9D8391: add     esp, 4
0x9D8394: mov     ecx, [esp+10h+var_C]
0x9D8398: mov     large fs:0, ecx
0x9D839F: pop     ecx
0x9D83A0: add     esp, 0Ch
0x9D83A3: retn
