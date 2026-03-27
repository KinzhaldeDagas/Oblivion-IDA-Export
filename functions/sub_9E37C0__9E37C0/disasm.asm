0x9E37C0: push    0FFFFFFFFh
0x9E37C2: push    offset SEH_9E37C0
0x9E37C7: mov     eax, large fs:0
0x9E37CD: push    eax
0x9E37CE: mov     eax, ___security_cookie
0x9E37D3: xor     eax, esp
0x9E37D5: push    eax
0x9E37D6: lea     eax, [esp+10h+var_C]
0x9E37DA: mov     large fs:0, eax
0x9E37E0: push    offset unk_B09B40
0x9E37E5: mov     ecx, offset INISettingCollection
0x9E37EA: mov     [esp+14h+var_4], 0
0x9E37F2: call    SettingCollectionList_AddSetting
0x9E37F7: push    offset sub_A1BF70; void (__cdecl *)()
0x9E37FC: call    _atexit
0x9E3801: add     esp, 4
0x9E3804: mov     ecx, [esp+10h+var_C]
0x9E3808: mov     large fs:0, ecx
0x9E380F: pop     ecx
0x9E3810: add     esp, 0Ch
0x9E3813: retn
