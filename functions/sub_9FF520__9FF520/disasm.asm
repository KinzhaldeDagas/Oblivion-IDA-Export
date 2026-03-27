0x9FF520: push    0FFFFFFFFh
0x9FF522: push    offset SEH_9FF520
0x9FF527: mov     eax, large fs:0
0x9FF52D: push    eax
0x9FF52E: mov     eax, ___security_cookie
0x9FF533: xor     eax, esp
0x9FF535: push    eax
0x9FF536: lea     eax, [esp+10h+var_C]
0x9FF53A: mov     large fs:0, eax
0x9FF540: push    offset dword_B1626C
0x9FF545: mov     ecx, offset INISettingCollection
0x9FF54A: mov     [esp+14h+var_4], 0
0x9FF552: call    SettingCollectionList_AddSetting
0x9FF557: push    offset sub_A26370; void (__cdecl *)()
0x9FF55C: call    _atexit
0x9FF561: add     esp, 4
0x9FF564: mov     ecx, [esp+10h+var_C]
0x9FF568: mov     large fs:0, ecx
0x9FF56F: pop     ecx
0x9FF570: add     esp, 0Ch
0x9FF573: retn
