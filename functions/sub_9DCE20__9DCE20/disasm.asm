0x9DCE20: push    0FFFFFFFFh
0x9DCE22: push    offset SEH_9DCE20
0x9DCE27: mov     eax, large fs:0
0x9DCE2D: push    eax
0x9DCE2E: mov     eax, ___security_cookie
0x9DCE33: xor     eax, esp
0x9DCE35: push    eax
0x9DCE36: lea     eax, [esp+10h+var_C]
0x9DCE3A: mov     large fs:0, eax
0x9DCE40: push    offset unk_B06C9C
0x9DCE45: mov     ecx, offset INISettingCollection
0x9DCE4A: mov     [esp+14h+var_4], 0
0x9DCE52: call    SettingCollectionList_AddSetting
0x9DCE57: push    offset sub_A18CC0; void (__cdecl *)()
0x9DCE5C: call    _atexit
0x9DCE61: add     esp, 4
0x9DCE64: mov     ecx, [esp+10h+var_C]
0x9DCE68: mov     large fs:0, ecx
0x9DCE6F: pop     ecx
0x9DCE70: add     esp, 0Ch
0x9DCE73: retn
