0x9DAFD0: push    0FFFFFFFFh
0x9DAFD2: push    offset SEH_9DAFD0
0x9DAFD7: mov     eax, large fs:0
0x9DAFDD: push    eax
0x9DAFDE: mov     eax, ___security_cookie
0x9DAFE3: xor     eax, esp
0x9DAFE5: push    eax
0x9DAFE6: lea     eax, [esp+10h+var_C]
0x9DAFEA: mov     large fs:0, eax
0x9DAFF0: push    offset off_B051E4; "255,255,255,255"
0x9DAFF5: mov     ecx, offset INISettingCollection
0x9DAFFA: mov     [esp+14h+var_4], 0
0x9DB002: call    SettingCollectionList_AddSetting
0x9DB007: push    offset sub_A17D50; void (__cdecl *)()
0x9DB00C: call    _atexit
0x9DB011: add     esp, 4
0x9DB014: mov     ecx, [esp+10h+var_C]
0x9DB018: mov     large fs:0, ecx
0x9DB01F: pop     ecx
0x9DB020: add     esp, 0Ch
0x9DB023: retn
