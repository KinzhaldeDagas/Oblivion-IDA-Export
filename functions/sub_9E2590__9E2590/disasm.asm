0x9E2590: push    0FFFFFFFFh
0x9E2592: push    offset SEH_9E2590
0x9E2597: mov     eax, large fs:0
0x9E259D: push    eax
0x9E259E: mov     eax, ___security_cookie
0x9E25A3: xor     eax, esp
0x9E25A5: push    eax
0x9E25A6: lea     eax, [esp+10h+var_C]
0x9E25AA: mov     large fs:0, eax
0x9E25B0: push    offset bOutQuadInLinearAttenuation
0x9E25B5: mov     ecx, offset INISettingCollection
0x9E25BA: mov     [esp+14h+var_4], 0
0x9E25C2: call    SettingCollectionList_AddSetting
0x9E25C7: push    offset sub_A1B570; void (__cdecl *)()
0x9E25CC: call    _atexit
0x9E25D1: add     esp, 4
0x9E25D4: mov     ecx, [esp+10h+var_C]
0x9E25D8: mov     large fs:0, ecx
0x9E25DF: pop     ecx
0x9E25E0: add     esp, 0Ch
0x9E25E3: retn
