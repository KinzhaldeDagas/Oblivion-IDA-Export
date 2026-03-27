0x9E4630: push    0FFFFFFFFh
0x9E4632: push    offset SEH_9E4630
0x9E4637: mov     eax, large fs:0
0x9E463D: push    eax
0x9E463E: mov     eax, ___security_cookie
0x9E4643: xor     eax, esp
0x9E4645: push    eax
0x9E4646: lea     eax, [esp+10h+var_C]
0x9E464A: mov     large fs:0, eax
0x9E4650: push    offset flt_B11A44
0x9E4655: mov     ecx, offset BlendSettingCollection
0x9E465A: mov     [esp+14h+var_4], 0
0x9E4662: call    SettingCollectionList_AddSetting
0x9E4667: push    offset sub_A1C760; void (__cdecl *)()
0x9E466C: call    _atexit
0x9E4671: add     esp, 4
0x9E4674: mov     ecx, [esp+10h+var_C]
0x9E4678: mov     large fs:0, ecx
0x9E467F: pop     ecx
0x9E4680: add     esp, 0Ch
0x9E4683: retn
