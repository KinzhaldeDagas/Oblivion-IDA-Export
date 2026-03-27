0x9E3460: push    0FFFFFFFFh
0x9E3462: push    offset SEH_9E3460
0x9E3467: mov     eax, large fs:0
0x9E346D: push    eax
0x9E346E: mov     eax, ___security_cookie
0x9E3473: xor     eax, esp
0x9E3475: push    eax
0x9E3476: lea     eax, [esp+10h+var_C]
0x9E347A: mov     large fs:0, eax
0x9E3480: push    offset flt_B09AF8
0x9E3485: mov     ecx, offset INISettingCollection
0x9E348A: mov     [esp+14h+var_4], 0
0x9E3492: call    SettingCollectionList_AddSetting
0x9E3497: push    offset sub_A1BDC0; void (__cdecl *)()
0x9E349C: call    _atexit
0x9E34A1: add     esp, 4
0x9E34A4: mov     ecx, [esp+10h+var_C]
0x9E34A8: mov     large fs:0, ecx
0x9E34AF: pop     ecx
0x9E34B0: add     esp, 0Ch
0x9E34B3: retn
