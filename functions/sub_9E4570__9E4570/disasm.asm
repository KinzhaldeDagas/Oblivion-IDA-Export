0x9E4570: push    0FFFFFFFFh
0x9E4572: push    offset SEH_9E4570
0x9E4577: mov     eax, large fs:0
0x9E457D: push    eax
0x9E457E: mov     eax, ___security_cookie
0x9E4583: xor     eax, esp
0x9E4585: push    eax
0x9E4586: lea     eax, [esp+10h+var_C]
0x9E458A: mov     large fs:0, eax
0x9E4590: push    offset flt_B11A34
0x9E4595: mov     ecx, offset BlendSettingCollection
0x9E459A: mov     [esp+14h+var_4], 0
0x9E45A2: call    SettingCollectionList_AddSetting
0x9E45A7: push    offset sub_A1C700; void (__cdecl *)()
0x9E45AC: call    _atexit
0x9E45B1: add     esp, 4
0x9E45B4: mov     ecx, [esp+10h+var_C]
0x9E45B8: mov     large fs:0, ecx
0x9E45BF: pop     ecx
0x9E45C0: add     esp, 0Ch
0x9E45C3: retn
