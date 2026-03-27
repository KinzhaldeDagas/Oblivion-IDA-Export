0x9D9AC0: push    0FFFFFFFFh
0x9D9AC2: push    offset SEH_9D9AC0
0x9D9AC7: mov     eax, large fs:0
0x9D9ACD: push    eax
0x9D9ACE: mov     eax, ___security_cookie
0x9D9AD3: xor     eax, esp
0x9D9AD5: push    eax
0x9D9AD6: lea     eax, [esp+10h+var_C]
0x9D9ADA: mov     large fs:0, eax
0x9D9AE0: push    offset byte_B03144
0x9D9AE5: mov     ecx, offset INISettingCollection
0x9D9AEA: mov     [esp+14h+var_4], 0
0x9D9AF2: call    SettingCollectionList_AddSetting
0x9D9AF7: push    offset sub_A17300; void (__cdecl *)()
0x9D9AFC: call    _atexit
0x9D9B01: add     esp, 4
0x9D9B04: mov     ecx, [esp+10h+var_C]
0x9D9B08: mov     large fs:0, ecx
0x9D9B0F: pop     ecx
0x9D9B10: add     esp, 0Ch
0x9D9B13: retn
