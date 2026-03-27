0x9DCBE0: push    0FFFFFFFFh
0x9DCBE2: push    offset SEH_9DCBE0
0x9DCBE7: mov     eax, large fs:0
0x9DCBED: push    eax
0x9DCBEE: mov     eax, ___security_cookie
0x9DCBF3: xor     eax, esp
0x9DCBF5: push    eax
0x9DCBF6: lea     eax, [esp+10h+var_C]
0x9DCBFA: mov     large fs:0, eax
0x9DCC00: push    offset unk_B06C6C
0x9DCC05: mov     ecx, offset INISettingCollection
0x9DCC0A: mov     [esp+14h+var_4], 0
0x9DCC12: call    SettingCollectionList_AddSetting
0x9DCC17: push    offset sub_A18BA0; void (__cdecl *)()
0x9DCC1C: call    _atexit
0x9DCC21: add     esp, 4
0x9DCC24: mov     ecx, [esp+10h+var_C]
0x9DCC28: mov     large fs:0, ecx
0x9DCC2F: pop     ecx
0x9DCC30: add     esp, 0Ch
0x9DCC33: retn
