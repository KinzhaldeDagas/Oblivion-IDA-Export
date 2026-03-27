0x9E5350: push    0FFFFFFFFh
0x9E5352: push    offset SEH_9E5350
0x9E5357: mov     eax, large fs:0
0x9E535D: push    eax
0x9E535E: mov     eax, ___security_cookie
0x9E5363: xor     eax, esp
0x9E5365: push    eax
0x9E5366: lea     eax, [esp+10h+var_C]
0x9E536A: mov     large fs:0, eax
0x9E5370: push    offset off_B11B5C; "1.0, 1.0"
0x9E5375: mov     ecx, offset BlendSettingCollection
0x9E537A: mov     [esp+14h+var_4], 0
0x9E5382: call    SettingCollectionList_AddSetting
0x9E5387: push    offset sub_A1CDF0; void (__cdecl *)()
0x9E538C: call    _atexit
0x9E5391: add     esp, 4
0x9E5394: mov     ecx, [esp+10h+var_C]
0x9E5398: mov     large fs:0, ecx
0x9E539F: pop     ecx
0x9E53A0: add     esp, 0Ch
0x9E53A3: retn
