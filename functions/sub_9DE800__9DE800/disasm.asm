0x9DE800: push    0FFFFFFFFh
0x9DE802: push    offset SEH_9DE800
0x9DE807: mov     eax, large fs:0
0x9DE80D: push    eax
0x9DE80E: mov     eax, ___security_cookie
0x9DE813: xor     eax, esp
0x9DE815: push    eax
0x9DE816: lea     eax, [esp+10h+var_C]
0x9DE81A: mov     large fs:0, eax
0x9DE820: push    offset flt_B06EC4
0x9DE825: mov     ecx, offset INISettingCollection
0x9DE82A: mov     [esp+14h+var_4], 0
0x9DE832: call    SettingCollectionList_AddSetting
0x9DE837: push    offset sub_A199B0; void (__cdecl *)()
0x9DE83C: call    _atexit
0x9DE841: add     esp, 4
0x9DE844: mov     ecx, [esp+10h+var_C]
0x9DE848: mov     large fs:0, ecx
0x9DE84F: pop     ecx
0x9DE850: add     esp, 0Ch
0x9DE853: retn
