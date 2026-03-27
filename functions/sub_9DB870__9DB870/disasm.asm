0x9DB870: push    0FFFFFFFFh
0x9DB872: push    offset SEH_9DB870
0x9DB877: mov     eax, large fs:0
0x9DB87D: push    eax
0x9DB87E: mov     eax, ___security_cookie
0x9DB883: xor     eax, esp
0x9DB885: push    eax
0x9DB886: lea     eax, [esp+10h+var_C]
0x9DB88A: mov     large fs:0, eax
0x9DB890: push    offset off_B0557C; "One or more plugins could not find the "...
0x9DB895: mov     ecx, offset INISettingCollection
0x9DB89A: mov     [esp+14h+var_4], 0
0x9DB8A2: call    SettingCollectionList_AddSetting
0x9DB8A7: push    offset sub_A18180; void (__cdecl *)()
0x9DB8AC: call    _atexit
0x9DB8B1: add     esp, 4
0x9DB8B4: mov     ecx, [esp+10h+var_C]
0x9DB8B8: mov     large fs:0, ecx
0x9DB8BF: pop     ecx
0x9DB8C0: add     esp, 0Ch
0x9DB8C3: retn
