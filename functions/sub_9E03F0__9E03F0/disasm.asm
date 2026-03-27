0x9E03F0: push    0FFFFFFFFh
0x9E03F2: push    offset SEH_9E03F0
0x9E03F7: mov     eax, large fs:0
0x9E03FD: push    eax
0x9E03FE: mov     eax, ___security_cookie
0x9E0403: xor     eax, esp
0x9E0405: push    eax
0x9E0406: lea     eax, [esp+10h+var_C]
0x9E040A: mov     large fs:0, eax
0x9E0410: push    offset SettingLODFadeOutMultObjects
0x9E0415: mov     ecx, offset INISettingCollection
0x9E041A: mov     [esp+14h+var_4], 0
0x9E0422: call    SettingCollectionList_AddSetting
0x9E0427: push    offset sub_A1A850; void (__cdecl *)()
0x9E042C: call    _atexit
0x9E0431: add     esp, 4
0x9E0434: mov     ecx, [esp+10h+var_C]
0x9E0438: mov     large fs:0, ecx
0x9E043F: pop     ecx
0x9E0440: add     esp, 0Ch
0x9E0443: retn
