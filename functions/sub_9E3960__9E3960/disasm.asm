0x9E3960: push    0FFFFFFFFh
0x9E3962: push    offset SEH_9E3960
0x9E3967: mov     eax, large fs:0
0x9E396D: push    eax
0x9E396E: mov     eax, ___security_cookie
0x9E3973: xor     eax, esp
0x9E3975: push    eax
0x9E3976: lea     eax, [esp+10h+var_C]
0x9E397A: mov     large fs:0, eax
0x9E3980: push    offset bCheckOffsetOnLoad
0x9E3985: mov     ecx, offset INISettingCollection
0x9E398A: mov     [esp+14h+var_4], 0
0x9E3992: call    SettingCollectionList_AddSetting
0x9E3997: push    offset sub_A1C040; void (__cdecl *)()
0x9E399C: call    _atexit
0x9E39A1: add     esp, 4
0x9E39A4: mov     ecx, [esp+10h+var_C]
0x9E39A8: mov     large fs:0, ecx
0x9E39AF: pop     ecx
0x9E39B0: add     esp, 0Ch
0x9E39B3: retn
