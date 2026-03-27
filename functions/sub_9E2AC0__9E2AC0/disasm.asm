0x9E2AC0: push    0FFFFFFFFh
0x9E2AC2: push    offset SEH_9E2AC0
0x9E2AC7: mov     eax, large fs:0
0x9E2ACD: push    eax
0x9E2ACE: mov     eax, ___security_cookie
0x9E2AD3: xor     eax, esp
0x9E2AD5: push    eax
0x9E2AD6: lea     eax, [esp+10h+var_C]
0x9E2ADA: mov     large fs:0, eax
0x9E2AE0: push    offset flt_B08B44
0x9E2AE5: mov     ecx, offset INISettingCollection
0x9E2AEA: mov     [esp+14h+var_4], 0
0x9E2AF2: call    SettingCollectionList_AddSetting
0x9E2AF7: push    offset sub_A1B840; void (__cdecl *)()
0x9E2AFC: call    _atexit
0x9E2B01: add     esp, 4
0x9E2B04: mov     ecx, [esp+10h+var_C]
0x9E2B08: mov     large fs:0, ecx
0x9E2B0F: pop     ecx
0x9E2B10: add     esp, 0Ch
0x9E2B13: retn
