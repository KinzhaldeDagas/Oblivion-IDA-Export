0x9E5710: push    0FFFFFFFFh
0x9E5712: push    offset SEH_9E5710
0x9E5717: mov     eax, large fs:0
0x9E571D: push    eax
0x9E571E: mov     eax, ___security_cookie
0x9E5723: xor     eax, esp
0x9E5725: push    eax
0x9E5726: lea     eax, [esp+10h+var_C]
0x9E572A: mov     large fs:0, eax
0x9E5730: push    offset off_B11BAC; "1.0, 1.0"
0x9E5735: mov     ecx, offset BlendSettingCollection
0x9E573A: mov     [esp+14h+var_4], 0
0x9E5742: call    SettingCollectionList_AddSetting
0x9E5747: push    offset sub_A1CFD0; void (__cdecl *)()
0x9E574C: call    _atexit
0x9E5751: add     esp, 4
0x9E5754: mov     ecx, [esp+10h+var_C]
0x9E5758: mov     large fs:0, ecx
0x9E575F: pop     ecx
0x9E5760: add     esp, 0Ch
0x9E5763: retn
