0x9FC410: push    0FFFFFFFFh
0x9FC412: push    offset SEH_9FC410
0x9FC417: mov     eax, large fs:0
0x9FC41D: push    eax
0x9FC41E: mov     eax, ___security_cookie
0x9FC423: xor     eax, esp
0x9FC425: push    eax
0x9FC426: lea     eax, [esp+10h+var_C]
0x9FC42A: mov     large fs:0, eax
0x9FC430: push    offset dword_B14168
0x9FC435: mov     ecx, offset INISettingCollection
0x9FC43A: mov     [esp+14h+var_4], 0
0x9FC442: call    SettingCollectionList_AddSetting
0x9FC447: push    offset sub_A24CE0; void (__cdecl *)()
0x9FC44C: call    _atexit
0x9FC451: add     esp, 4
0x9FC454: mov     ecx, [esp+10h+var_C]
0x9FC458: mov     large fs:0, ecx
0x9FC45F: pop     ecx
0x9FC460: add     esp, 0Ch
0x9FC463: retn
