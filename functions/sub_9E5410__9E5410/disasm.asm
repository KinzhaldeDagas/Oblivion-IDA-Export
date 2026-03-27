0x9E5410: push    0FFFFFFFFh
0x9E5412: push    offset SEH_9E5410
0x9E5417: mov     eax, large fs:0
0x9E541D: push    eax
0x9E541E: mov     eax, ___security_cookie
0x9E5423: xor     eax, esp
0x9E5425: push    eax
0x9E5426: lea     eax, [esp+10h+var_C]
0x9E542A: mov     large fs:0, eax
0x9E5430: push    offset off_B11B6C; "1.0, 1.0"
0x9E5435: mov     ecx, offset BlendSettingCollection
0x9E543A: mov     [esp+14h+var_4], 0
0x9E5442: call    SettingCollectionList_AddSetting
0x9E5447: push    offset sub_A1CE50; void (__cdecl *)()
0x9E544C: call    _atexit
0x9E5451: add     esp, 4
0x9E5454: mov     ecx, [esp+10h+var_C]
0x9E5458: mov     large fs:0, ecx
0x9E545F: pop     ecx
0x9E5460: add     esp, 0Ch
0x9E5463: retn
