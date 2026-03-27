0x9E2DC0: push    0FFFFFFFFh
0x9E2DC2: push    offset SEH_9E2DC0
0x9E2DC7: mov     eax, large fs:0
0x9E2DCD: push    eax
0x9E2DCE: mov     eax, ___security_cookie
0x9E2DD3: xor     eax, esp
0x9E2DD5: push    eax
0x9E2DD6: lea     eax, [esp+10h+var_C]
0x9E2DDA: mov     large fs:0, eax
0x9E2DE0: push    offset dword_B08B84
0x9E2DE5: mov     ecx, offset INISettingCollection
0x9E2DEA: mov     [esp+14h+var_4], 0
0x9E2DF2: call    SettingCollectionList_AddSetting
0x9E2DF7: push    offset sub_A1B9C0; void (__cdecl *)()
0x9E2DFC: call    _atexit
0x9E2E01: add     esp, 4
0x9E2E04: mov     ecx, [esp+10h+var_C]
0x9E2E08: mov     large fs:0, ecx
0x9E2E0F: pop     ecx
0x9E2E10: add     esp, 0Ch
0x9E2E13: retn
