0x9DE500: push    0FFFFFFFFh
0x9DE502: push    offset SEH_9DE500
0x9DE507: mov     eax, large fs:0
0x9DE50D: push    eax
0x9DE50E: mov     eax, ___security_cookie
0x9DE513: xor     eax, esp
0x9DE515: push    eax
0x9DE516: lea     eax, [esp+10h+var_C]
0x9DE51A: mov     large fs:0, eax
0x9DE520: push    offset flt_B06E84
0x9DE525: mov     ecx, offset INISettingCollection
0x9DE52A: mov     [esp+14h+var_4], 0
0x9DE532: call    SettingCollectionList_AddSetting
0x9DE537: push    offset sub_A19830; void (__cdecl *)()
0x9DE53C: call    _atexit
0x9DE541: add     esp, 4
0x9DE544: mov     ecx, [esp+10h+var_C]
0x9DE548: mov     large fs:0, ecx
0x9DE54F: pop     ecx
0x9DE550: add     esp, 0Ch
0x9DE553: retn
