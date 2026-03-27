0x9E45D0: push    0FFFFFFFFh
0x9E45D2: push    offset SEH_9E45D0
0x9E45D7: mov     eax, large fs:0
0x9E45DD: push    eax
0x9E45DE: mov     eax, ___security_cookie
0x9E45E3: xor     eax, esp
0x9E45E5: push    eax
0x9E45E6: lea     eax, [esp+10h+var_C]
0x9E45EA: mov     large fs:0, eax
0x9E45F0: push    offset flt_B11A3C
0x9E45F5: mov     ecx, offset BlendSettingCollection
0x9E45FA: mov     [esp+14h+var_4], 0
0x9E4602: call    SettingCollectionList_AddSetting
0x9E4607: push    offset sub_A1C730; void (__cdecl *)()
0x9E460C: call    _atexit
0x9E4611: add     esp, 4
0x9E4614: mov     ecx, [esp+10h+var_C]
0x9E4618: mov     large fs:0, ecx
0x9E461F: pop     ecx
0x9E4620: add     esp, 0Ch
0x9E4623: retn
