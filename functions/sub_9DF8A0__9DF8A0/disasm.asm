0x9DF8A0: push    0FFFFFFFFh
0x9DF8A2: push    offset SEH_9DF8A0
0x9DF8A7: mov     eax, large fs:0
0x9DF8AD: push    eax
0x9DF8AE: mov     eax, ___security_cookie
0x9DF8B3: xor     eax, esp
0x9DF8B5: push    eax
0x9DF8B6: lea     eax, [esp+10h+var_C]
0x9DF8BA: mov     large fs:0, eax
0x9DF8C0: push    offset bUseWaterHiRes
0x9DF8C5: mov     ecx, offset INISettingCollection
0x9DF8CA: mov     [esp+14h+var_4], 0
0x9DF8D2: call    SettingCollectionList_AddSetting
0x9DF8D7: push    offset sub_A1A270; void (__cdecl *)()
0x9DF8DC: call    _atexit
0x9DF8E1: add     esp, 4
0x9DF8E4: mov     ecx, [esp+10h+var_C]
0x9DF8E8: mov     large fs:0, ecx
0x9DF8EF: pop     ecx
0x9DF8F0: add     esp, 0Ch
0x9DF8F3: retn
