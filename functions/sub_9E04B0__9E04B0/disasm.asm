0x9E04B0: push    0FFFFFFFFh
0x9E04B2: push    offset SEH_9E04B0
0x9E04B7: mov     eax, large fs:0
0x9E04BD: push    eax
0x9E04BE: mov     eax, ___security_cookie
0x9E04C3: xor     eax, esp
0x9E04C5: push    eax
0x9E04C6: lea     eax, [esp+10h+var_C]
0x9E04CA: mov     large fs:0, eax
0x9E04D0: push    offset SettingLODFadeOutMultActors
0x9E04D5: mov     ecx, offset INISettingCollection
0x9E04DA: mov     [esp+14h+var_4], 0
0x9E04E2: call    SettingCollectionList_AddSetting
0x9E04E7: push    offset sub_A1A8B0; void (__cdecl *)()
0x9E04EC: call    _atexit
0x9E04F1: add     esp, 4
0x9E04F4: mov     ecx, [esp+10h+var_C]
0x9E04F8: mov     large fs:0, ecx
0x9E04FF: pop     ecx
0x9E0500: add     esp, 0Ch
0x9E0503: retn
