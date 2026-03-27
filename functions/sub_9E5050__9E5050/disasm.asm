0x9E5050: push    0FFFFFFFFh
0x9E5052: push    offset SEH_9E5050
0x9E5057: mov     eax, large fs:0
0x9E505D: push    eax
0x9E505E: mov     eax, ___security_cookie
0x9E5063: xor     eax, esp
0x9E5065: push    eax
0x9E5066: lea     eax, [esp+10h+var_C]
0x9E506A: mov     large fs:0, eax
0x9E5070: push    offset off_B11B1C; "1.0, 1.0"
0x9E5075: mov     ecx, offset BlendSettingCollection
0x9E507A: mov     [esp+14h+var_4], 0
0x9E5082: call    SettingCollectionList_AddSetting
0x9E5087: push    offset sub_A1CC70; void (__cdecl *)()
0x9E508C: call    _atexit
0x9E5091: add     esp, 4
0x9E5094: mov     ecx, [esp+10h+var_C]
0x9E5098: mov     large fs:0, ecx
0x9E509F: pop     ecx
0x9E50A0: add     esp, 0Ch
0x9E50A3: retn
