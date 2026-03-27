0x9DF960: push    0FFFFFFFFh
0x9DF962: push    offset SEH_9DF960
0x9DF967: mov     eax, large fs:0
0x9DF96D: push    eax
0x9DF96E: mov     eax, ___security_cookie
0x9DF973: xor     eax, esp
0x9DF975: push    eax
0x9DF976: lea     eax, [esp+10h+var_C]
0x9DF97A: mov     large fs:0, eax
0x9DF980: push    offset UseWaterReflectionActors
0x9DF985: mov     ecx, offset INISettingCollection
0x9DF98A: mov     [esp+14h+var_4], 0
0x9DF992: call    SettingCollectionList_AddSetting
0x9DF997: push    offset sub_A1A2D0; void (__cdecl *)()
0x9DF99C: call    _atexit
0x9DF9A1: add     esp, 4
0x9DF9A4: mov     ecx, [esp+10h+var_C]
0x9DF9A8: mov     large fs:0, ecx
0x9DF9AF: pop     ecx
0x9DF9B0: add     esp, 0Ch
0x9DF9B3: retn
