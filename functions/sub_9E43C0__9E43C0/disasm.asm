0x9E43C0: push    0FFFFFFFFh
0x9E43C2: push    offset SEH_9E43C0
0x9E43C7: mov     eax, large fs:0
0x9E43CD: push    eax
0x9E43CE: mov     eax, ___security_cookie
0x9E43D3: xor     eax, esp
0x9E43D5: push    eax
0x9E43D6: lea     eax, [esp+10h+var_C]
0x9E43DA: mov     large fs:0, eax
0x9E43E0: push    offset dword_B11918
0x9E43E5: mov     ecx, offset INISettingCollection
0x9E43EA: mov     [esp+14h+var_4], 0
0x9E43F2: call    SettingCollectionList_AddSetting
0x9E43F7: push    offset sub_A1C640; void (__cdecl *)()
0x9E43FC: call    _atexit
0x9E4401: add     esp, 4
0x9E4404: mov     ecx, [esp+10h+var_C]
0x9E4408: mov     large fs:0, ecx
0x9E440F: pop     ecx
0x9E4410: add     esp, 0Ch
0x9E4413: retn
