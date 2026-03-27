0x9D81A0: push    0FFFFFFFFh
0x9D81A2: push    offset SEH_9D81A0
0x9D81A7: mov     eax, large fs:0
0x9D81AD: push    eax
0x9D81AE: mov     eax, ___security_cookie
0x9D81B3: xor     eax, esp
0x9D81B5: push    eax
0x9D81B6: lea     eax, [esp+10h+var_C]
0x9D81BA: mov     large fs:0, eax
0x9D81C0: push    offset flt_B02C4C
0x9D81C5: mov     ecx, offset INISettingCollection
0x9D81CA: mov     [esp+14h+var_4], 0
0x9D81D2: call    SettingCollectionList_AddSetting
0x9D81D7: push    offset sub_A164F0; void (__cdecl *)()
0x9D81DC: call    _atexit
0x9D81E1: add     esp, 4
0x9D81E4: mov     ecx, [esp+10h+var_C]
0x9D81E8: mov     large fs:0, ecx
0x9D81EF: pop     ecx
0x9D81F0: add     esp, 0Ch
0x9D81F3: retn
