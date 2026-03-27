0x9E5650: push    0FFFFFFFFh
0x9E5652: push    offset SEH_9E5650
0x9E5657: mov     eax, large fs:0
0x9E565D: push    eax
0x9E565E: mov     eax, ___security_cookie
0x9E5663: xor     eax, esp
0x9E5665: push    eax
0x9E5666: lea     eax, [esp+10h+var_C]
0x9E566A: mov     large fs:0, eax
0x9E5670: push    offset off_B11B9C; "1.0, 1.0"
0x9E5675: mov     ecx, offset BlendSettingCollection
0x9E567A: mov     [esp+14h+var_4], 0
0x9E5682: call    SettingCollectionList_AddSetting
0x9E5687: push    offset sub_A1CF70; void (__cdecl *)()
0x9E568C: call    _atexit
0x9E5691: add     esp, 4
0x9E5694: mov     ecx, [esp+10h+var_C]
0x9E5698: mov     large fs:0, ecx
0x9E569F: pop     ecx
0x9E56A0: add     esp, 0Ch
0x9E56A3: retn
