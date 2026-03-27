0x9DCEE0: push    0FFFFFFFFh
0x9DCEE2: push    offset SEH_9DCEE0
0x9DCEE7: mov     eax, large fs:0
0x9DCEED: push    eax
0x9DCEEE: mov     eax, ___security_cookie
0x9DCEF3: xor     eax, esp
0x9DCEF5: push    eax
0x9DCEF6: lea     eax, [esp+10h+var_C]
0x9DCEFA: mov     large fs:0, eax
0x9DCF00: push    offset byte_B06CAC
0x9DCF05: mov     ecx, offset INISettingCollection
0x9DCF0A: mov     [esp+14h+var_4], 0
0x9DCF12: call    SettingCollectionList_AddSetting
0x9DCF17: push    offset sub_A18D20; void (__cdecl *)()
0x9DCF1C: call    _atexit
0x9DCF21: add     esp, 4
0x9DCF24: mov     ecx, [esp+10h+var_C]
0x9DCF28: mov     large fs:0, ecx
0x9DCF2F: pop     ecx
0x9DCF30: add     esp, 0Ch
0x9DCF33: retn
