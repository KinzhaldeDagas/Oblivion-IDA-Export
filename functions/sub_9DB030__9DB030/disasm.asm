0x9DB030: push    0FFFFFFFFh
0x9DB032: push    offset SEH_9DB030
0x9DB037: mov     eax, large fs:0
0x9DB03D: push    eax
0x9DB03E: mov     eax, ___security_cookie
0x9DB043: xor     eax, esp
0x9DB045: push    eax
0x9DB046: lea     eax, [esp+10h+var_C]
0x9DB04A: mov     large fs:0, eax
0x9DB050: push    offset off_B051EC; "255,255,255,255"
0x9DB055: mov     ecx, offset INISettingCollection
0x9DB05A: mov     [esp+14h+var_4], 0
0x9DB062: call    SettingCollectionList_AddSetting
0x9DB067: push    offset sub_A17D80; void (__cdecl *)()
0x9DB06C: call    _atexit
0x9DB071: add     esp, 4
0x9DB074: mov     ecx, [esp+10h+var_C]
0x9DB078: mov     large fs:0, ecx
0x9DB07F: pop     ecx
0x9DB080: add     esp, 0Ch
0x9DB083: retn
