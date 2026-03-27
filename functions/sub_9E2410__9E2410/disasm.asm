0x9E2410: push    0FFFFFFFFh
0x9E2412: push    offset SEH_9E2410
0x9E2417: mov     eax, large fs:0
0x9E241D: push    eax
0x9E241E: mov     eax, ___security_cookie
0x9E2423: xor     eax, esp
0x9E2425: push    eax
0x9E2426: lea     eax, [esp+10h+var_C]
0x9E242A: mov     large fs:0, eax
0x9E2430: push    offset dword_B08160
0x9E2435: mov     ecx, offset INISettingCollection
0x9E243A: mov     [esp+14h+var_4], 0
0x9E2442: call    SettingCollectionList_AddSetting
0x9E2447: push    offset sub_A1B4B0; void (__cdecl *)()
0x9E244C: call    _atexit
0x9E2451: add     esp, 4
0x9E2454: mov     ecx, [esp+10h+var_C]
0x9E2458: mov     large fs:0, ecx
0x9E245F: pop     ecx
0x9E2460: add     esp, 0Ch
0x9E2463: retn
