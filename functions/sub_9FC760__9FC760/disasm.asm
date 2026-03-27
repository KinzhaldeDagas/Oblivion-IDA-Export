0x9FC760: push    0FFFFFFFFh
0x9FC762: push    offset SEH_9FC760
0x9FC767: mov     eax, large fs:0
0x9FC76D: push    eax
0x9FC76E: mov     eax, ___security_cookie
0x9FC773: xor     eax, esp
0x9FC775: push    eax
0x9FC776: lea     eax, [esp+10h+var_C]
0x9FC77A: mov     large fs:0, eax
0x9FC780: push    offset aGIJ
0x9FC785: mov     ecx, offset INISettingCollection
0x9FC78A: mov     [esp+14h+var_4], 0
0x9FC792: call    SettingCollectionList_AddSetting
0x9FC797: push    offset sub_A24ED0; void (__cdecl *)()
0x9FC79C: call    _atexit
0x9FC7A1: add     esp, 4
0x9FC7A4: mov     ecx, [esp+10h+var_C]
0x9FC7A8: mov     large fs:0, ecx
0x9FC7AF: pop     ecx
0x9FC7B0: add     esp, 0Ch
0x9FC7B3: retn
