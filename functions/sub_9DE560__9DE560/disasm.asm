0x9DE560: push    0FFFFFFFFh
0x9DE562: push    offset SEH_9DE560
0x9DE567: mov     eax, large fs:0
0x9DE56D: push    eax
0x9DE56E: mov     eax, ___security_cookie
0x9DE573: xor     eax, esp
0x9DE575: push    eax
0x9DE576: lea     eax, [esp+10h+var_C]
0x9DE57A: mov     large fs:0, eax
0x9DE580: push    offset flt_B06E8C
0x9DE585: mov     ecx, offset INISettingCollection
0x9DE58A: mov     [esp+14h+var_4], 0
0x9DE592: call    SettingCollectionList_AddSetting
0x9DE597: push    offset sub_A19860; void (__cdecl *)()
0x9DE59C: call    _atexit
0x9DE5A1: add     esp, 4
0x9DE5A4: mov     ecx, [esp+10h+var_C]
0x9DE5A8: mov     large fs:0, ecx
0x9DE5AF: pop     ecx
0x9DE5B0: add     esp, 0Ch
0x9DE5B3: retn
