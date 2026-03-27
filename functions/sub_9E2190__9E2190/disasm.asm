0x9E2190: push    0FFFFFFFFh
0x9E2192: push    offset SEH_9E2190
0x9E2197: mov     eax, large fs:0
0x9E219D: push    eax
0x9E219E: mov     eax, ___security_cookie
0x9E21A3: xor     eax, esp
0x9E21A5: push    eax
0x9E21A6: lea     eax, [esp+10h+var_C]
0x9E21AA: mov     large fs:0, eax
0x9E21B0: push    offset flt_B080DC
0x9E21B5: mov     ecx, offset INISettingCollection
0x9E21BA: mov     [esp+14h+var_4], 0
0x9E21C2: call    SettingCollectionList_AddSetting
0x9E21C7: push    offset sub_A1B370; void (__cdecl *)()
0x9E21CC: call    _atexit
0x9E21D1: add     esp, 4
0x9E21D4: mov     ecx, [esp+10h+var_C]
0x9E21D8: mov     large fs:0, ecx
0x9E21DF: pop     ecx
0x9E21E0: add     esp, 0Ch
0x9E21E3: retn
