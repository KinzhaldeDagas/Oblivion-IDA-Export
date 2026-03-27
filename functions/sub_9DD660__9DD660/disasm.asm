0x9DD660: push    0FFFFFFFFh
0x9DD662: push    offset SEH_9DD660
0x9DD667: mov     eax, large fs:0
0x9DD66D: push    eax
0x9DD66E: mov     eax, ___security_cookie
0x9DD673: xor     eax, esp
0x9DD675: push    eax
0x9DD676: lea     eax, [esp+10h+var_C]
0x9DD67A: mov     large fs:0, eax
0x9DD680: push    offset flt_B06D4C
0x9DD685: mov     ecx, offset INISettingCollection
0x9DD68A: mov     [esp+14h+var_4], 0
0x9DD692: call    SettingCollectionList_AddSetting
0x9DD697: push    offset sub_A190E0; void (__cdecl *)()
0x9DD69C: call    _atexit
0x9DD6A1: add     esp, 4
0x9DD6A4: mov     ecx, [esp+10h+var_C]
0x9DD6A8: mov     large fs:0, ecx
0x9DD6AF: pop     ecx
0x9DD6B0: add     esp, 0Ch
0x9DD6B3: retn
