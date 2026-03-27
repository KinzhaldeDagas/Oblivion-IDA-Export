0x9FF0A0: push    0FFFFFFFFh
0x9FF0A2: push    offset SEH_9FF0A0
0x9FF0A7: mov     eax, large fs:0
0x9FF0AD: push    eax
0x9FF0AE: mov     eax, ___security_cookie
0x9FF0B3: xor     eax, esp
0x9FF0B5: push    eax
0x9FF0B6: lea     eax, [esp+10h+var_C]
0x9FF0BA: mov     large fs:0, eax
0x9FF0C0: push    offset flt_B161B0
0x9FF0C5: mov     ecx, offset INISettingCollection
0x9FF0CA: mov     [esp+14h+var_4], 0
0x9FF0D2: call    SettingCollectionList_AddSetting
0x9FF0D7: push    offset sub_A26120; void (__cdecl *)()
0x9FF0DC: call    _atexit
0x9FF0E1: add     esp, 4
0x9FF0E4: mov     ecx, [esp+10h+var_C]
0x9FF0E8: mov     large fs:0, ecx
0x9FF0EF: pop     ecx
0x9FF0F0: add     esp, 0Ch
0x9FF0F3: retn
