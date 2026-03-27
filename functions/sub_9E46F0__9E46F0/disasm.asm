0x9E46F0: push    0FFFFFFFFh
0x9E46F2: push    offset SEH_9E46F0
0x9E46F7: mov     eax, large fs:0
0x9E46FD: push    eax
0x9E46FE: mov     eax, ___security_cookie
0x9E4703: xor     eax, esp
0x9E4705: push    eax
0x9E4706: lea     eax, [esp+10h+var_C]
0x9E470A: mov     large fs:0, eax
0x9E4710: push    offset flt_B11A54
0x9E4715: mov     ecx, offset BlendSettingCollection
0x9E471A: mov     [esp+14h+var_4], 0
0x9E4722: call    SettingCollectionList_AddSetting
0x9E4727: push    offset sub_A1C7C0; void (__cdecl *)()
0x9E472C: call    _atexit
0x9E4731: add     esp, 4
0x9E4734: mov     ecx, [esp+10h+var_C]
0x9E4738: mov     large fs:0, ecx
0x9E473F: pop     ecx
0x9E4740: add     esp, 0Ch
0x9E4743: retn
