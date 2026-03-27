0x9E3820: push    0FFFFFFFFh
0x9E3822: push    offset SEH_9E3820
0x9E3827: mov     eax, large fs:0
0x9E382D: push    eax
0x9E382E: mov     eax, ___security_cookie
0x9E3833: xor     eax, esp
0x9E3835: push    eax
0x9E3836: lea     eax, [esp+10h+var_C]
0x9E383A: mov     large fs:0, eax
0x9E3840: push    offset byte_B09B48
0x9E3845: mov     ecx, offset INISettingCollection
0x9E384A: mov     [esp+14h+var_4], 0
0x9E3852: call    SettingCollectionList_AddSetting
0x9E3857: push    offset sub_A1BFA0; void (__cdecl *)()
0x9E385C: call    _atexit
0x9E3861: add     esp, 4
0x9E3864: mov     ecx, [esp+10h+var_C]
0x9E3868: mov     large fs:0, ecx
0x9E386F: pop     ecx
0x9E3870: add     esp, 0Ch
0x9E3873: retn
