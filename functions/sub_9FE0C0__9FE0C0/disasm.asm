0x9FE0C0: push    0FFFFFFFFh
0x9FE0C2: push    offset SEH_9FE0C0
0x9FE0C7: mov     eax, large fs:0
0x9FE0CD: push    eax
0x9FE0CE: mov     eax, ___security_cookie
0x9FE0D3: xor     eax, esp
0x9FE0D5: push    eax
0x9FE0D6: lea     eax, [esp+10h+var_C]
0x9FE0DA: mov     large fs:0, eax
0x9FE0E0: push    offset flt_B14F08
0x9FE0E5: mov     ecx, offset INISettingCollection
0x9FE0EA: mov     [esp+14h+var_4], 0
0x9FE0F2: call    SettingCollectionList_AddSetting
0x9FE0F7: push    offset sub_A25B60; void (__cdecl *)()
0x9FE0FC: call    _atexit
0x9FE101: add     esp, 4
0x9FE104: mov     ecx, [esp+10h+var_C]
0x9FE108: mov     large fs:0, ecx
0x9FE10F: pop     ecx
0x9FE110: add     esp, 0Ch
0x9FE113: retn
