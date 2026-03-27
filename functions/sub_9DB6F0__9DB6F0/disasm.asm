0x9DB6F0: push    0FFFFFFFFh
0x9DB6F2: push    offset SEH_9DB6F0
0x9DB6F7: mov     eax, large fs:0
0x9DB6FD: push    eax
0x9DB6FE: mov     eax, ___security_cookie
0x9DB703: xor     eax, esp
0x9DB705: push    eax
0x9DB706: lea     eax, [esp+10h+var_C]
0x9DB70A: mov     large fs:0, eax
0x9DB710: push    offset off_B0555C; "Data\\"
0x9DB715: mov     ecx, offset INISettingCollection
0x9DB71A: mov     [esp+14h+var_4], 0
0x9DB722: call    SettingCollectionList_AddSetting
0x9DB727: push    offset sub_A180C0; void (__cdecl *)()
0x9DB72C: call    _atexit
0x9DB731: add     esp, 4
0x9DB734: mov     ecx, [esp+10h+var_C]
0x9DB738: mov     large fs:0, ecx
0x9DB73F: pop     ecx
0x9DB740: add     esp, 0Ch
0x9DB743: retn
