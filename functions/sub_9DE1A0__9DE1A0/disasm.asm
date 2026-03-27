0x9DE1A0: push    0FFFFFFFFh
0x9DE1A2: push    offset SEH_9DE1A0
0x9DE1A7: mov     eax, large fs:0
0x9DE1AD: push    eax
0x9DE1AE: mov     eax, ___security_cookie
0x9DE1B3: xor     eax, esp
0x9DE1B5: push    eax
0x9DE1B6: lea     eax, [esp+10h+var_C]
0x9DE1BA: mov     large fs:0, eax
0x9DE1C0: push    offset flt_B06E3C
0x9DE1C5: mov     ecx, offset INISettingCollection
0x9DE1CA: mov     [esp+14h+var_4], 0
0x9DE1D2: call    SettingCollectionList_AddSetting
0x9DE1D7: push    offset sub_A19680; void (__cdecl *)()
0x9DE1DC: call    _atexit
0x9DE1E1: add     esp, 4
0x9DE1E4: mov     ecx, [esp+10h+var_C]
0x9DE1E8: mov     large fs:0, ecx
0x9DE1EF: pop     ecx
0x9DE1F0: add     esp, 0Ch
0x9DE1F3: retn
