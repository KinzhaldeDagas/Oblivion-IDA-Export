0x9DEBC0: push    0FFFFFFFFh
0x9DEBC2: push    offset SEH_9DEBC0
0x9DEBC7: mov     eax, large fs:0
0x9DEBCD: push    eax
0x9DEBCE: mov     eax, ___security_cookie
0x9DEBD3: xor     eax, esp
0x9DEBD5: push    eax
0x9DEBD6: lea     eax, [esp+10h+var_C]
0x9DEBDA: mov     large fs:0, eax
0x9DEBE0: push    offset byte_B06F14
0x9DEBE5: mov     ecx, offset INISettingCollection
0x9DEBEA: mov     [esp+14h+var_4], 0
0x9DEBF2: call    SettingCollectionList_AddSetting
0x9DEBF7: push    offset sub_A19B90; void (__cdecl *)()
0x9DEBFC: call    _atexit
0x9DEC01: add     esp, 4
0x9DEC04: mov     ecx, [esp+10h+var_C]
0x9DEC08: mov     large fs:0, ecx
0x9DEC0F: pop     ecx
0x9DEC10: add     esp, 0Ch
0x9DEC13: retn
