0x9FB520: push    0FFFFFFFFh
0x9FB522: push    offset SEH_9FB520
0x9FB527: mov     eax, large fs:0
0x9FB52D: push    eax
0x9FB52E: mov     eax, ___security_cookie
0x9FB533: xor     eax, esp
0x9FB535: push    eax
0x9FB536: lea     eax, [esp+10h+var_C]
0x9FB53A: mov     large fs:0, eax
0x9FB540: push    offset unk_B135C0
0x9FB545: mov     ecx, offset INISettingCollection
0x9FB54A: mov     [esp+14h+var_4], 0
0x9FB552: call    SettingCollectionList_AddSetting
0x9FB557: push    offset sub_A246D0; void (__cdecl *)()
0x9FB55C: call    _atexit
0x9FB561: add     esp, 4
0x9FB564: mov     ecx, [esp+10h+var_C]
0x9FB568: mov     large fs:0, ecx
0x9FB56F: pop     ecx
0x9FB570: add     esp, 0Ch
0x9FB573: retn
