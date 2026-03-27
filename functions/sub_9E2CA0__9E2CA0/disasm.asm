0x9E2CA0: push    0FFFFFFFFh
0x9E2CA2: push    offset SEH_9E2CA0
0x9E2CA7: mov     eax, large fs:0
0x9E2CAD: push    eax
0x9E2CAE: mov     eax, ___security_cookie
0x9E2CB3: xor     eax, esp
0x9E2CB5: push    eax
0x9E2CB6: lea     eax, [esp+10h+var_C]
0x9E2CBA: mov     large fs:0, eax
0x9E2CC0: push    offset SettingTexturePctThreshold
0x9E2CC5: mov     ecx, offset INISettingCollection
0x9E2CCA: mov     [esp+14h+var_4], 0
0x9E2CD2: call    SettingCollectionList_AddSetting
0x9E2CD7: push    offset sub_A1B930; void (__cdecl *)()
0x9E2CDC: call    _atexit
0x9E2CE1: add     esp, 4
0x9E2CE4: mov     ecx, [esp+10h+var_C]
0x9E2CE8: mov     large fs:0, ecx
0x9E2CEF: pop     ecx
0x9E2CF0: add     esp, 0Ch
0x9E2CF3: retn
