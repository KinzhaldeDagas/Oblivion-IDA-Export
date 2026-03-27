0x9D8410: push    0FFFFFFFFh
0x9D8412: push    offset SEH_9D8410
0x9D8417: mov     eax, large fs:0
0x9D841D: push    eax
0x9D841E: mov     eax, ___security_cookie
0x9D8423: xor     eax, esp
0x9D8425: push    eax
0x9D8426: lea     eax, [esp+10h+var_C]
0x9D842A: mov     large fs:0, eax
0x9D8430: push    offset off_B02CB0
0x9D8435: mov     ecx, offset INISettingCollection
0x9D843A: mov     [esp+14h+var_4], 0
0x9D8442: call    SettingCollectionList_AddSetting
0x9D8447: push    offset sub_A167C0; void (__cdecl *)()
0x9D844C: call    _atexit
0x9D8451: add     esp, 4
0x9D8454: mov     ecx, [esp+10h+var_C]
0x9D8458: mov     large fs:0, ecx
0x9D845F: pop     ecx
0x9D8460: add     esp, 0Ch
0x9D8463: retn
