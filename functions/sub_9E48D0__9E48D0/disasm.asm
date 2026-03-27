0x9E48D0: push    0FFFFFFFFh
0x9E48D2: push    offset SEH_9E48D0
0x9E48D7: mov     eax, large fs:0
0x9E48DD: push    eax
0x9E48DE: mov     eax, ___security_cookie
0x9E48E3: xor     eax, esp
0x9E48E5: push    eax
0x9E48E6: lea     eax, [esp+10h+var_C]
0x9E48EA: mov     large fs:0, eax
0x9E48F0: push    offset off_B11A7C; "1.0, 1.0"
0x9E48F5: mov     ecx, offset BlendSettingCollection
0x9E48FA: mov     [esp+14h+var_4], 0
0x9E4902: call    SettingCollectionList_AddSetting
0x9E4907: push    offset sub_A1C8B0; void (__cdecl *)()
0x9E490C: call    _atexit
0x9E4911: add     esp, 4
0x9E4914: mov     ecx, [esp+10h+var_C]
0x9E4918: mov     large fs:0, ecx
0x9E491F: pop     ecx
0x9E4920: add     esp, 0Ch
0x9E4923: retn
