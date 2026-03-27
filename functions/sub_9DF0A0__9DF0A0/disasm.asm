0x9DF0A0: push    0FFFFFFFFh
0x9DF0A2: push    offset SEH_9DF0A0
0x9DF0A7: mov     eax, large fs:0
0x9DF0AD: push    eax
0x9DF0AE: mov     eax, ___security_cookie
0x9DF0B3: xor     eax, esp
0x9DF0B5: push    eax
0x9DF0B6: lea     eax, [esp+10h+var_C]
0x9DF0BA: mov     large fs:0, eax
0x9DF0C0: push    offset flt_B06F7C
0x9DF0C5: mov     ecx, offset INISettingCollection
0x9DF0CA: mov     [esp+14h+var_4], 0
0x9DF0D2: call    SettingCollectionList_AddSetting
0x9DF0D7: push    offset sub_A19E00; void (__cdecl *)()
0x9DF0DC: call    _atexit
0x9DF0E1: add     esp, 4
0x9DF0E4: mov     ecx, [esp+10h+var_C]
0x9DF0E8: mov     large fs:0, ecx
0x9DF0EF: pop     ecx
0x9DF0F0: add     esp, 0Ch
0x9DF0F3: retn
